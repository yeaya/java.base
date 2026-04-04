#include <jdk/internal/jrtfs/JrtFileAttributeView$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <jdk/internal/jrtfs/JrtFileAttributeView$AttrID.h>
#include <jdk/internal/jrtfs/JrtFileAttributeView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $JrtFileAttributeView$AttrID = ::jdk::internal::jrtfs::JrtFileAttributeView$AttrID;

namespace jdk {
	namespace internal {
		namespace jrtfs {

$ints* JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID = nullptr;

void JrtFileAttributeView$1::clinit$($Class* clazz) {
	$assignStatic(JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID, $new($ints, $($JrtFileAttributeView$AttrID::values())->length));
	{
		try {
			JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID->set($JrtFileAttributeView$AttrID::size->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID->set($JrtFileAttributeView$AttrID::creationTime->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID->set($JrtFileAttributeView$AttrID::lastAccessTime->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID->set($JrtFileAttributeView$AttrID::lastModifiedTime->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID->set($JrtFileAttributeView$AttrID::isDirectory->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID->set($JrtFileAttributeView$AttrID::isRegularFile->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID->set($JrtFileAttributeView$AttrID::isSymbolicLink->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID->set($JrtFileAttributeView$AttrID::isOther->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID->set($JrtFileAttributeView$AttrID::fileKey->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID->set($JrtFileAttributeView$AttrID::compressedSize->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JrtFileAttributeView$1::$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID->set($JrtFileAttributeView$AttrID::extension->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JrtFileAttributeView$1::JrtFileAttributeView$1() {
}

$Class* JrtFileAttributeView$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JrtFileAttributeView$1, $SwitchMap$jdk$internal$jrtfs$JrtFileAttributeView$AttrID)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.jrtfs.JrtFileAttributeView",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.jrtfs.JrtFileAttributeView$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"jdk.internal.jrtfs.JrtFileAttributeView$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.jrtfs.JrtFileAttributeView"
	};
	$loadClass(JrtFileAttributeView$1, name, initialize, &classInfo$$, JrtFileAttributeView$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JrtFileAttributeView$1);
	});
	return class$;
}

$Class* JrtFileAttributeView$1::class$ = nullptr;

		} // jrtfs
	} // internal
} // jdk