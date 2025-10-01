#ifndef _InnerClassToString$MyEntity_h_
#define _InnerClassToString$MyEntity_h_
//$ class InnerClassToString$MyEntity
//$ extends java.lang.Object

#include <java/lang/Object.h>

class InnerClassToString;
namespace java {
	namespace util {
		class Set;
	}
}

class $export InnerClassToString$MyEntity : public ::java::lang::Object {
	$class(InnerClassToString$MyEntity, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InnerClassToString$MyEntity();
	void init$(::InnerClassToString* this$0, ::java::util::Set* names);
	void init$(::InnerClassToString* this$0, $String* names);
	::InnerClassToString* this$0 = nullptr;
};

#endif // _InnerClassToString$MyEntity_h_