#ifndef _java_text_Format_h_
#define _java_text_Format_h_
//$ class java.text.Format
//$ extends java.io.Serializable
//$ implements java.lang.Cloneable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator;
		class AttributedCharacterIterator$Attribute;
		class FieldPosition;
		class ParsePosition;
	}
}

namespace java {
	namespace text {

class $import Format : public ::java::io::Serializable, public ::java::lang::Cloneable {
	$class(Format, $NO_CLASS_INIT, ::java::io::Serializable, ::java::lang::Cloneable)
public:
	Format();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Object* clone() override;
	virtual ::java::text::AttributedCharacterIterator* createAttributedCharacterIterator($String* s);
	virtual ::java::text::AttributedCharacterIterator* createAttributedCharacterIterator($Array<::java::text::AttributedCharacterIterator>* iterators);
	virtual ::java::text::AttributedCharacterIterator* createAttributedCharacterIterator($String* string, ::java::text::AttributedCharacterIterator$Attribute* key, Object$* value);
	virtual ::java::text::AttributedCharacterIterator* createAttributedCharacterIterator(::java::text::AttributedCharacterIterator* iterator, ::java::text::AttributedCharacterIterator$Attribute* key, Object$* value);
	$String* format(Object$* obj);
	virtual ::java::lang::StringBuffer* format(Object$* obj, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* pos) {return nullptr;}
	virtual ::java::text::AttributedCharacterIterator* formatToCharacterIterator(Object$* obj);
	virtual $Object* parseObject($String* source, ::java::text::ParsePosition* pos) {return nullptr;}
	virtual $Object* parseObject($String* source);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xFBD8BC12E90F1843;
};

	} // text
} // java

#endif // _java_text_Format_h_