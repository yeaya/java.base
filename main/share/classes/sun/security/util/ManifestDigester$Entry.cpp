#include <sun/security/util/ManifestDigester$Entry.h>

#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/MessageDigest.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <sun/security/util/ManifestDigester$Section.h>
#include <sun/security/util/ManifestDigester.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $MessageDigest = ::java::security::MessageDigest;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $ManifestDigester = ::sun::security::util::ManifestDigester;
using $ManifestDigester$Section = ::sun::security::util::ManifestDigester$Section;

namespace sun {
	namespace security {
		namespace util {

class ManifestDigester$Entry$$Lambda$isProperlySectionDelimited : public $Predicate {
	$class(ManifestDigester$Entry$$Lambda$isProperlySectionDelimited, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* inst$) override {
		 return $sure($ManifestDigester$Section, inst$)->isProperlySectionDelimited();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ManifestDigester$Entry$$Lambda$isProperlySectionDelimited>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ManifestDigester$Entry$$Lambda$isProperlySectionDelimited::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ManifestDigester$Entry$$Lambda$isProperlySectionDelimited::*)()>(&ManifestDigester$Entry$$Lambda$isProperlySectionDelimited::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ManifestDigester$Entry$$Lambda$isProperlySectionDelimited::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.security.util.ManifestDigester$Entry$$Lambda$isProperlySectionDelimited",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* ManifestDigester$Entry$$Lambda$isProperlySectionDelimited::load$($String* name, bool initialize) {
	$loadClass(ManifestDigester$Entry$$Lambda$isProperlySectionDelimited, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ManifestDigester$Entry$$Lambda$isProperlySectionDelimited::class$ = nullptr;

$FieldInfo _ManifestDigester$Entry_FieldInfo_[] = {
	{"sections", "Ljava/util/List;", "Ljava/util/List<Lsun/security/util/ManifestDigester$Section;>;", $PRIVATE, $field(ManifestDigester$Entry, sections)},
	{"oldStyle", "Z", nullptr, 0, $field(ManifestDigester$Entry, oldStyle)},
	{}
};

$MethodInfo _ManifestDigester$Entry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ManifestDigester$Entry::*)()>(&ManifestDigester$Entry::init$))},
	{"addSection", "(Lsun/security/util/ManifestDigester$Section;)Lsun/security/util/ManifestDigester$Entry;", nullptr, $PRIVATE, $method(static_cast<ManifestDigester$Entry*(ManifestDigester$Entry::*)($ManifestDigester$Section*)>(&ManifestDigester$Entry::addSection))},
	{"digest", "(Ljava/security/MessageDigest;)[B", nullptr, $PUBLIC},
	{"digestWorkaround", "(Ljava/security/MessageDigest;)[B", nullptr, $PUBLIC},
	{"isProperlyDelimited", "()Z", nullptr, $PUBLIC},
	{"reproduceRaw", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _ManifestDigester$Entry_InnerClassesInfo_[] = {
	{"sun.security.util.ManifestDigester$Entry", "sun.security.util.ManifestDigester", "Entry", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ManifestDigester$Entry_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.ManifestDigester$Entry",
	"java.lang.Object",
	nullptr,
	_ManifestDigester$Entry_FieldInfo_,
	_ManifestDigester$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_ManifestDigester$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.ManifestDigester"
};

$Object* allocate$ManifestDigester$Entry($Class* clazz) {
	return $of($alloc(ManifestDigester$Entry));
}

void ManifestDigester$Entry::init$() {
	$set(this, sections, $new($ArrayList));
}

ManifestDigester$Entry* ManifestDigester$Entry::addSection($ManifestDigester$Section* sec) {
	$nc(this->sections)->add(sec);
	return this;
}

bool ManifestDigester$Entry::isProperlyDelimited() {
	return $nc($($nc(this->sections)->stream()))->allMatch(static_cast<$Predicate*>($$new(ManifestDigester$Entry$$Lambda$isProperlySectionDelimited)));
}

void ManifestDigester$Entry::reproduceRaw($OutputStream* out) {
	{
		$var($Iterator, i$, $nc(this->sections)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ManifestDigester$Section, sec, $cast($ManifestDigester$Section, i$->next()));
			{
				$nc(out)->write($nc(sec)->rawBytes, sec->offset, sec->lengthWithBlankLine);
			}
		}
	}
}

$bytes* ManifestDigester$Entry::digest($MessageDigest* md) {
	$nc(md)->reset();
	{
		$var($Iterator, i$, $nc(this->sections)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ManifestDigester$Section, sec, $cast($ManifestDigester$Section, i$->next()));
			{
				if (this->oldStyle) {
					$ManifestDigester$Section::doOldStyle(md, $nc(sec)->rawBytes, sec->offset, sec->lengthWithBlankLine);
				} else {
					md->update($nc(sec)->rawBytes, sec->offset, sec->lengthWithBlankLine);
				}
			}
		}
	}
	return md->digest();
}

$bytes* ManifestDigester$Entry::digestWorkaround($MessageDigest* md) {
	$nc(md)->reset();
	{
		$var($Iterator, i$, $nc(this->sections)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ManifestDigester$Section, sec, $cast($ManifestDigester$Section, i$->next()));
			{
				md->update($nc(sec)->rawBytes, sec->offset, sec->length);
			}
		}
	}
	return md->digest();
}

ManifestDigester$Entry::ManifestDigester$Entry() {
}

$Class* ManifestDigester$Entry::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ManifestDigester$Entry$$Lambda$isProperlySectionDelimited::classInfo$.name)) {
			return ManifestDigester$Entry$$Lambda$isProperlySectionDelimited::load$(name, initialize);
		}
	}
	$loadClass(ManifestDigester$Entry, name, initialize, &_ManifestDigester$Entry_ClassInfo_, allocate$ManifestDigester$Entry);
	return class$;
}

$Class* ManifestDigester$Entry::class$ = nullptr;

		} // util
	} // security
} // sun