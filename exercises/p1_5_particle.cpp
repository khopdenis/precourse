#include <iostream>

struct Particle
{
    int id;
    float x, y, z;
    float vx, vy, vz;

    void update(float dt){
        x = x + vx*dt;
        y = y + vy*dt;
        z = z + vz*dt;
    }

    void show_position(){
        std::cout << id << ". x="<< x<<" y="<< y << " z="<< z << std::endl;
    }

};

int main()
{
    const int size = 10;
    Particle particles[size];
    for (int i = 0; i < size; i++)
    {
        particles[i].id = i;
        particles[i].x = 3*i + 1.0f;
        particles[i].y = 3*i + 2.0f;
        particles[i].z = 3*i + 3.0f;

        particles[i].vx = 5*i - 1.0f;
        particles[i].vy = 5*i - 2.0f;
        particles[i].vz = 5*i - 3.0f;
    }
    
    float dt = 0.1f;
    // now play 100 sim cycles
    for (int cycle = 0; cycle < 100; cycle++)
    {
        std::cout << "Cycle " << cycle << std::endl;
        for (int i = 0; i < size; i++)
        {
            particles[i].update(dt);
            particles[i].show_position();
        }
    }
    

    return 0;
}