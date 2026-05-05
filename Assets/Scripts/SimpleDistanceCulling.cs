using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class SimpleDistanceCulling : MonoBehaviour
{
    [Header("Culling Settings")]
    [Tooltip("Masukkan semua objek yang ingin di-cull")]
    public List<GameObject> objectsToManage = new List<GameObject>();

    [Tooltip("Jarak maksimal sebelum objek dimatikan")]
    public float cullingDistance = 40f;

    [Tooltip("Seberapa sering pengecekan jarak (detik) - lebih besar = lebih hemat")]
    public float checkInterval = 0.2f;

    private Transform playerTransform;
    private Camera mainCamera;

    void Start()
    {
        // Cari player otomatis
        GameObject player = GameObject.FindGameObjectWithTag("Player");
        if (player != null)
        {
            playerTransform = player.transform;
        }
        else
        {
            Debug.LogWarning("SimpleDistanceCulling: Tidak ada GameObject dengan tag 'Player'!");
            playerTransform = Camera.main.transform;
        }

        mainCamera = Camera.main;

        // Mulai coroutine agar tidak cek setiap frame
        StartCoroutine(CullingRoutine());
    }

    IEnumerator CullingRoutine()
    {
        while (true)
        {
            yield return new WaitForSeconds(checkInterval);
            
            if (playerTransform == null) continue;

            foreach (GameObject obj in objectsToManage)
            {
                if (obj == null) continue;

                float distance = Vector3.Distance(playerTransform.position, obj.transform.position);
                bool shouldBeActive = distance <= cullingDistance;

                // Hanya set active jika state berubah (hemat performa)
                if (obj.activeSelf != shouldBeActive)
                {
                    obj.SetActive(shouldBeActive);
                }
            }
        }
    }

    // Visualisasi jarak di Scene View
    void OnDrawGizmosSelected()
    {
        if (playerTransform != null)
        {
            Gizmos.color = Color.yellow;
            Gizmos.DrawWireSphere(playerTransform.position, cullingDistance);
        }
    }
}