#ifndef _java_lang_reflect_Field_h_
#define _java_lang_reflect_Field_h_
//$ class java.lang.reflect.Field
//$ extends java.lang.reflect.AccessibleObject
//$ implements java.lang.reflect.Member

#include <java/lang/Array.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/Member.h>

namespace java {
	namespace lang {
		namespace annotation {
			class Annotation;
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class AnnotatedType;
			class Type;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace jdk {
	namespace internal {
		namespace reflect {
			class FieldAccessor;
		}
	}
}
namespace sun {
	namespace reflect {
		namespace generics {
			namespace factory {
				class GenericsFactory;
			}
		}
	}
}
namespace sun {
	namespace reflect {
		namespace generics {
			namespace repository {
				class FieldRepository;
			}
		}
	}
}

namespace java {
	namespace lang {
		namespace reflect {

class $export Field : public ::java::lang::reflect::AccessibleObject, public ::java::lang::reflect::Member {
	$class(Field, $PRELOAD | $NO_CLASS_INIT, ::java::lang::reflect::AccessibleObject, ::java::lang::reflect::Member)
public:
	Field();
	using ::java::lang::reflect::AccessibleObject::checkCanSetAccessible;
	using ::java::lang::reflect::AccessibleObject::checkAccess;
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$($Class* declaringClass, $String* name, $Class* type, int32_t modifiers, bool trustedFinal, int32_t slot, $String* signature, $bytes* annotations);
	::jdk::internal::reflect::FieldAccessor* acquireFieldAccessor(bool overrideFinalCheck);
	void checkAccess($Class* caller, Object$* obj);
	virtual void checkCanSetAccessible($Class* caller) override;
	::java::lang::reflect::Field* copy();
	::java::util::Map* declaredAnnotations();
	virtual bool equals(Object$* obj) override;
	$Object* get(Object$* obj);
	::java::lang::reflect::AnnotatedType* getAnnotatedType();
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationClass) override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotationClass) override;
	bool getBoolean(Object$* obj);
	int8_t getByte(Object$* obj);
	char16_t getChar(Object$* obj);
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotations() override;
	virtual $Class* getDeclaringClass() override;
	double getDouble(Object$* obj);
	::sun::reflect::generics::factory::GenericsFactory* getFactory();
	::jdk::internal::reflect::FieldAccessor* getFieldAccessor(Object$* obj);
	::jdk::internal::reflect::FieldAccessor* getFieldAccessor(bool overrideFinalCheck);
	float getFloat(Object$* obj);
	::sun::reflect::generics::repository::FieldRepository* getGenericInfo();
	$String* getGenericSignature();
	::java::lang::reflect::Type* getGenericType();
	int32_t getInt(Object$* obj);
	int64_t getLong(Object$* obj);
	virtual int32_t getModifiers() override;
	virtual $String* getName() override;
	virtual ::java::lang::reflect::Field* getRoot() override;
	int16_t getShort(Object$* obj);
	$Class* getType();
	$bytes* getTypeAnnotationBytes0();
	virtual int32_t hashCode() override;
	bool isEnumConstant();
	virtual bool isSynthetic() override;
	bool isTrustedFinal();
	void set(Object$* obj, Object$* value);
	virtual void setAccessible(bool flag) override;
	void setBoolean(Object$* obj, bool z);
	void setByte(Object$* obj, int8_t b);
	void setChar(Object$* obj, char16_t c);
	void setDouble(Object$* obj, double d);
	void setFieldAccessor(::jdk::internal::reflect::FieldAccessor* accessor, bool overrideFinalCheck);
	void setFloat(Object$* obj, float f);
	void setInt(Object$* obj, int32_t i);
	void setLong(Object$* obj, int64_t l);
	void setShort(Object$* obj, int16_t s);
	$String* toGenericString();
	virtual $String* toShortString() override;
	virtual $String* toString() override;
	$Class* clazz = nullptr;
	int32_t slot = 0;
	$String* name = nullptr;
	$Class* type = nullptr;
	int32_t modifiers = 0;
	bool trustedFinal = false;
	$String* signature = nullptr;
	::sun::reflect::generics::repository::FieldRepository* genericInfo = nullptr;
	$bytes* annotations = nullptr;
	::jdk::internal::reflect::FieldAccessor* fieldAccessor = nullptr;
	::jdk::internal::reflect::FieldAccessor* overrideFieldAccessor = nullptr;
	::java::lang::reflect::Field* root = nullptr;
	$volatile(::java::util::Map*) declaredAnnotations$ = nullptr;

	bool isStatic();

	int64_t offsetof = 0;

	void setOffsetof(int64_t offsetof);
	int64_t getOffsetof();
	
	$bytes* typeAnnotation = nullptr;
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_Field_h_