#ifndef _ReferenceClone$WeakRef_h_
#define _ReferenceClone$WeakRef_h_
//$ class ReferenceClone$WeakRef
//$ extends java.lang.ref.WeakReference
//$ implements ReferenceClone$CloneableRef

#include <ReferenceClone$CloneableRef.h>
#include <java/lang/ref/WeakReference.h>

class ReferenceClone;

class $export ReferenceClone$WeakRef : public ::java::lang::ref::WeakReference, public ::ReferenceClone$CloneableRef {
	$class(ReferenceClone$WeakRef, $NO_CLASS_INIT, ::java::lang::ref::WeakReference, ::ReferenceClone$CloneableRef)
public:
	ReferenceClone$WeakRef();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::ReferenceClone* this$0, Object$* referent);
	virtual $Object* clone() override;
	virtual $String* toString() override;
	::ReferenceClone* this$0 = nullptr;
};

#endif // _ReferenceClone$WeakRef_h_