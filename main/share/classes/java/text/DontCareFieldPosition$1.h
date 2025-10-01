#ifndef _java_text_DontCareFieldPosition$1_h_
#define _java_text_DontCareFieldPosition$1_h_
//$ class java.text.DontCareFieldPosition$1
//$ extends java.text.Format$FieldDelegate

#include <java/text/Format$FieldDelegate.h>

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace text {
		class DontCareFieldPosition;
		class Format$Field;
	}
}

namespace java {
	namespace text {

class DontCareFieldPosition$1 : public ::java::text::Format$FieldDelegate {
	$class(DontCareFieldPosition$1, $NO_CLASS_INIT, ::java::text::Format$FieldDelegate)
public:
	DontCareFieldPosition$1();
	void init$(::java::text::DontCareFieldPosition* this$0);
	virtual void formatted(::java::text::Format$Field* attr, Object$* value, int32_t start, int32_t end, ::java::lang::StringBuffer* buffer) override;
	virtual void formatted(int32_t fieldID, ::java::text::Format$Field* attr, Object$* value, int32_t start, int32_t end, ::java::lang::StringBuffer* buffer) override;
	::java::text::DontCareFieldPosition* this$0 = nullptr;
};

	} // text
} // java

#endif // _java_text_DontCareFieldPosition$1_h_