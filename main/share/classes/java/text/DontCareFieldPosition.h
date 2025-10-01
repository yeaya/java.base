#ifndef _java_text_DontCareFieldPosition_h_
#define _java_text_DontCareFieldPosition_h_
//$ class java.text.DontCareFieldPosition
//$ extends java.text.FieldPosition

#include <java/text/FieldPosition.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace text {
		class Format$FieldDelegate;
	}
}

namespace java {
	namespace text {

class DontCareFieldPosition : public ::java::text::FieldPosition {
	$class(DontCareFieldPosition, 0, ::java::text::FieldPosition)
public:
	DontCareFieldPosition();
	void init$();
	virtual ::java::text::Format$FieldDelegate* getFieldDelegate() override;
	static ::java::text::FieldPosition* INSTANCE;
	::java::text::Format$FieldDelegate* noDelegate = nullptr;
};

	} // text
} // java

#pragma pop_macro("INSTANCE")

#endif // _java_text_DontCareFieldPosition_h_