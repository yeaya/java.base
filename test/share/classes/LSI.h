#ifndef _LSI_h_
#define _LSI_h_
//$ interface LSI
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

class LSI : public ::java::io::Serializable {
	$interface(LSI, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	virtual $String* convert($String* x) {return nullptr;}
};

#endif // _LSI_h_