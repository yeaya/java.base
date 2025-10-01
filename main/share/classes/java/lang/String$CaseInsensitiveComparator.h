#ifndef _java_lang_String$CaseInsensitiveComparator_h_
#define _java_lang_String$CaseInsensitiveComparator_h_
//$ class java.lang.String$CaseInsensitiveComparator
//$ extends java.util.Comparator
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/util/Comparator.h>

namespace java {
	namespace lang {

class String$CaseInsensitiveComparator : public ::java::util::Comparator, public ::java::io::Serializable {
	$class(String$CaseInsensitiveComparator, $PRELOAD | $NO_CLASS_INIT, ::java::util::Comparator, ::java::io::Serializable)
public:
	String$CaseInsensitiveComparator();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual int32_t compare($String* s1, $String* s2);
	virtual int32_t compare(Object$* s1, Object$* s2) override;
	$Object* readResolve();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x77035C7D5C50E5CE;
};

	} // lang
} // java

#endif // _java_lang_String$CaseInsensitiveComparator_h_