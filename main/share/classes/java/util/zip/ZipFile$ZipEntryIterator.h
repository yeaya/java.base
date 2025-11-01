#ifndef _java_util_zip_ZipFile$ZipEntryIterator_h_
#define _java_util_zip_ZipFile$ZipEntryIterator_h_
//$ class java.util.zip.ZipFile$ZipEntryIterator
//$ extends java.util.Enumeration
//$ implements java.util.Iterator

#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>

namespace java {
	namespace util {
		namespace zip {
			class ZipFile;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class ZipFile$ZipEntryIterator : public ::java::util::Enumeration, public ::java::util::Iterator {
	$class(ZipFile$ZipEntryIterator, $NO_CLASS_INIT, ::java::util::Enumeration, ::java::util::Iterator)
public:
	ZipFile$ZipEntryIterator();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::zip::ZipFile* this$0, int32_t entryCount);
	virtual ::java::util::Iterator* asIterator() override;
	virtual bool hasMoreElements() override;
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual $Object* nextElement() override;
	virtual $String* toString() override;
	::java::util::zip::ZipFile* this$0 = nullptr;
	int32_t i = 0;
	int32_t entryCount = 0;
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_ZipFile$ZipEntryIterator_h_