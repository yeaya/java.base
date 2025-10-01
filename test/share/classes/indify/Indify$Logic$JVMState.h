#ifndef _indify_Indify$Logic$JVMState_h_
#define _indify_Indify$Logic$JVMState_h_
//$ class indify.Indify$Logic$JVMState
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace indify {
	class Indify$Logic;
}
namespace java {
	namespace util {
		class List;
	}
}

namespace indify {

class Indify$Logic$JVMState : public ::java::lang::Object {
	$class(Indify$Logic$JVMState, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Indify$Logic$JVMState();
	void init$(::indify::Indify$Logic* this$1);
	virtual ::java::util::List* args(bool hasRecv, $String* type);
	virtual ::java::util::List* args(int32_t argsize);
	virtual $Object* pop();
	virtual void push(Object$* x);
	virtual void push2(Object$* x);
	virtual void pushAt(int32_t pos, Object$* x);
	virtual int32_t sp();
	virtual bool stackMotion(int32_t bc);
	virtual $Object* top();
	::indify::Indify$Logic* this$1 = nullptr;
	::java::util::List* stack = nullptr;
};

} // indify

#endif // _indify_Indify$Logic$JVMState_h_