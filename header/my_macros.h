#include <sys/types.h>
#include <sys/sem.h>
#include <sys/ipc.h>

#ifndef MY_MACROS_H
#define MY_MACROS_H

#define MAX_PRODUCTS 30
#define MAX_CART_SIZE 25
#define ADMIN_FILE "/home/vidhish/Desktop/os-project/Online-Retail-Store/data/Admin_User"
#define CUSTOMER_FILE "/home/vidhish/Desktop/os-project/Online-Retail-Store/data/Customer_User"
#define PRODUCT_FILE "/home/vidhish/Desktop/os-project/Online-Retail-Store/data/Product_List"
#define ADMIN_LOG_FILE "/home/vidhish/Desktop/os-project/Online-Retail-Store/logs/admin/Admin_Log.txt"

union semun
{
    int val;
    struct semid_ds *buf;
    unsigned short int *array;
};

#endif
