#ifndef _UninitializedParent$1_h_
#define _UninitializedParent$1_h_
//$ class UninitializedParent$1
//$ extends java.lang.ClassLoader

#include <java/lang/ClassLoader.h>

class UninitializedParent$1 : public ::java::lang::ClassLoader {
	$class(UninitializedParent$1, $HAS_FINALIZE | $NO_CLASS_INIT, ::java::lang::ClassLoader)
public:
	UninitializedParent$1();
	void init$(::java::lang::ClassLoader* arg0);
	virtual void finalize() override;
};

#endif // _UninitializedParent$1_h_