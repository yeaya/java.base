#ifndef _ReferenceClone$CloneableReference_h_
#define _ReferenceClone$CloneableReference_h_
//$ class ReferenceClone$CloneableReference
//$ extends java.lang.ref.WeakReference
//$ implements java.lang.Cloneable

#include <java/lang/Cloneable.h>
#include <java/lang/ref/WeakReference.h>

class ReferenceClone;

class $export ReferenceClone$CloneableReference : public ::java::lang::ref::WeakReference, public ::java::lang::Cloneable {
	$class(ReferenceClone$CloneableReference, $NO_CLASS_INIT, ::java::lang::ref::WeakReference, ::java::lang::Cloneable)
public:
	ReferenceClone$CloneableReference();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::ReferenceClone* this$0, Object$* referent);
	virtual $Object* clone() override;
	virtual $String* toString() override;
	::ReferenceClone* this$0 = nullptr;
};

#endif // _ReferenceClone$CloneableReference_h_