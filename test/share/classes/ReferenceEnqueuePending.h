#ifndef _ReferenceEnqueuePending_h_
#define _ReferenceEnqueuePending_h_
//$ class ReferenceEnqueuePending
//$ extends java.lang.Object

#include <java/lang/Array.h>

class ReferenceEnqueuePending$NumberedWeakReference;
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}

class $export ReferenceEnqueuePending : public ::java::lang::Object {
	$class(ReferenceEnqueuePending, 0, ::java::lang::Object)
public:
	ReferenceEnqueuePending();
	void init$();
	static void checkResult(::java::lang::ref::ReferenceQueue* queue, int32_t expected);
	static void forceGc(int64_t millis);
	static void main($StringArray* argv);
	static void printMissingElements(int32_t length, int32_t expected);
	static void raisePriority();
	static void sort(int32_t length);
	static ::ReferenceEnqueuePending$NumberedWeakReference* waitForReference(::java::lang::ref::ReferenceQueue* queue);
	static bool debug;
	static const int32_t iterations = 1000;
	static const int32_t gc_trigger = 99;
	static $ints* a;
	static $Array<ReferenceEnqueuePending$NumberedWeakReference>* b;
};

#endif // _ReferenceEnqueuePending_h_