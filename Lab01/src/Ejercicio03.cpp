// hacer que 10 cores ejecuten paralelamente el hello

#include <omp.h>
#include <iostream>

using namespace std;

int main(){
    int nthreads;
    int thread;
    //  --- crear 10 cores
    omp_set_num_threads(10);

    //  --- create new var
    int fistprivate = 15;
    # pragma omp parallel private(nthreads , thread, fistprivate)
    {
        thread = omp_get_thread_num(); 
        nthreads = omp_get_num_threads(); 
        
        cout << "soy el proceso / core = "<< thread << " de " << nthreads << " --fistprivate : " <<fistprivate<< endl;
    }

    system("PAUSE");

    return 0;
}