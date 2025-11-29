#include <sun/reflect/generics/tree/ClassTypeSignature.h>

#include <java/util/List.h>
#include <sun/reflect/generics/visitor/TypeTreeVisitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $TypeTreeVisitor = ::sun::reflect::generics::visitor::TypeTreeVisitor;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

$FieldInfo _ClassTypeSignature_FieldInfo_[] = {
	{"path", "Ljava/util/List;", "Ljava/util/List<Lsun/reflect/generics/tree/SimpleClassTypeSignature;>;", $PRIVATE | $FINAL, $field(ClassTypeSignature, path)},
	{}
};

$MethodInfo _ClassTypeSignature_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Lsun/reflect/generics/tree/SimpleClassTypeSignature;>;)V", $PRIVATE, $method(static_cast<void(ClassTypeSignature::*)($List*)>(&ClassTypeSignature::init$))},
	{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC},
	{"getPath", "()Ljava/util/List;", "()Ljava/util/List<Lsun/reflect/generics/tree/SimpleClassTypeSignature;>;", $PUBLIC},
	{"make", "(Ljava/util/List;)Lsun/reflect/generics/tree/ClassTypeSignature;", "(Ljava/util/List<Lsun/reflect/generics/tree/SimpleClassTypeSignature;>;)Lsun/reflect/generics/tree/ClassTypeSignature;", $PUBLIC | $STATIC, $method(static_cast<ClassTypeSignature*(*)($List*)>(&ClassTypeSignature::make))},
	{}
};

$ClassInfo _ClassTypeSignature_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.tree.ClassTypeSignature",
	"java.lang.Object",
	"sun.reflect.generics.tree.FieldTypeSignature",
	_ClassTypeSignature_FieldInfo_,
	_ClassTypeSignature_MethodInfo_
};

$Object* allocate$ClassTypeSignature($Class* clazz) {
	return $of($alloc(ClassTypeSignature));
}

void ClassTypeSignature::init$($List* p) {
	$set(this, path, p);
}

ClassTypeSignature* ClassTypeSignature::make($List* p) {
	$init(ClassTypeSignature);
	return $new(ClassTypeSignature, p);
}

$List* ClassTypeSignature::getPath() {
	return this->path;
}

void ClassTypeSignature::accept($TypeTreeVisitor* v) {
	$nc(v)->visitClassTypeSignature(this);
}

ClassTypeSignature::ClassTypeSignature() {
}

$Class* ClassTypeSignature::load$($String* name, bool initialize) {
	$loadClass(ClassTypeSignature, name, initialize, &_ClassTypeSignature_ClassInfo_, allocate$ClassTypeSignature);
	return class$;
}

$Class* ClassTypeSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun