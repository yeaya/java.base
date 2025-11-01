#ifndef _ReferenceClone$SoftRef_h_
#define _ReferenceClone$SoftRef_h_
//$ class ReferenceClone$SoftRef
//$ extends java.lang.ref.SoftReference
//$ implements ReferenceClone$CloneableRef

#include <ReferenceClone$CloneableRef.h>
#include <java/lang/ref/SoftReference.h>

class ReferenceClone;

class $export ReferenceClone$SoftRef : public ::java::lang::ref::SoftReference, public ::ReferenceClone$CloneableRef {
	$class(ReferenceClone$SoftRef, $NO_CLASS_INIT, ::java::lang::ref::SoftReference, ::ReferenceClone$CloneableRef)
public:
	ReferenceClone$SoftRef();
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::ReferenceClone* this$0, Object$* referent);
	virtual $Object* clone() override;
	virtual $String* toString() override;
	::ReferenceClone* this$0 = nullptr;
};

#endif // _ReferenceClone$SoftRef_h_