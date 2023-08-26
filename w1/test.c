#include <unistd.h>

typedef char * string;

int main(void)
{
    string name = "Eu to passano mal!\n";
    
     write(1, name, 19);

    return (0);
}
