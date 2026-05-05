# Low-Poly Forest Optimization

**Low-Poly Forest Optimization** adalah project interactive 3D scene berbasis Unity yang dibuat untuk tugas mata kuliah **Graphics and Interactive Techniques**. Project ini menampilkan environment hutan low-poly dengan suasana sore, campfire sebagai pusat visual, serta perbandingan performa sebelum dan sesudah optimasi real-time rendering.

🎮 **Play Demo:**  
https://ranggapras.itch.io/low-poly-forest-optimization

---

## Project Overview

Project ini dibuat sebagai demo **Real-Time Rendering Optimization**, dengan fokus pada penerapan teknik optimasi grafika pada scene 3D interaktif. User dapat menjelajahi area hutan menggunakan sudut pandang first-person, lalu membandingkan scene **Before Optimization** dan **After Optimization**.

---

## Tools & Assets

- **Unity Editor:** 2022.3.62f3
- **Render Pipeline:** Built-in Render Pipeline
- **Player Controller:** Modular First Person Controller
- **Environment Asset:** Free Low Poly Nature Forest
- **Campfire Asset:** UPixelator - Campfire (3D Pixel Art)
- **LOD Tool:** Nanolod | Automatic LODs
- **Platform Build:** WebGL, uploaded to itch.io

---

## Features

- Interactive first-person exploration
- Low-poly forest environment
- Evening / sunset lighting setup
- Campfire with warm visual focus
- Before and after optimization scenes
- FPS and frame time display
- Scene switching for performance comparison

---

## Controls

| Key | Action |
|---|---|
| `WASD` | Move |
| `Mouse` | Look around |
| `1` | Switch to Before Optimization |
| `2` | Switch to After Optimization |
| `R` | Restart performance test |
| `Esc` | Unlock cursor |

---

## Optimization Techniques

The project applies several real-time rendering optimization techniques:

1. **LOD (Level of Detail)**  
   LOD was generated automatically using Nanolod to reduce mesh complexity for distant objects.

2. **Culling**  
   Distance-based culling is used to reduce unnecessary object rendering.

3. **Batching / Instancing**  
   Repeated objects and shared materials help reduce rendering overhead.

4. **Texture Optimization**  
   Existing asset textures are used efficiently to keep the scene lightweight for real-time rendering.

---

## Performance Comparison

| Scene | Average FPS | Average Frame Time |
|---|---:|---:|
| Before Optimization | ... FPS | ... ms |
| After Optimization | ... FPS | ... ms |

> Performance results are measured using FPS/frame time display and Unity Profiler.

---

## Project Structure

```text
Assets/
├── Scenes
├── Scripts
├── Materials
├── Prefabs
├── ImportedAssets
└── Optimization
