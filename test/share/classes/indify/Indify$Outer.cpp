#include <indify/Indify$Outer.h>

#include <indify/Indify$Attr.h>
#include <indify/Indify$ClassFile.h>
#include <indify/Indify$Inner.h>
#include <indify/Indify$Pool.h>
#include <indify/Indify.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $Indify = ::indify::Indify;
using $Indify$Attr = ::indify::Indify$Attr;
using $Indify$ClassFile = ::indify::Indify$ClassFile;
using $Indify$Inner = ::indify::Indify$Inner;
using $Indify$Pool = ::indify::Indify$Pool;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace indify {

$MethodInfo _Indify$Outer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Indify$Outer::*)()>(&Indify$Outer::init$))},
	{"attrs", "()Ljava/util/List;", "()Ljava/util/List<Lindify/Indify$Attr;>;", $PUBLIC | $ABSTRACT},
	{"findAttr", "(Ljava/lang/String;)Lindify/Indify$Attr;", nullptr, $PUBLIC},
	{"findAttr", "(I)Lindify/Indify$Attr;", nullptr, $PUBLIC},
	{"inners", "()Ljava/util/List;", "()Ljava/util/List<+Lindify/Indify$Inner;>;", $PUBLIC | $ABSTRACT},
	{"linkInners", "()V", nullptr, $PROTECTED},
	{"outer", "(Ljava/lang/Class;)Lindify/Indify$Outer;", "<T:Lindify/Indify$Outer;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC},
	{}
};

$InnerClassInfo _Indify$Outer_InnerClassesInfo_[] = {
	{"indify.Indify$Outer", "indify.Indify", "Outer", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Indify$Outer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"indify.Indify$Outer",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Indify$Outer_MethodInfo_,
	nullptr,
	nullptr,
	_Indify$Outer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"indify.Indify"
};

$Object* allocate$Indify$Outer($Class* clazz) {
	return $of($alloc(Indify$Outer));
}

void Indify$Outer::init$() {
}

void Indify$Outer::linkInners() {
	{
		$var($Iterator, i$, $nc($(inners()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Indify$Inner, i, $cast($Indify$Inner, i$->next()));
			{
				$nc(i)->linkOuter(this);
				if ($instanceOf(Indify$Outer, i)) {
					$nc(($cast(Indify$Outer, i)))->linkInners();
				}
			}
		}
	}
}

Indify$Outer* Indify$Outer::outer($Class* c) {
	{
		$var(Indify$Outer, walk, this);
		for (;; $assign(walk, $nc(($cast($Indify$Inner, walk)))->outer())) {
			if ($nc(c)->isInstance(walk)) {
				return $cast(Indify$Outer, c->cast(walk));
			}
		}
	}
}

$Indify$Attr* Indify$Outer::findAttr($String* name) {
	$load($Indify$ClassFile);
	return findAttr($nc($nc(($cast($Indify$ClassFile, $(outer($Indify$ClassFile::class$)))))->pool)->stringIndex(name, false));
}

$Indify$Attr* Indify$Outer::findAttr(int32_t name) {
	if (name == 0) {
		return nullptr;
	}
	{
		$var($Iterator, i$, $nc($(attrs()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Indify$Attr, a, $cast($Indify$Attr, i$->next()));
			{
				if ($nc(a)->name == name) {
					return a;
				}
			}
		}
	}
	return nullptr;
}

Indify$Outer::Indify$Outer() {
}

$Class* Indify$Outer::load$($String* name, bool initialize) {
	$loadClass(Indify$Outer, name, initialize, &_Indify$Outer_ClassInfo_, allocate$Indify$Outer);
	return class$;
}

$Class* Indify$Outer::class$ = nullptr;

} // indify