#include <iostream>

int main () {
    
    //  Imagen   
    
    const int imagen_alto = 256;
    const int imagen_ancho = 256;

    //  Render

    std::cout << "P3\n" << imagen_ancho << " " << imagen_alto << "\n255\n"; 

    for (int j = imagen_alto-1; j >= 0; --j) {
        std::cerr << "\rScanlines por terminar: " << j << " " << std::flush;
        for (int i = 0; i < imagen_ancho; ++i) {
            auto r = double(i) / (imagen_ancho - 1);
            auto g = double(j) / (imagen_alto - 1);
            auto b = 0.25;

            int ir = static_cast<int>(r * 255.999);
            int ig = static_cast<int>(g * 255.999);
            int ib = static_cast<int>(b * 255.999);

            std::cout << ir << " " << ig << " " << ib << "\n";
        }
    }

    std::cerr << "\nTerminado. \n";
}