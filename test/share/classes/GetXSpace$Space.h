#ifndef _GetXSpace$Space_h_
#define _GetXSpace$Space_h_
//$ class GetXSpace$Space
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("KSIZE")
#undef KSIZE

class GetXSpace$Space : public ::java::lang::Object {
	$class(GetXSpace$Space, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GetXSpace$Space();
	void init$($String* total, $String* free, $String* name);
	virtual int64_t free();
	virtual $String* name();
	virtual $String* toString() override;
	virtual int64_t total();
	virtual bool woomFree(int64_t freeSpace);
	static const int64_t KSIZE = 1024;
	$String* name$ = nullptr;
	int64_t total$ = 0;
	int64_t free$ = 0;
};

#pragma pop_macro("KSIZE")

#endif // _GetXSpace$Space_h_