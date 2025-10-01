#ifndef _sun_launcher_LauncherHelper$JrtFirstComparator_h_
#define _sun_launcher_LauncherHelper$JrtFirstComparator_h_
//$ class sun.launcher.LauncherHelper$JrtFirstComparator
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace java {
	namespace lang {
		namespace module {
			class ModuleReference;
		}
	}
}

namespace sun {
	namespace launcher {

class LauncherHelper$JrtFirstComparator : public ::java::util::Comparator {
	$class(LauncherHelper$JrtFirstComparator, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	LauncherHelper$JrtFirstComparator();
	void init$();
	virtual int32_t compare(::java::lang::module::ModuleReference* a, ::java::lang::module::ModuleReference* b);
	virtual int32_t compare(Object$* a, Object$* b) override;
	::java::util::Comparator* real = nullptr;
};

	} // launcher
} // sun

#endif // _sun_launcher_LauncherHelper$JrtFirstComparator_h_