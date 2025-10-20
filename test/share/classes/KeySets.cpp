#include <KeySets.h>

#include <KeySets$1.h>
#include <KeySets$10.h>
#include <KeySets$2.h>
#include <KeySets$3.h>
#include <KeySets$4.h>
#include <KeySets$5.h>
#include <KeySets$6.h>
#include <KeySets$7.h>
#include <KeySets$8.h>
#include <KeySets$9.h>
#include <KeySets$Adder.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/ClosedSelectorException.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/Selector.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef OP_WRITE

using $KeySets$1 = ::KeySets$1;
using $KeySets$10 = ::KeySets$10;
using $KeySets$2 = ::KeySets$2;
using $KeySets$3 = ::KeySets$3;
using $KeySets$4 = ::KeySets$4;
using $KeySets$5 = ::KeySets$5;
using $KeySets$6 = ::KeySets$6;
using $KeySets$7 = ::KeySets$7;
using $KeySets$8 = ::KeySets$8;
using $KeySets$9 = ::KeySets$9;
using $KeySets$Adder = ::KeySets$Adder;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ClosedSelectorException = ::java::nio::channels::ClosedSelectorException;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;
using $SelectableChannel = ::java::nio::channels::SelectableChannel;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $Selector = ::java::nio::channels::Selector;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;

$MethodInfo _KeySets_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeySets::*)()>(&KeySets::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&KeySets::main)), "java.lang.Exception"},
	{"reg", "(Ljava/nio/channels/Selector;)Ljava/nio/channels/SelectionKey;", nullptr, $STATIC, $method(static_cast<$SelectionKey*(*)($Selector*)>(&KeySets::reg)), "java.io.IOException"},
	{"testClose", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&KeySets::testClose)), "java.lang.Exception"},
	{"testMutability", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&KeySets::testMutability)), "java.lang.Exception"},
	{"testNoAddition", "(Ljava/util/Set;)V", nullptr, $STATIC, $method(static_cast<void(*)($Set*)>(&KeySets::testNoAddition)), "java.lang.Exception"},
	{"testNoRemoval", "(Ljava/util/Set;LKeySets$Adder;)V", nullptr, $STATIC, $method(static_cast<void(*)($Set*,$KeySets$Adder*)>(&KeySets::testNoRemoval)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _KeySets_InnerClassesInfo_[] = {
	{"KeySets$Adder", "KeySets", "Adder", $STATIC | $INTERFACE | $ABSTRACT},
	{"KeySets$Catch", "KeySets", "Catch", $STATIC | $ABSTRACT},
	{"KeySets$10", nullptr, nullptr, 0},
	{"KeySets$9", nullptr, nullptr, 0},
	{"KeySets$8", nullptr, nullptr, 0},
	{"KeySets$7", nullptr, nullptr, 0},
	{"KeySets$6", nullptr, nullptr, 0},
	{"KeySets$5", nullptr, nullptr, 0},
	{"KeySets$4", nullptr, nullptr, 0},
	{"KeySets$3", nullptr, nullptr, 0},
	{"KeySets$2", nullptr, nullptr, 0},
	{"KeySets$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _KeySets_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"KeySets",
	"java.lang.Object",
	nullptr,
	nullptr,
	_KeySets_MethodInfo_,
	nullptr,
	nullptr,
	_KeySets_InnerClassesInfo_,
	nullptr,
	nullptr,
	"KeySets$Adder,KeySets$Catch,KeySets$10,KeySets$9,KeySets$8,KeySets$7,KeySets$6,KeySets$5,KeySets$4,KeySets$3,KeySets$2,KeySets$1"
};

$Object* allocate$KeySets($Class* clazz) {
	return $of($alloc(KeySets));
}

void KeySets::init$() {
}

void KeySets::testClose() {
	$var($Selector, sel, $Selector::open());
	$nc(sel)->keys();
	sel->selectedKeys();
	sel->close();
	$load($ClosedSelectorException);
	$new($KeySets$1, $ClosedSelectorException::class$, sel);
	$new($KeySets$2, $ClosedSelectorException::class$, sel);
}

void KeySets::testNoAddition($Set* s) {
	$load($UnsupportedOperationException);
	$new($KeySets$3, $UnsupportedOperationException::class$, s);
	$new($KeySets$4, $UnsupportedOperationException::class$, s);
}

void KeySets::testNoRemoval($Set* s, $KeySets$Adder* adder) {
	$load($UnsupportedOperationException);
	$new($KeySets$5, $UnsupportedOperationException::class$, adder, s);
	$new($KeySets$6, $UnsupportedOperationException::class$, adder, s);
	$new($KeySets$7, $UnsupportedOperationException::class$, adder, s);
	$new($KeySets$8, $UnsupportedOperationException::class$, adder, s);
	$new($KeySets$9, $UnsupportedOperationException::class$, adder, s);
}

$SelectionKey* KeySets::reg($Selector* sel) {
	$var($DatagramChannel, dc, $DatagramChannel::open());
	$nc(dc)->configureBlocking(false);
	return dc->register$(sel, $SelectionKey::OP_WRITE);
}

void KeySets::testMutability() {
	$useLocalCurrentObjectStackCache();
	$var($Selector, sel, $Selector::open());
	$var($Set, var$0, $nc(sel)->keys());
	testNoRemoval(var$0, $$new($KeySets$10, sel));
	testNoAddition($($nc(sel)->keys()));
	$nc(sel)->select();
	testNoAddition($(sel->selectedKeys()));
	$var($SelectionKey, sk, reg(sel));
	sel->select();
	int32_t n = $nc($(sel->selectedKeys()))->size();
	$nc($(sel->selectedKeys()))->remove(sk);
	if ($nc($(sel->selectedKeys()))->size() != n - 1) {
		$throwNew($Exception, "remove failed"_s);
	}
	$var($HashSet, hs, $new($HashSet));
	hs->add($(reg(sel)));
	sel->select();
	$nc($(sel->selectedKeys()))->retainAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(hs))));
	if ($nc($(sel->selectedKeys()))->isEmpty()) {
		$throwNew($Exception, "retainAll failed"_s);
	}
	$nc($(sel->selectedKeys()))->removeAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(hs))));
	if (!$nc($(sel->selectedKeys()))->isEmpty()) {
		$throwNew($Exception, "removeAll failed"_s);
	}
	hs->clear();
	hs->add($(reg(sel)));
	sel->select();
	$nc($(sel->selectedKeys()))->clear();
	if (!$nc($(sel->selectedKeys()))->isEmpty()) {
		$throwNew($Exception, "clear failed"_s);
	}
}

void KeySets::main($StringArray* args) {
	testClose();
	testMutability();
}

KeySets::KeySets() {
}

$Class* KeySets::load$($String* name, bool initialize) {
	$loadClass(KeySets, name, initialize, &_KeySets_ClassInfo_, allocate$KeySets);
	return class$;
}

$Class* KeySets::class$ = nullptr;