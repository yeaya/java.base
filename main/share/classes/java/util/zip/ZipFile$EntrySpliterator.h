#ifndef _java_util_zip_ZipFile$EntrySpliterator_h_
#define _java_util_zip_ZipFile$EntrySpliterator_h_
//$ class java.util.zip.ZipFile$EntrySpliterator
//$ extends java.util.Spliterators$AbstractSpliterator

#include <java/util/Spliterators$AbstractSpliterator.h>

namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class IntFunction;
		}
	}
}
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

class ZipFile$EntrySpliterator : public ::java::util::Spliterators$AbstractSpliterator {
	$class(ZipFile$EntrySpliterator, $NO_CLASS_INIT, ::java::util::Spliterators$AbstractSpliterator)
public:
	ZipFile$EntrySpliterator();
	void init$(::java::util::zip::ZipFile* this$0, int32_t index, int32_t fence, ::java::util::function::IntFunction* gen);
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	::java::util::zip::ZipFile* this$0 = nullptr;
	int32_t index = 0;
	int32_t fence = 0;
	::java::util::function::IntFunction* gen = nullptr;
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_ZipFile$EntrySpliterator_h_