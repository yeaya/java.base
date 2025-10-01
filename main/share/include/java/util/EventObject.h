#ifndef _java_util_EventObject_h_
#define _java_util_EventObject_h_
//$ class java.util.EventObject
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace util {

class $import EventObject : public ::java::io::Serializable {
	$class(EventObject, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	EventObject();
	void init$(Object$* source);
	virtual $Object* getSource();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x4C8D094E186D7DA8;
	$Object* source = nullptr;
};

	} // util
} // java

#endif // _java_util_EventObject_h_