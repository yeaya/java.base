#ifndef _IsParallelCapable$NonParaSubCL2_h_
#define _IsParallelCapable$NonParaSubCL2_h_
//$ class IsParallelCapable$NonParaSubCL2
//$ extends IsParallelCapable$NonParaCL

#include <IsParallelCapable$NonParaCL.h>

class $export IsParallelCapable$NonParaSubCL2 : public ::IsParallelCapable$NonParaCL {
	$class(IsParallelCapable$NonParaSubCL2, 0, ::IsParallelCapable$NonParaCL)
public:
	IsParallelCapable$NonParaSubCL2();
	using ::IsParallelCapable$NonParaCL::findClass;
	void init$();
	virtual bool expectCapable() override;
};

#endif // _IsParallelCapable$NonParaSubCL2_h_