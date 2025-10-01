#ifndef _sun_reflect_annotation_AnnotationInvocationHandler_h_
#define _sun_reflect_annotation_AnnotationInvocationHandler_h_
//$ class sun.reflect.annotation.AnnotationInvocationHandler
//$ extends java.lang.reflect.InvocationHandler
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/reflect/InvocationHandler.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace sun {
	namespace reflect {
		namespace annotation {

class AnnotationInvocationHandler : public ::java::lang::reflect::InvocationHandler, public ::java::io::Serializable {
	$class(AnnotationInvocationHandler, 0, ::java::lang::reflect::InvocationHandler, ::java::io::Serializable)
public:
	AnnotationInvocationHandler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($Class* type, ::java::util::Map* memberValues);
	::sun::reflect::annotation::AnnotationInvocationHandler* asOneOfUs(Object$* o);
	$Object* cloneArray(Object$* array);
	$Array<::java::lang::reflect::Method>* computeMemberMethods();
	static ::java::util::stream::Stream* convert($bytes* values);
	static ::java::util::stream::Stream* convert($chars* values);
	static ::java::util::stream::Stream* convert($floats* values);
	static ::java::util::stream::Stream* convert($shorts* values);
	static ::java::util::stream::Stream* convert($booleans* values);
	::java::lang::Boolean* equalsImpl(Object$* proxy, Object$* o);
	$Array<::java::lang::reflect::Method>* getMemberMethods();
	int32_t hashCodeImpl();
	virtual $Object* invoke(Object$* proxy, ::java::lang::reflect::Method* method, $ObjectArray* args) override;
	static bool isPrintableAscii(char16_t ch);
	static bool memberValueEquals(Object$* v1, Object$* v2);
	static int32_t memberValueHashCode(Object$* value);
	static $String* memberValueToString(Object$* value);
	static $String* quote(char16_t ch);
	void readObject(::java::io::ObjectInputStream* s);
	static $String* stringStreamToString(::java::util::stream::Stream* stream);
	static $String* toSourceString($Class* clazz);
	static $String* toSourceString(float f);
	static $String* toSourceString(double d);
	static $String* toSourceString(char16_t c);
	static $String* toSourceString(int8_t b);
	static $String* toSourceString(int64_t ell);
	static $String* toSourceString($String* s);
	virtual $String* toString() override;
	$String* toStringImpl();
	void validateAnnotationMethods($Array<::java::lang::reflect::Method>* memberMethods);
	static bool $assertionsDisabled;
	static const int64_t serialVersionUID = (int64_t)0x55CAF50F15CB7EA5;
	$Class* type = nullptr;
	::java::util::Map* memberValues = nullptr;
	$volatile($Array<::java::lang::reflect::Method>*) memberMethods = nullptr;
};

		} // annotation
	} // reflect
} // sun

#endif // _sun_reflect_annotation_AnnotationInvocationHandler_h_