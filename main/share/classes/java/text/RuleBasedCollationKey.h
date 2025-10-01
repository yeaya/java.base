#ifndef _java_text_RuleBasedCollationKey_h_
#define _java_text_RuleBasedCollationKey_h_
//$ class java.text.RuleBasedCollationKey
//$ extends java.text.CollationKey

#include <java/lang/Array.h>
#include <java/text/CollationKey.h>

namespace java {
	namespace text {

class RuleBasedCollationKey : public ::java::text::CollationKey {
	$class(RuleBasedCollationKey, $NO_CLASS_INIT, ::java::text::CollationKey)
public:
	RuleBasedCollationKey();
	void init$($String* source, $String* key);
	virtual int32_t compareTo(::java::text::CollationKey* target) override;
	virtual int32_t compareTo(Object$* target) override;
	virtual bool equals(Object$* target) override;
	virtual int32_t hashCode() override;
	virtual $bytes* toByteArray() override;
	$String* key = nullptr;
};

	} // text
} // java

#endif // _java_text_RuleBasedCollationKey_h_