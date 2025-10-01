#ifndef _ReferenceClone$PhantomRef_h_
#define _ReferenceClone$PhantomRef_h_
//$ class ReferenceClone$PhantomRef
//$ extends java.lang.ref.PhantomReference
//$ implements ReferenceClone$CloneableRef

#include <ReferenceClone$CloneableRef.h>
#include <java/lang/ref/PhantomReference.h>

class ReferenceClone;

class $export ReferenceClone$PhantomRef : public ::java::lang::ref::PhantomReference, public ::ReferenceClone$CloneableRef {
	$class(ReferenceClone$PhantomRef, $NO_CLASS_INIT, ::java::lang::ref::PhantomReference, ::ReferenceClone$CloneableRef)
public:
	ReferenceClone$PhantomRef();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::ReferenceClone* this$0, Object$* referent);
	virtual $Object* clone() override;
	virtual $String* toString() override;
	::ReferenceClone* this$0 = nullptr;
};

#endif // _ReferenceClone$PhantomRef_h_