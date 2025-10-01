#ifndef _CollationKeyTestImpl_h_
#define _CollationKeyTestImpl_h_
//$ class CollationKeyTestImpl
//$ extends java.text.CollationKey

#include <java/lang/Array.h>
#include <java/text/CollationKey.h>

class $export CollationKeyTestImpl : public ::java::text::CollationKey {
	$class(CollationKeyTestImpl, 0, ::java::text::CollationKey)
public:
	CollationKeyTestImpl();
	void init$($String* str);
	void InsertionSort($Array<::java::text::CollationKey>* keys);
	virtual int32_t compareTo(::java::text::CollationKey* target) override;
	virtual int32_t compareTo(Object$* target) override;
	virtual bool equals(Object$* target) override;
	virtual $String* getSourceString() override;
	virtual void run();
	void testConstructor();
	void testSubclassMethods();
	virtual $bytes* toByteArray() override;
	static $StringArray* sourceData_ja;
	static $StringArray* targetData_ja;
};

#endif // _CollationKeyTestImpl_h_