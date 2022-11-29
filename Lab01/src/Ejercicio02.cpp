// hacer que 10 cores ejecuten paralelamente el hello

#include <omp.h>
#include <iostream>

using namespace std;

int main(){
    int nthreads;
    int thread;
    //  --- crear 10 cores
    omp_set_num_threads(10);
    # pragma omp parallel(nthreads , thread)
    {
        thread = omp_get_thread_num(); 
        nthreads = omp_get_num_threads(); 
        
        cout << " Hola Mundo soy el proceso / core = "<< thread << " de " << nthreads << " que somos " << endl;
    }

    system("PAUSE");

    return 0;
}