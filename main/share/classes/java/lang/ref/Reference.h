#ifndef _java_lang_ref_Reference_h_
#define _java_lang_ref_Reference_h_
//$ class java.lang.ref.Reference
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}

namespace java {
	namespace lang {
		namespace ref {

class $export Reference : public ::java::lang::Object {
	$class(Reference, $PRELOAD, ::java::lang::Object)
public:
	Reference();
	void init$(Object$* referent);
	void init$(Object$* referent, ::java::lang::ref::ReferenceQueue* queue);
	virtual void clear();
	void clear0();
	virtual void clearInactiveFinalReference();
	virtual $Object* clone() override;
	virtual bool enqueue();
	void enqueueFromPending();
	virtual $Object* get();
	static ::java::lang::ref::Reference* getAndClearReferencePendingList();
	virtual $Object* getFromInactiveFinalReference();
	static bool hasReferencePendingList();
	virtual bool isEnqueued();
	static void processPendingReferences();
	static void reachabilityFence(Object$* ref);
	bool refersTo(Object$* obj);
	virtual bool refersTo0(Object$* o);
	static void waitForReferencePendingList();
	static bool waitForReferenceProcessing();
	static bool $assertionsDisabled;
	$Object* referent = nullptr;
	$volatile(::java::lang::ref::ReferenceQueue*) queue = nullptr;
	$volatile(::java::lang::ref::Reference*) next = nullptr;
	::java::lang::ref::Reference* discovered = nullptr;
	static $Object* processPendingLock;
	static bool processPendingActive;
};

		} // ref
	} // lang
} // java

#endif // _java_lang_ref_Reference_h_