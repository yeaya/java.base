#ifndef _Basic4ref_h_
#define _Basic4ref_h_
//$ class Basic4ref
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class Reference;
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}

class $export Basic4ref : public ::java::lang::Object {
	$class(Basic4ref, $HAS_FINALIZE, ::java::lang::Object)
public:
	Basic4ref();
	void init$();
	static void createNoise();
	virtual void finalize() override;
	static void fork(::java::lang::Runnable* proc);
	static void main($StringArray* args);
	static void showReferences();
	static ::java::lang::ref::ReferenceQueue* q;
	static ::java::lang::ref::ReferenceQueue* q2;
	static ::java::lang::ref::Reference* rw;
	static ::java::lang::ref::Reference* rw2;
	static ::java::lang::ref::Reference* rp;
	static ::java::lang::ref::Reference* rp2;
	static ::java::util::Vector* keep;
	static bool finalized;
	$Object* sub = nullptr;
};

#endif // _Basic4ref_h_