#ifndef _java_util_zip_ZipFile$InflaterCleanupAction_h_
#define _java_util_zip_ZipFile$InflaterCleanupAction_h_
//$ class java.util.zip.ZipFile$InflaterCleanupAction
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace util {
		namespace zip {
			class Inflater;
			class ZipFile$CleanableResource;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class ZipFile$InflaterCleanupAction : public ::java::lang::Runnable {
	$class(ZipFile$InflaterCleanupAction, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ZipFile$InflaterCleanupAction();
	void init$(::java::util::zip::Inflater* inf, ::java::util::zip::ZipFile$CleanableResource* res);
	virtual void run() override;
	::java::util::zip::Inflater* inf = nullptr;
	::java::util::zip::ZipFile$CleanableResource* res = nullptr;
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_ZipFile$InflaterCleanupAction_h_