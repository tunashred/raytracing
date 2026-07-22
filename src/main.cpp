#include <iostream>

int main() {
    int height = 256;
    int width  = 256;

    std::cout << "P3\n" << width << ' ' << height << "\n255\n";

    for (int j = 0; j < height; j++) {
        std::clog << "\rScanlines remaining: " << (height - j) << ' ' << std::flush;
        for (int i = 0; i < width; i++) {
            auto r = double(i) / (width - 1),
                 g = double(j) / (height - 1),
                 b = 0.0;

            int ir = int(255.999 * r),
                ig = int(255.999 * g),
                ib = int(255.999 * b);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }
    std::clog << "\rDone.                 \n";

    return 0;
}
