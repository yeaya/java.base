#ifndef _indify_Indify$Outer_h_
#define _indify_Indify$Outer_h_
//$ class indify.Indify$Outer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace indify {
	class Indify$Attr;
}
namespace java {
	namespace util {
		class List;
	}
}

namespace indify {

class $export Indify$Outer : public ::java::lang::Object {
	$class(Indify$Outer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Indify$Outer();
	void init$();
	virtual ::java::util::List* attrs() {return nullptr;}
	virtual ::indify::Indify$Attr* findAttr($String* name);
	virtual ::indify::Indify$Attr* findAttr(int32_t name);
	virtual ::java::util::List* inners() {return nullptr;}
	virtual void linkInners();
	virtual ::indify::Indify$Outer* outer($Class* c);
};

} // indify

#endif // _indify_Indify$Outer_h_