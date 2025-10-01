#ifndef _java_text_FieldPosition$Delegate_h_
#define _java_text_FieldPosition$Delegate_h_
//$ class java.text.FieldPosition$Delegate
//$ extends java.text.Format$FieldDelegate

#include <java/text/Format$FieldDelegate.h>

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace text {
		class FieldPosition;
		class Format$Field;
	}
}

namespace java {
	namespace text {

class FieldPosition$Delegate : public ::java::text::Format$FieldDelegate {
	$class(FieldPosition$Delegate, $NO_CLASS_INIT, ::java::text::Format$FieldDelegate)
public:
	FieldPosition$Delegate();
	void init$(::java::text::FieldPosition* this$0);
	virtual void formatted(::java::text::Format$Field* attr, Object$* value, int32_t start, int32_t end, ::java::lang::StringBuffer* buffer) override;
	virtual void formatted(int32_t fieldID, ::java::text::Format$Field* attr, Object$* value, int32_t start, int32_t end, ::java::lang::StringBuffer* buffer) override;
	::java::text::FieldPosition* this$0 = nullptr;
	bool encounteredField = false;
};

	} // text
} // java

#endif // _java_text_FieldPosition$Delegate_h_