#ifndef TH2DRAWTOOL_H
#define TH2DRAWTOOL_H

#include <vector>

class TH2Poly;

#include "matrixstack.h"

class TH2DrawTool: public matrixstack {
private:
    TH2Poly* hist;

    std::vector<double> x;
    std::vector<double> y;

public:
    TH2DrawTool( TH2Poly* target );
    virtual ~TH2DrawTool() {}

    void Draw( const matrixstack::Vector& vector );

    typedef std::vector<matrixstack::Vector> point_list;

    void Draw( const point_list& points );

    Int_t FinishShape();
    void ResetShape();
};

#endif
