#include<iostream>
#include"process.h"
#include <Eigen/Dense>
using Eigen::MatrixXd;


void Process::planProcess()
{
    std::cout<<"this is planning process"<<std::endl;
    my_map.mapInfo();

    MatrixXd m(2,2);
    m(0,0)=1;
    m(0,1)=8;
    m(1,0)=6;
    m(1,1)=m(1,0)+m(0,1);
    std::cout<<m<<std::endl;
    std::cout<<"planning success"<<std::endl;
}