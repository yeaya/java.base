#ifndef _java_text_Format$FieldDelegate_h_
#define _java_text_Format$FieldDelegate_h_
//$ interface java.text.Format$FieldDelegate
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace text {
		class Format$Field;
	}
}

namespace java {
	namespace text {

class $export Format$FieldDelegate : public ::java::lang::Object {
	$interface(Format$FieldDelegate, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void formatted(::java::text::Format$Field* attr, Object$* value, int32_t start, int32_t end, ::java::lang::StringBuffer* buffer) {}
	virtual void formatted(int32_t fieldID, ::java::text::Format$Field* attr, Object$* value, int32_t start, int32_t end, ::java::lang::StringBuffer* buffer) {}
};

	} // text
} // java

#endif // _java_text_Format$FieldDelegate_h_