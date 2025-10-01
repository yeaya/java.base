#ifndef _java_io_ObjectOutputStream$DebugTraceInfoStack_h_
#define _java_io_ObjectOutputStream$DebugTraceInfoStack_h_
//$ class java.io.ObjectOutputStream$DebugTraceInfoStack
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace io {

class ObjectOutputStream$DebugTraceInfoStack : public ::java::lang::Object {
	$class(ObjectOutputStream$DebugTraceInfoStack, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ObjectOutputStream$DebugTraceInfoStack();
	void init$();
	virtual void clear();
	virtual void pop();
	virtual void push($String* entry);
	virtual $String* toString() override;
	::java::util::List* stack = nullptr;
};

	} // io
} // java

#endif // _java_io_ObjectOutputStream$DebugTraceInfoStack_h_