

#ifndef VERTEX_H
#define VERTEX_H

struct Vertex
{
	Vertex(){}
	Vertex(float x, float y, float z, 
		float nx, float ny, float nz, 
		float u, float v)
		: pos(x,y,z), normal(nx,ny,nz), texC(u,v){}

	Vertex(const D3DXVECTOR3 &ipos, const D3DXVECTOR3 &inormal, const D3DXVECTOR2 &itexC)
		:pos(ipos)
		,normal(inormal)
		,texC(itexC){};

	D3DXVECTOR3 pos;
	D3DXVECTOR3 normal;
	D3DXVECTOR2 texC;
};

#endif // VERTEX_H

