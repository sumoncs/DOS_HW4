#ifndef  SERVER_H
#define  SERVER_H

#include "neighbors.h"

extern  neighbors neighbors_list[BUFFER_SIZE];
extern int node_index;     // Keep track of node

class Server
{

public:
    Server();
    void start(void *conn, neighbors *neighbors_list, int node_index);
    void update_list(char *payload, neighbors *neighbors_list, int node_index);

};

#endif
