; ModuleID = 'printLine.bc'
target datalayout = "e-m:e-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

%"class.std::ios_base::Init" = type { i8 }
%"class.std::map" = type { %"class.std::_Rb_tree" }
%"class.std::_Rb_tree" = type { %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl" }
%"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl" = type { %"struct.std::less", %"struct.std::_Rb_tree_node_base", i64 }
%"struct.std::less" = type { i8 }
%"struct.std::_Rb_tree_node_base" = type { i32, %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }
%"class.std::basic_ostream" = type { i32 (...)**, %"class.std::basic_ios" }
%"class.std::basic_ios" = type { %"class.std::ios_base", %"class.std::basic_ostream"*, i8, i8, %"class.std::basic_streambuf"*, %"class.std::ctype"*, %"class.std::num_put"*, %"class.std::num_get"* }
%"class.std::ios_base" = type { i32 (...)**, i64, i64, i32, i32, i32, %"struct.std::ios_base::_Callback_list"*, %"struct.std::ios_base::_Words", [8 x %"struct.std::ios_base::_Words"], i32, %"struct.std::ios_base::_Words"*, %"class.std::locale" }
%"struct.std::ios_base::_Callback_list" = type { %"struct.std::ios_base::_Callback_list"*, void (i32, %"class.std::ios_base"*, i32)*, i32, i32 }
%"struct.std::ios_base::_Words" = type { i8*, i64 }
%"class.std::locale" = type { %"class.std::locale::_Impl"* }
%"class.std::locale::_Impl" = type { i32, %"class.std::locale::facet"**, i64, %"class.std::locale::facet"**, i8** }
%"class.std::locale::facet" = type <{ i32 (...)**, i32, [4 x i8] }>
%"class.std::basic_streambuf" = type { i32 (...)**, i8*, i8*, i8*, i8*, i8*, i8*, %"class.std::locale" }
%"class.std::ctype" = type <{ %"class.std::locale::facet.base", [4 x i8], %struct.__locale_struct*, i8, [7 x i8], i32*, i32*, i16*, i8, [256 x i8], [256 x i8], i8, [6 x i8] }>
%"class.std::locale::facet.base" = type <{ i32 (...)**, i32 }>
%struct.__locale_struct = type { [13 x %struct.__locale_data*], i16*, i32*, i32*, [13 x i8*] }
%struct.__locale_data = type opaque
%"class.std::num_put" = type { %"class.std::locale::facet.base", [4 x i8] }
%"class.std::num_get" = type { %"class.std::locale::facet.base", [4 x i8] }
%"class.std::__cxx11::basic_string" = type { %"struct.std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::_Alloc_hider", i64, %union.anon }
%"struct.std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::_Alloc_hider" = type { i8* }
%union.anon = type { i64, [8 x i8] }
%"class.std::allocator.0" = type { i8 }
%"struct.std::_Rb_tree_iterator" = type { %"struct.std::_Rb_tree_node_base"* }
%"struct.std::pair" = type <{ %"class.std::__cxx11::basic_string", i32, [4 x i8] }>
%"struct.std::_Rb_tree_node" = type { %"struct.std::_Rb_tree_node_base", %"struct.std::pair" }
%"class.std::allocator" = type { i8 }
%"class.std::allocator.3" = type { i8 }
%"class.__gnu_cxx::new_allocator.4" = type { i8 }
%"class.__gnu_cxx::new_allocator" = type { i8 }
%"struct.std::_Select1st" = type { i8 }
%"struct.std::_Rb_tree_const_iterator" = type { %"struct.std::_Rb_tree_node_base"* }
%"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node" = type { %"class.std::_Rb_tree"* }
%"struct.std::pair.6" = type { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }

$_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEEC2Ev = comdat any

$_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEED2Ev = comdat any

$_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE4findERS9_ = comdat any

$_ZNKSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEeqERKS9_ = comdat any

$_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE3endEv = comdat any

$__clang_call_terminate = comdat any

$_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEEixERS9_ = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EED2Ev = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_M_eraseEPSt13_Rb_tree_nodeIS8_E = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_M_beginEv = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EED2Ev = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_S_rightEPSt18_Rb_tree_node_base = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE7_S_leftEPSt18_Rb_tree_node_base = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS8_E = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS8_E = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS8_E = comdat any

$_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13get_allocatorEv = comdat any

$_ZN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE7destroyEPS9_ = comdat any

$_ZNSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE9_M_valptrEv = comdat any

$_ZNSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEED2Ev = comdat any

$_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE21_M_get_Node_allocatorEv = comdat any

$_ZNSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2ISt13_Rb_tree_nodeIS7_EEERKSaIT_E = comdat any

$_ZN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2Ev = comdat any

$_ZNSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiED2Ev = comdat any

$_ZSt11__addressofISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEPT_RS9_ = comdat any

$_ZN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEED2Ev = comdat any

$_ZN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE10deallocateERSC_PSB_m = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE21_M_get_Node_allocatorEv = comdat any

$_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE10deallocateEPSB_m = comdat any

$_ZNSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEED2Ev = comdat any

$_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEED2Ev = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EEC2Ev = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EEC2Ev = comdat any

$_ZNSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEC2Ev = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EE13_M_initializeEv = comdat any

$_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEC2Ev = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE4findERS7_ = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE14_M_lower_boundEPSt13_Rb_tree_nodeIS8_ESH_RS7_ = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_M_endEv = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE3endEv = comdat any

$_ZNKSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEclERKS5_S8_ = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_S_keyEPKSt18_Rb_tree_node_base = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_S_keyEPKSt13_Rb_tree_nodeIS8_E = comdat any

$_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2EPSt18_Rb_tree_node_base = comdat any

$_ZNKSt10_Select1stISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEclERKS8_ = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_S_valueEPKSt13_Rb_tree_nodeIS8_E = comdat any

$_ZNKSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE9_M_valptrEv = comdat any

$_ZSt11__addressofIKSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEPT_RSA_ = comdat any

$_ZStltIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EESA_ = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_S_valueEPKSt18_Rb_tree_node_base = comdat any

$_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE11lower_boundERS9_ = comdat any

$_ZNKSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE8key_compEv = comdat any

$_ZNKSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEdeEv = comdat any

$_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE6insertESt17_Rb_tree_iteratorISA_ERKSA_ = comdat any

$_ZNSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEC2ERS6_RKi = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11lower_boundERS7_ = comdat any

$_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8key_compEv = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE17_M_insert_unique_ESt23_Rb_tree_const_iteratorIS8_ERKS8_ = comdat any

$_ZNSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2ERKSt17_Rb_tree_iteratorIS8_E = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_Alloc_nodeC2ERSE_ = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE17_M_insert_unique_INSE_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS8_ESt23_Rb_tree_const_iteratorIS8_ERKS8_RT_ = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS8_ERS7_ = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE10_M_insert_INSE_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS8_EPSt18_Rb_tree_node_baseSK_RKS8_RT_ = comdat any

$_ZNKSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE13_M_const_castEv = comdat any

$_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE4sizeEv = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE12_M_rightmostEv = comdat any

$_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2ERKS1_S4_ = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE24_M_get_insert_unique_posERS7_ = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_M_leftmostEv = comdat any

$_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEmmEv = comdat any

$_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEppEv = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE5beginEv = comdat any

$_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_Alloc_nodeclIS8_EEPSt13_Rb_tree_nodeIS8_ERKT_ = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE14_M_create_nodeERKS8_ = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_M_get_nodeEv = comdat any

$_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE17_M_construct_nodeEPSt13_Rb_tree_nodeIS8_ERKS8_ = comdat any

$_ZN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE8allocateERSC_m = comdat any

$_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE8allocateEmPKv = comdat any

$_ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE8max_sizeEv = comdat any

$_ZN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE9constructEPS9_RKS9_ = comdat any

$_ZNSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEC2ERKS7_ = comdat any

@_ZStL8__ioinit = internal global %"class.std::ios_base::Init" zeroinitializer, align 1
@__dso_handle = external global i8
@level = global i32 0, align 4
@nodeNumber = global i32 0, align 4
@nodes = global %"class.std::map" zeroinitializer, align 8
@.str = private unnamed_addr constant [9 x i8] c"%s,%d,%d\00", align 1
@_ZSt4cerr = external global %"class.std::basic_ostream"
@.str2 = private unnamed_addr constant [2 x i8] c"\0A\00", align 1
@.str3 = private unnamed_addr constant [5 x i8] c" = (\00", align 1
@.str4 = private unnamed_addr constant [3 x i8] c")\0A\00", align 1
@.str5 = private unnamed_addr constant [2 x i8] c",\00", align 1
@.str6 = private unnamed_addr constant [6 x i8] c"%s,%d\00", align 1
@.str7 = private unnamed_addr constant [4 x i8] c"|  \00", align 1
@.str8 = private unnamed_addr constant [26 x i8] c"Enter BasicBlock in file \00", align 1
@.str9 = private unnamed_addr constant [12 x i8] c" at line # \00", align 1
@.str10 = private unnamed_addr constant [16 x i8] c"Exit BasicBlock\00", align 1
@llvm.global_ctors = appending global [1 x { i32, void ()*, i8* }] [{ i32, void ()*, i8* } { i32 65535, void ()* @_GLOBAL__sub_I_printLine.cpp, i8* null }]

define internal void @__cxx_global_var_init() section ".text.startup" {
entry:
  call void @_ZNSt8ios_base4InitC1Ev(%"class.std::ios_base::Init"* @_ZStL8__ioinit), !dbg !1365
  %0 = call i32 @__cxa_atexit(void (i8*)* bitcast (void (%"class.std::ios_base::Init"*)* @_ZNSt8ios_base4InitD1Ev to void (i8*)*), i8* getelementptr inbounds (%"class.std::ios_base::Init", %"class.std::ios_base::Init"* @_ZStL8__ioinit, i32 0, i32 0), i8* @__dso_handle) #1, !dbg !1365
  ret void, !dbg !1365
}

declare void @_ZNSt8ios_base4InitC1Ev(%"class.std::ios_base::Init"*) #0

declare void @_ZNSt8ios_base4InitD1Ev(%"class.std::ios_base::Init"*) #0

; Function Attrs: nounwind
declare i32 @__cxa_atexit(void (i8*)*, i8*, i8*) #1

define internal void @__cxx_global_var_init1() section ".text.startup" {
entry:
  call void @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEEC2Ev(%"class.std::map"* @nodes), !dbg !1366
  %0 = call i32 @__cxa_atexit(void (i8*)* bitcast (void (%"class.std::map"*)* @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEED2Ev to void (i8*)*), i8* getelementptr inbounds (%"class.std::map", %"class.std::map"* @nodes, i32 0, i32 0, i32 0, i32 0, i32 0), i8* @__dso_handle) #1, !dbg !1366
  ret void, !dbg !1366
}

; Function Attrs: uwtable
define linkonce_odr void @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEEC2Ev(%"class.std::map"* %this) unnamed_addr #2 comdat align 2 {
entry:
  %this.addr = alloca %"class.std::map"*, align 8
  store %"class.std::map"* %this, %"class.std::map"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::map"** %this.addr, metadata !1367, metadata !1369), !dbg !1370
  %this1 = load %"class.std::map"*, %"class.std::map"** %this.addr
  %_M_t = getelementptr inbounds %"class.std::map", %"class.std::map"* %this1, i32 0, i32 0, !dbg !1371
  call void @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EEC2Ev(%"class.std::_Rb_tree"* %_M_t), !dbg !1371
  ret void, !dbg !1372
}

; Function Attrs: inlinehint uwtable
define linkonce_odr void @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEED2Ev(%"class.std::map"* %this) unnamed_addr #3 comdat align 2 {
entry:
  %this.addr = alloca %"class.std::map"*, align 8
  store %"class.std::map"* %this, %"class.std::map"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::map"** %this.addr, metadata !1373, metadata !1369), !dbg !1374
  %this1 = load %"class.std::map"*, %"class.std::map"** %this.addr
  %_M_t = getelementptr inbounds %"class.std::map", %"class.std::map"* %this1, i32 0, i32 0, !dbg !1375
  call void @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EED2Ev(%"class.std::_Rb_tree"* %_M_t), !dbg !1375
  ret void, !dbg !1377
}

; Function Attrs: uwtable
define void @_Z12printBBTracePcii(i8* %filename, i32 %start, i32 %end) #2 {
entry:
  %filename.addr = alloca i8*, align 8
  %start.addr = alloca i32, align 4
  %end.addr = alloca i32, align 4
  %key = alloca [128 x i8], align 16
  %ref.tmp = alloca %"class.std::__cxx11::basic_string", align 8
  %ref.tmp2 = alloca %"class.std::allocator.0", align 1
  %exn.slot = alloca i8*
  %ehselector.slot = alloca i32
  %coerce = alloca %"struct.std::_Rb_tree_iterator", align 8
  %ref.tmp6 = alloca %"struct.std::_Rb_tree_iterator", align 8
  %ref.tmp14 = alloca %"class.std::__cxx11::basic_string", align 8
  %ref.tmp16 = alloca %"class.std::allocator.0", align 1
  %ref.tmp33 = alloca %"class.std::__cxx11::basic_string", align 8
  %ref.tmp35 = alloca %"class.std::allocator.0", align 1
  store i8* %filename, i8** %filename.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %filename.addr, metadata !1378, metadata !1369), !dbg !1379
  store i32 %start, i32* %start.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %start.addr, metadata !1380, metadata !1369), !dbg !1381
  store i32 %end, i32* %end.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %end.addr, metadata !1382, metadata !1369), !dbg !1383
  call void @llvm.dbg.declare(metadata [128 x i8]* %key, metadata !1384, metadata !1369), !dbg !1388
  %arraydecay = getelementptr inbounds [128 x i8], [128 x i8]* %key, i32 0, i32 0, !dbg !1389
  %0 = load i8*, i8** %filename.addr, align 8, !dbg !1390
  %1 = load i32, i32* %start.addr, align 4, !dbg !1391
  %2 = load i32, i32* %end.addr, align 4, !dbg !1392
  %call = call i32 (i8*, i8*, ...) @sprintf(i8* %arraydecay, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @.str, i32 0, i32 0), i8* %0, i32 %1, i32 %2) #1, !dbg !1393
  %arraydecay1 = getelementptr inbounds [128 x i8], [128 x i8]* %key, i32 0, i32 0, !dbg !1394
  call void @_ZNSaIcEC1Ev(%"class.std::allocator.0"* %ref.tmp2) #1, !dbg !1396
  invoke void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_(%"class.std::__cxx11::basic_string"* %ref.tmp, i8* %arraydecay1, %"class.std::allocator.0"* dereferenceable(1) %ref.tmp2)
          to label %invoke.cont unwind label %lpad, !dbg !1396

invoke.cont:                                      ; preds = %entry
  %call5 = invoke %"struct.std::_Rb_tree_node_base"* @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE4findERS9_(%"class.std::map"* @nodes, %"class.std::__cxx11::basic_string"* dereferenceable(32) %ref.tmp)
          to label %invoke.cont4 unwind label %lpad3, !dbg !1397

invoke.cont4:                                     ; preds = %invoke.cont
  %coerce.dive = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %coerce, i32 0, i32 0, !dbg !1399
  store %"struct.std::_Rb_tree_node_base"* %call5, %"struct.std::_Rb_tree_node_base"** %coerce.dive, !dbg !1399
  %call8 = invoke %"struct.std::_Rb_tree_node_base"* @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE3endEv(%"class.std::map"* @nodes)
          to label %invoke.cont7 unwind label %lpad3, !dbg !1401

invoke.cont7:                                     ; preds = %invoke.cont4
  %coerce.dive9 = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %ref.tmp6, i32 0, i32 0, !dbg !1402
  store %"struct.std::_Rb_tree_node_base"* %call8, %"struct.std::_Rb_tree_node_base"** %coerce.dive9, !dbg !1402
  %call11 = invoke zeroext i1 @_ZNKSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEeqERKS9_(%"struct.std::_Rb_tree_iterator"* %coerce, %"struct.std::_Rb_tree_iterator"* dereferenceable(8) %ref.tmp6)
          to label %invoke.cont10 unwind label %lpad3, !dbg !1404

invoke.cont10:                                    ; preds = %invoke.cont7
  invoke void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev(%"class.std::__cxx11::basic_string"* %ref.tmp)
          to label %invoke.cont12 unwind label %lpad, !dbg !1405

invoke.cont12:                                    ; preds = %invoke.cont10
  call void @_ZNSaIcED1Ev(%"class.std::allocator.0"* %ref.tmp2) #1, !dbg !1407
  br i1 %call11, label %if.then, label %if.end, !dbg !1409

if.then:                                          ; preds = %invoke.cont12
  %3 = load i32, i32* @nodeNumber, align 4, !dbg !1410
  %arraydecay15 = getelementptr inbounds [128 x i8], [128 x i8]* %key, i32 0, i32 0, !dbg !1412
  call void @_ZNSaIcEC1Ev(%"class.std::allocator.0"* %ref.tmp16) #1, !dbg !1413
  invoke void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_(%"class.std::__cxx11::basic_string"* %ref.tmp14, i8* %arraydecay15, %"class.std::allocator.0"* dereferenceable(1) %ref.tmp16)
          to label %invoke.cont18 unwind label %lpad17, !dbg !1413

invoke.cont18:                                    ; preds = %if.then
  %call21 = invoke dereferenceable(4) i32* @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEEixERS9_(%"class.std::map"* @nodes, %"class.std::__cxx11::basic_string"* dereferenceable(32) %ref.tmp14)
          to label %invoke.cont20 unwind label %lpad19, !dbg !1414

invoke.cont20:                                    ; preds = %invoke.cont18
  store i32 %3, i32* %call21, !dbg !1416
  invoke void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev(%"class.std::__cxx11::basic_string"* %ref.tmp14)
          to label %invoke.cont22 unwind label %lpad17, !dbg !1418

invoke.cont22:                                    ; preds = %invoke.cont20
  call void @_ZNSaIcED1Ev(%"class.std::allocator.0"* %ref.tmp16) #1, !dbg !1419
  %call26 = call dereferenceable(272) %"class.std::basic_ostream"* @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%"class.std::basic_ostream"* dereferenceable(272) @_ZSt4cerr, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str2, i32 0, i32 0)), !dbg !1421
  %4 = load i32, i32* @nodeNumber, align 4, !dbg !1422
  %inc = add nsw i32 %4, 1, !dbg !1422
  store i32 %inc, i32* @nodeNumber, align 4, !dbg !1422
  %call27 = call dereferenceable(272) %"class.std::basic_ostream"* @_ZNSolsEi(%"class.std::basic_ostream"* %call26, i32 %4), !dbg !1423
  %call28 = call dereferenceable(272) %"class.std::basic_ostream"* @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%"class.std::basic_ostream"* dereferenceable(272) %call27, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str3, i32 0, i32 0)), !dbg !1424
  %arraydecay29 = getelementptr inbounds [128 x i8], [128 x i8]* %key, i32 0, i32 0, !dbg !1425
  %call30 = call dereferenceable(272) %"class.std::basic_ostream"* @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%"class.std::basic_ostream"* dereferenceable(272) %call28, i8* %arraydecay29), !dbg !1426
  %call31 = call dereferenceable(272) %"class.std::basic_ostream"* @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%"class.std::basic_ostream"* dereferenceable(272) %call30, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str4, i32 0, i32 0)), !dbg !1427
  br label %if.end, !dbg !1428

lpad:                                             ; preds = %invoke.cont10, %entry
  %5 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          cleanup, !dbg !1429
  %6 = extractvalue { i8*, i32 } %5, 0, !dbg !1429
  store i8* %6, i8** %exn.slot, !dbg !1429
  %7 = extractvalue { i8*, i32 } %5, 1, !dbg !1429
  store i32 %7, i32* %ehselector.slot, !dbg !1429
  br label %ehcleanup, !dbg !1429

lpad3:                                            ; preds = %invoke.cont7, %invoke.cont4, %invoke.cont
  %8 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          cleanup, !dbg !1429
  %9 = extractvalue { i8*, i32 } %8, 0, !dbg !1429
  store i8* %9, i8** %exn.slot, !dbg !1429
  %10 = extractvalue { i8*, i32 } %8, 1, !dbg !1429
  store i32 %10, i32* %ehselector.slot, !dbg !1429
  invoke void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev(%"class.std::__cxx11::basic_string"* %ref.tmp)
          to label %invoke.cont13 unwind label %terminate.lpad, !dbg !1430

invoke.cont13:                                    ; preds = %lpad3
  br label %ehcleanup, !dbg !1431

ehcleanup:                                        ; preds = %invoke.cont13, %lpad
  call void @_ZNSaIcED1Ev(%"class.std::allocator.0"* %ref.tmp2) #1, !dbg !1433
  br label %eh.resume, !dbg !1433

lpad17:                                           ; preds = %invoke.cont20, %if.then
  %11 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          cleanup, !dbg !1435
  %12 = extractvalue { i8*, i32 } %11, 0, !dbg !1435
  store i8* %12, i8** %exn.slot, !dbg !1435
  %13 = extractvalue { i8*, i32 } %11, 1, !dbg !1435
  store i32 %13, i32* %ehselector.slot, !dbg !1435
  br label %ehcleanup25, !dbg !1435

lpad19:                                           ; preds = %invoke.cont18
  %14 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          cleanup, !dbg !1435
  %15 = extractvalue { i8*, i32 } %14, 0, !dbg !1435
  store i8* %15, i8** %exn.slot, !dbg !1435
  %16 = extractvalue { i8*, i32 } %14, 1, !dbg !1435
  store i32 %16, i32* %ehselector.slot, !dbg !1435
  invoke void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev(%"class.std::__cxx11::basic_string"* %ref.tmp14)
          to label %invoke.cont24 unwind label %terminate.lpad, !dbg !1418

invoke.cont24:                                    ; preds = %lpad19
  br label %ehcleanup25, !dbg !1436

ehcleanup25:                                      ; preds = %invoke.cont24, %lpad17
  call void @_ZNSaIcED1Ev(%"class.std::allocator.0"* %ref.tmp16) #1, !dbg !1438
  br label %eh.resume, !dbg !1438

if.end:                                           ; preds = %invoke.cont22, %invoke.cont12
  %call32 = call dereferenceable(272) %"class.std::basic_ostream"* @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%"class.std::basic_ostream"* dereferenceable(272) @_ZSt4cerr, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str5, i32 0, i32 0)), !dbg !1440
  %arraydecay34 = getelementptr inbounds [128 x i8], [128 x i8]* %key, i32 0, i32 0, !dbg !1441
  call void @_ZNSaIcEC1Ev(%"class.std::allocator.0"* %ref.tmp35) #1, !dbg !1442
  invoke void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_(%"class.std::__cxx11::basic_string"* %ref.tmp33, i8* %arraydecay34, %"class.std::allocator.0"* dereferenceable(1) %ref.tmp35)
          to label %invoke.cont37 unwind label %lpad36, !dbg !1442

invoke.cont37:                                    ; preds = %if.end
  %call40 = invoke dereferenceable(4) i32* @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEEixERS9_(%"class.std::map"* @nodes, %"class.std::__cxx11::basic_string"* dereferenceable(32) %ref.tmp33)
          to label %invoke.cont39 unwind label %lpad38, !dbg !1443

invoke.cont39:                                    ; preds = %invoke.cont37
  %17 = load i32, i32* %call40, !dbg !1445
  %call42 = invoke dereferenceable(272) %"class.std::basic_ostream"* @_ZNSolsEi(%"class.std::basic_ostream"* %call32, i32 %17)
          to label %invoke.cont41 unwind label %lpad38, !dbg !1447

invoke.cont41:                                    ; preds = %invoke.cont39
  invoke void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev(%"class.std::__cxx11::basic_string"* %ref.tmp33)
          to label %invoke.cont43 unwind label %lpad36, !dbg !1448

invoke.cont43:                                    ; preds = %invoke.cont41
  call void @_ZNSaIcED1Ev(%"class.std::allocator.0"* %ref.tmp35) #1, !dbg !1450
  ret void, !dbg !1452

lpad36:                                           ; preds = %invoke.cont41, %if.end
  %18 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          cleanup, !dbg !1452
  %19 = extractvalue { i8*, i32 } %18, 0, !dbg !1452
  store i8* %19, i8** %exn.slot, !dbg !1452
  %20 = extractvalue { i8*, i32 } %18, 1, !dbg !1452
  store i32 %20, i32* %ehselector.slot, !dbg !1452
  br label %ehcleanup46, !dbg !1452

lpad38:                                           ; preds = %invoke.cont39, %invoke.cont37
  %21 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          cleanup, !dbg !1452
  %22 = extractvalue { i8*, i32 } %21, 0, !dbg !1452
  store i8* %22, i8** %exn.slot, !dbg !1452
  %23 = extractvalue { i8*, i32 } %21, 1, !dbg !1452
  store i32 %23, i32* %ehselector.slot, !dbg !1452
  invoke void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev(%"class.std::__cxx11::basic_string"* %ref.tmp33)
          to label %invoke.cont45 unwind label %terminate.lpad, !dbg !1453

invoke.cont45:                                    ; preds = %lpad38
  br label %ehcleanup46, !dbg !1454

ehcleanup46:                                      ; preds = %invoke.cont45, %lpad36
  call void @_ZNSaIcED1Ev(%"class.std::allocator.0"* %ref.tmp35) #1, !dbg !1456
  br label %eh.resume, !dbg !1456

eh.resume:                                        ; preds = %ehcleanup46, %ehcleanup25, %ehcleanup
  %exn = load i8*, i8** %exn.slot, !dbg !1458
  %sel = load i32, i32* %ehselector.slot, !dbg !1458
  %lpad.val = insertvalue { i8*, i32 } undef, i8* %exn, 0, !dbg !1458
  %lpad.val47 = insertvalue { i8*, i32 } %lpad.val, i32 %sel, 1, !dbg !1458
  resume { i8*, i32 } %lpad.val47, !dbg !1458

terminate.lpad:                                   ; preds = %lpad38, %lpad19, %lpad3
  %24 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          catch i8* null, !dbg !1460
  %25 = extractvalue { i8*, i32 } %24, 0, !dbg !1460
  call void @__clang_call_terminate(i8* %25) #13, !dbg !1460
  unreachable, !dbg !1460
}

; Function Attrs: nounwind readnone
declare void @llvm.dbg.declare(metadata, metadata, metadata) #4

; Function Attrs: nounwind
declare i32 @sprintf(i8*, i8*, ...) #5

; Function Attrs: uwtable
define linkonce_odr %"struct.std::_Rb_tree_node_base"* @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE4findERS9_(%"class.std::map"* %this, %"class.std::__cxx11::basic_string"* dereferenceable(32) %__x) #2 comdat align 2 {
entry:
  %retval = alloca %"struct.std::_Rb_tree_iterator", align 8
  %this.addr = alloca %"class.std::map"*, align 8
  %__x.addr = alloca %"class.std::__cxx11::basic_string"*, align 8
  store %"class.std::map"* %this, %"class.std::map"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::map"** %this.addr, metadata !1462, metadata !1369), !dbg !1463
  store %"class.std::__cxx11::basic_string"* %__x, %"class.std::__cxx11::basic_string"** %__x.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::__cxx11::basic_string"** %__x.addr, metadata !1464, metadata !1369), !dbg !1465
  %this1 = load %"class.std::map"*, %"class.std::map"** %this.addr
  %_M_t = getelementptr inbounds %"class.std::map", %"class.std::map"* %this1, i32 0, i32 0, !dbg !1466
  %0 = load %"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"** %__x.addr, align 8, !dbg !1467
  %call = call %"struct.std::_Rb_tree_node_base"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE4findERS7_(%"class.std::_Rb_tree"* %_M_t, %"class.std::__cxx11::basic_string"* dereferenceable(32) %0), !dbg !1466
  %coerce.dive = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %retval, i32 0, i32 0, !dbg !1466
  store %"struct.std::_Rb_tree_node_base"* %call, %"struct.std::_Rb_tree_node_base"** %coerce.dive, !dbg !1466
  %coerce.dive2 = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %retval, i32 0, i32 0, !dbg !1468
  %1 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %coerce.dive2, !dbg !1468
  ret %"struct.std::_Rb_tree_node_base"* %1, !dbg !1468
}

; Function Attrs: nounwind
declare void @_ZNSaIcEC1Ev(%"class.std::allocator.0"*) #5

declare void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_(%"class.std::__cxx11::basic_string"*, i8*, %"class.std::allocator.0"* dereferenceable(1)) #0

declare i32 @__gxx_personality_v0(...)

; Function Attrs: nounwind uwtable
define linkonce_odr zeroext i1 @_ZNKSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEeqERKS9_(%"struct.std::_Rb_tree_iterator"* %this, %"struct.std::_Rb_tree_iterator"* dereferenceable(8) %__x) #6 comdat align 2 {
entry:
  %this.addr = alloca %"struct.std::_Rb_tree_iterator"*, align 8
  %__x.addr = alloca %"struct.std::_Rb_tree_iterator"*, align 8
  store %"struct.std::_Rb_tree_iterator"* %this, %"struct.std::_Rb_tree_iterator"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_iterator"** %this.addr, metadata !1469, metadata !1369), !dbg !1471
  store %"struct.std::_Rb_tree_iterator"* %__x, %"struct.std::_Rb_tree_iterator"** %__x.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_iterator"** %__x.addr, metadata !1472, metadata !1369), !dbg !1473
  %this1 = load %"struct.std::_Rb_tree_iterator"*, %"struct.std::_Rb_tree_iterator"** %this.addr
  %_M_node = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %this1, i32 0, i32 0, !dbg !1474
  %0 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %_M_node, align 8, !dbg !1474
  %1 = load %"struct.std::_Rb_tree_iterator"*, %"struct.std::_Rb_tree_iterator"** %__x.addr, align 8, !dbg !1475
  %_M_node2 = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %1, i32 0, i32 0, !dbg !1476
  %2 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %_M_node2, align 8, !dbg !1476
  %cmp = icmp eq %"struct.std::_Rb_tree_node_base"* %0, %2, !dbg !1477
  ret i1 %cmp, !dbg !1478
}

; Function Attrs: uwtable
define linkonce_odr %"struct.std::_Rb_tree_node_base"* @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE3endEv(%"class.std::map"* %this) #2 comdat align 2 {
entry:
  %retval = alloca %"struct.std::_Rb_tree_iterator", align 8
  %this.addr = alloca %"class.std::map"*, align 8
  store %"class.std::map"* %this, %"class.std::map"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::map"** %this.addr, metadata !1479, metadata !1369), !dbg !1480
  %this1 = load %"class.std::map"*, %"class.std::map"** %this.addr
  %_M_t = getelementptr inbounds %"class.std::map", %"class.std::map"* %this1, i32 0, i32 0, !dbg !1481
  %call = call %"struct.std::_Rb_tree_node_base"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE3endEv(%"class.std::_Rb_tree"* %_M_t), !dbg !1481
  %coerce.dive = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %retval, i32 0, i32 0, !dbg !1481
  store %"struct.std::_Rb_tree_node_base"* %call, %"struct.std::_Rb_tree_node_base"** %coerce.dive, !dbg !1481
  %coerce.dive2 = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %retval, i32 0, i32 0, !dbg !1482
  %0 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %coerce.dive2, !dbg !1482
  ret %"struct.std::_Rb_tree_node_base"* %0, !dbg !1482
}

declare void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev(%"class.std::__cxx11::basic_string"*) #0

; Function Attrs: noinline noreturn nounwind
define linkonce_odr hidden void @__clang_call_terminate(i8*) #7 comdat {
  %2 = call i8* @__cxa_begin_catch(i8* %0) #1
  call void @_ZSt9terminatev() #13
  unreachable
}

declare i8* @__cxa_begin_catch(i8*)

declare void @_ZSt9terminatev()

; Function Attrs: nounwind
declare void @_ZNSaIcED1Ev(%"class.std::allocator.0"*) #5

; Function Attrs: uwtable
define linkonce_odr dereferenceable(4) i32* @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEEixERS9_(%"class.std::map"* %this, %"class.std::__cxx11::basic_string"* dereferenceable(32) %__k) #2 comdat align 2 {
entry:
  %this.addr = alloca %"class.std::map"*, align 8
  %__k.addr = alloca %"class.std::__cxx11::basic_string"*, align 8
  %__i = alloca %"struct.std::_Rb_tree_iterator", align 8
  %ref.tmp = alloca %"struct.std::_Rb_tree_iterator", align 8
  %undef.agg.tmp = alloca %"struct.std::less", align 1
  %ref.tmp7 = alloca %"struct.std::_Rb_tree_iterator", align 8
  %agg.tmp = alloca %"struct.std::_Rb_tree_iterator", align 8
  %ref.tmp8 = alloca %"struct.std::pair", align 8
  %ref.tmp9 = alloca i32, align 4
  %exn.slot = alloca i8*
  %ehselector.slot = alloca i32
  store %"class.std::map"* %this, %"class.std::map"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::map"** %this.addr, metadata !1483, metadata !1369), !dbg !1484
  store %"class.std::__cxx11::basic_string"* %__k, %"class.std::__cxx11::basic_string"** %__k.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::__cxx11::basic_string"** %__k.addr, metadata !1485, metadata !1369), !dbg !1486
  %this1 = load %"class.std::map"*, %"class.std::map"** %this.addr
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_iterator"* %__i, metadata !1487, metadata !1369), !dbg !1488
  %0 = load %"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"** %__k.addr, align 8, !dbg !1489
  %call = call %"struct.std::_Rb_tree_node_base"* @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE11lower_boundERS9_(%"class.std::map"* %this1, %"class.std::__cxx11::basic_string"* dereferenceable(32) %0), !dbg !1490
  %coerce.dive = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %__i, i32 0, i32 0, !dbg !1490
  store %"struct.std::_Rb_tree_node_base"* %call, %"struct.std::_Rb_tree_node_base"** %coerce.dive, !dbg !1490
  %call2 = call %"struct.std::_Rb_tree_node_base"* @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE3endEv(%"class.std::map"* %this1), !dbg !1491
  %coerce.dive3 = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %ref.tmp, i32 0, i32 0, !dbg !1491
  store %"struct.std::_Rb_tree_node_base"* %call2, %"struct.std::_Rb_tree_node_base"** %coerce.dive3, !dbg !1491
  %call4 = call zeroext i1 @_ZNKSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEeqERKS9_(%"struct.std::_Rb_tree_iterator"* %__i, %"struct.std::_Rb_tree_iterator"* dereferenceable(8) %ref.tmp), !dbg !1493
  br i1 %call4, label %if.then, label %lor.lhs.false, !dbg !1494

lor.lhs.false:                                    ; preds = %entry
  call void @_ZNKSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE8key_compEv(%"class.std::map"* %this1), !dbg !1495
  %1 = load %"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"** %__k.addr, align 8, !dbg !1497
  %call5 = call dereferenceable(40) %"struct.std::pair"* @_ZNKSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEdeEv(%"struct.std::_Rb_tree_iterator"* %__i), !dbg !1498
  %first = getelementptr inbounds %"struct.std::pair", %"struct.std::pair"* %call5, i32 0, i32 0, !dbg !1499
  %call6 = call zeroext i1 @_ZNKSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEclERKS5_S8_(%"struct.std::less"* %undef.agg.tmp, %"class.std::__cxx11::basic_string"* dereferenceable(32) %1, %"class.std::__cxx11::basic_string"* dereferenceable(32) %first), !dbg !1500
  br i1 %call6, label %if.then, label %if.end, !dbg !1501

if.then:                                          ; preds = %lor.lhs.false, %entry
  %2 = bitcast %"struct.std::_Rb_tree_iterator"* %agg.tmp to i8*, !dbg !1502
  %3 = bitcast %"struct.std::_Rb_tree_iterator"* %__i to i8*, !dbg !1502
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* %2, i8* %3, i64 8, i32 8, i1 false), !dbg !1502
  %4 = load %"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"** %__k.addr, align 8, !dbg !1503
  store i32 0, i32* %ref.tmp9, !dbg !1504
  call void @_ZNSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEC2ERS6_RKi(%"struct.std::pair"* %ref.tmp8, %"class.std::__cxx11::basic_string"* dereferenceable(32) %4, i32* dereferenceable(4) %ref.tmp9), !dbg !1505
  %coerce.dive10 = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %agg.tmp, i32 0, i32 0, !dbg !1506
  %5 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %coerce.dive10, !dbg !1506
  %call11 = invoke %"struct.std::_Rb_tree_node_base"* @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE6insertESt17_Rb_tree_iteratorISA_ERKSA_(%"class.std::map"* %this1, %"struct.std::_Rb_tree_node_base"* %5, %"struct.std::pair"* dereferenceable(40) %ref.tmp8)
          to label %invoke.cont unwind label %lpad, !dbg !1506

invoke.cont:                                      ; preds = %if.then
  %coerce.dive12 = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %ref.tmp7, i32 0, i32 0, !dbg !1507
  store %"struct.std::_Rb_tree_node_base"* %call11, %"struct.std::_Rb_tree_node_base"** %coerce.dive12, !dbg !1507
  %6 = bitcast %"struct.std::_Rb_tree_iterator"* %__i to i8*, !dbg !1508
  %7 = bitcast %"struct.std::_Rb_tree_iterator"* %ref.tmp7 to i8*, !dbg !1508
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* %6, i8* %7, i64 8, i32 8, i1 false), !dbg !1508
  call void @_ZNSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiED2Ev(%"struct.std::pair"* %ref.tmp8), !dbg !1509
  br label %if.end, !dbg !1509

lpad:                                             ; preds = %if.then
  %8 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          cleanup, !dbg !1510
  %9 = extractvalue { i8*, i32 } %8, 0, !dbg !1510
  store i8* %9, i8** %exn.slot, !dbg !1510
  %10 = extractvalue { i8*, i32 } %8, 1, !dbg !1510
  store i32 %10, i32* %ehselector.slot, !dbg !1510
  invoke void @_ZNSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiED2Ev(%"struct.std::pair"* %ref.tmp8)
          to label %invoke.cont13 unwind label %terminate.lpad, !dbg !1509

invoke.cont13:                                    ; preds = %lpad
  br label %eh.resume, !dbg !1511

if.end:                                           ; preds = %invoke.cont, %lor.lhs.false
  %call14 = call dereferenceable(40) %"struct.std::pair"* @_ZNKSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEdeEv(%"struct.std::_Rb_tree_iterator"* %__i), !dbg !1513
  %second = getelementptr inbounds %"struct.std::pair", %"struct.std::pair"* %call14, i32 0, i32 1, !dbg !1514
  ret i32* %second, !dbg !1515

eh.resume:                                        ; preds = %invoke.cont13
  %exn = load i8*, i8** %exn.slot, !dbg !1516
  %sel = load i32, i32* %ehselector.slot, !dbg !1516
  %lpad.val = insertvalue { i8*, i32 } undef, i8* %exn, 0, !dbg !1516
  %lpad.val15 = insertvalue { i8*, i32 } %lpad.val, i32 %sel, 1, !dbg !1516
  resume { i8*, i32 } %lpad.val15, !dbg !1516

terminate.lpad:                                   ; preds = %lpad
  %11 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          catch i8* null, !dbg !1518
  %12 = extractvalue { i8*, i32 } %11, 0, !dbg !1518
  call void @__clang_call_terminate(i8* %12) #13, !dbg !1518
  unreachable, !dbg !1518
}

declare dereferenceable(272) %"class.std::basic_ostream"* @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%"class.std::basic_ostream"* dereferenceable(272), i8*) #0

declare dereferenceable(272) %"class.std::basic_ostream"* @_ZNSolsEi(%"class.std::basic_ostream"*, i32) #0

; Function Attrs: uwtable
define void @_Z12printLnTracePci(i8* %filename, i32 %line) #2 {
entry:
  %filename.addr = alloca i8*, align 8
  %line.addr = alloca i32, align 4
  %key = alloca [128 x i8], align 16
  %ref.tmp = alloca %"class.std::__cxx11::basic_string", align 8
  %ref.tmp2 = alloca %"class.std::allocator.0", align 1
  %exn.slot = alloca i8*
  %ehselector.slot = alloca i32
  %coerce = alloca %"struct.std::_Rb_tree_iterator", align 8
  %ref.tmp6 = alloca %"struct.std::_Rb_tree_iterator", align 8
  %ref.tmp14 = alloca %"class.std::__cxx11::basic_string", align 8
  %ref.tmp16 = alloca %"class.std::allocator.0", align 1
  %ref.tmp33 = alloca %"class.std::__cxx11::basic_string", align 8
  %ref.tmp35 = alloca %"class.std::allocator.0", align 1
  store i8* %filename, i8** %filename.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %filename.addr, metadata !1520, metadata !1369), !dbg !1521
  store i32 %line, i32* %line.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %line.addr, metadata !1522, metadata !1369), !dbg !1523
  call void @llvm.dbg.declare(metadata [128 x i8]* %key, metadata !1524, metadata !1369), !dbg !1525
  %arraydecay = getelementptr inbounds [128 x i8], [128 x i8]* %key, i32 0, i32 0, !dbg !1526
  %0 = load i8*, i8** %filename.addr, align 8, !dbg !1527
  %1 = load i32, i32* %line.addr, align 4, !dbg !1528
  %call = call i32 (i8*, i8*, ...) @sprintf(i8* %arraydecay, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @.str6, i32 0, i32 0), i8* %0, i32 %1) #1, !dbg !1529
  %arraydecay1 = getelementptr inbounds [128 x i8], [128 x i8]* %key, i32 0, i32 0, !dbg !1530
  call void @_ZNSaIcEC1Ev(%"class.std::allocator.0"* %ref.tmp2) #1, !dbg !1532
  invoke void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_(%"class.std::__cxx11::basic_string"* %ref.tmp, i8* %arraydecay1, %"class.std::allocator.0"* dereferenceable(1) %ref.tmp2)
          to label %invoke.cont unwind label %lpad, !dbg !1532

invoke.cont:                                      ; preds = %entry
  %call5 = invoke %"struct.std::_Rb_tree_node_base"* @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE4findERS9_(%"class.std::map"* @nodes, %"class.std::__cxx11::basic_string"* dereferenceable(32) %ref.tmp)
          to label %invoke.cont4 unwind label %lpad3, !dbg !1533

invoke.cont4:                                     ; preds = %invoke.cont
  %coerce.dive = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %coerce, i32 0, i32 0, !dbg !1535
  store %"struct.std::_Rb_tree_node_base"* %call5, %"struct.std::_Rb_tree_node_base"** %coerce.dive, !dbg !1535
  %call8 = invoke %"struct.std::_Rb_tree_node_base"* @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE3endEv(%"class.std::map"* @nodes)
          to label %invoke.cont7 unwind label %lpad3, !dbg !1537

invoke.cont7:                                     ; preds = %invoke.cont4
  %coerce.dive9 = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %ref.tmp6, i32 0, i32 0, !dbg !1538
  store %"struct.std::_Rb_tree_node_base"* %call8, %"struct.std::_Rb_tree_node_base"** %coerce.dive9, !dbg !1538
  %call11 = invoke zeroext i1 @_ZNKSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEeqERKS9_(%"struct.std::_Rb_tree_iterator"* %coerce, %"struct.std::_Rb_tree_iterator"* dereferenceable(8) %ref.tmp6)
          to label %invoke.cont10 unwind label %lpad3, !dbg !1540

invoke.cont10:                                    ; preds = %invoke.cont7
  invoke void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev(%"class.std::__cxx11::basic_string"* %ref.tmp)
          to label %invoke.cont12 unwind label %lpad, !dbg !1541

invoke.cont12:                                    ; preds = %invoke.cont10
  call void @_ZNSaIcED1Ev(%"class.std::allocator.0"* %ref.tmp2) #1, !dbg !1543
  br i1 %call11, label %if.then, label %if.end, !dbg !1545

if.then:                                          ; preds = %invoke.cont12
  %2 = load i32, i32* @nodeNumber, align 4, !dbg !1546
  %arraydecay15 = getelementptr inbounds [128 x i8], [128 x i8]* %key, i32 0, i32 0, !dbg !1548
  call void @_ZNSaIcEC1Ev(%"class.std::allocator.0"* %ref.tmp16) #1, !dbg !1549
  invoke void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_(%"class.std::__cxx11::basic_string"* %ref.tmp14, i8* %arraydecay15, %"class.std::allocator.0"* dereferenceable(1) %ref.tmp16)
          to label %invoke.cont18 unwind label %lpad17, !dbg !1549

invoke.cont18:                                    ; preds = %if.then
  %call21 = invoke dereferenceable(4) i32* @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEEixERS9_(%"class.std::map"* @nodes, %"class.std::__cxx11::basic_string"* dereferenceable(32) %ref.tmp14)
          to label %invoke.cont20 unwind label %lpad19, !dbg !1550

invoke.cont20:                                    ; preds = %invoke.cont18
  store i32 %2, i32* %call21, !dbg !1552
  invoke void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev(%"class.std::__cxx11::basic_string"* %ref.tmp14)
          to label %invoke.cont22 unwind label %lpad17, !dbg !1554

invoke.cont22:                                    ; preds = %invoke.cont20
  call void @_ZNSaIcED1Ev(%"class.std::allocator.0"* %ref.tmp16) #1, !dbg !1555
  %call26 = call dereferenceable(272) %"class.std::basic_ostream"* @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%"class.std::basic_ostream"* dereferenceable(272) @_ZSt4cerr, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str2, i32 0, i32 0)), !dbg !1557
  %3 = load i32, i32* @nodeNumber, align 4, !dbg !1558
  %inc = add nsw i32 %3, 1, !dbg !1558
  store i32 %inc, i32* @nodeNumber, align 4, !dbg !1558
  %call27 = call dereferenceable(272) %"class.std::basic_ostream"* @_ZNSolsEi(%"class.std::basic_ostream"* %call26, i32 %3), !dbg !1559
  %call28 = call dereferenceable(272) %"class.std::basic_ostream"* @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%"class.std::basic_ostream"* dereferenceable(272) %call27, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str3, i32 0, i32 0)), !dbg !1560
  %arraydecay29 = getelementptr inbounds [128 x i8], [128 x i8]* %key, i32 0, i32 0, !dbg !1561
  %call30 = call dereferenceable(272) %"class.std::basic_ostream"* @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%"class.std::basic_ostream"* dereferenceable(272) %call28, i8* %arraydecay29), !dbg !1562
  %call31 = call dereferenceable(272) %"class.std::basic_ostream"* @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%"class.std::basic_ostream"* dereferenceable(272) %call30, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str4, i32 0, i32 0)), !dbg !1563
  br label %if.end, !dbg !1564

lpad:                                             ; preds = %invoke.cont10, %entry
  %4 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          cleanup, !dbg !1565
  %5 = extractvalue { i8*, i32 } %4, 0, !dbg !1565
  store i8* %5, i8** %exn.slot, !dbg !1565
  %6 = extractvalue { i8*, i32 } %4, 1, !dbg !1565
  store i32 %6, i32* %ehselector.slot, !dbg !1565
  br label %ehcleanup, !dbg !1565

lpad3:                                            ; preds = %invoke.cont7, %invoke.cont4, %invoke.cont
  %7 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          cleanup, !dbg !1565
  %8 = extractvalue { i8*, i32 } %7, 0, !dbg !1565
  store i8* %8, i8** %exn.slot, !dbg !1565
  %9 = extractvalue { i8*, i32 } %7, 1, !dbg !1565
  store i32 %9, i32* %ehselector.slot, !dbg !1565
  invoke void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev(%"class.std::__cxx11::basic_string"* %ref.tmp)
          to label %invoke.cont13 unwind label %terminate.lpad, !dbg !1566

invoke.cont13:                                    ; preds = %lpad3
  br label %ehcleanup, !dbg !1567

ehcleanup:                                        ; preds = %invoke.cont13, %lpad
  call void @_ZNSaIcED1Ev(%"class.std::allocator.0"* %ref.tmp2) #1, !dbg !1569
  br label %eh.resume, !dbg !1569

lpad17:                                           ; preds = %invoke.cont20, %if.then
  %10 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          cleanup, !dbg !1571
  %11 = extractvalue { i8*, i32 } %10, 0, !dbg !1571
  store i8* %11, i8** %exn.slot, !dbg !1571
  %12 = extractvalue { i8*, i32 } %10, 1, !dbg !1571
  store i32 %12, i32* %ehselector.slot, !dbg !1571
  br label %ehcleanup25, !dbg !1571

lpad19:                                           ; preds = %invoke.cont18
  %13 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          cleanup, !dbg !1571
  %14 = extractvalue { i8*, i32 } %13, 0, !dbg !1571
  store i8* %14, i8** %exn.slot, !dbg !1571
  %15 = extractvalue { i8*, i32 } %13, 1, !dbg !1571
  store i32 %15, i32* %ehselector.slot, !dbg !1571
  invoke void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev(%"class.std::__cxx11::basic_string"* %ref.tmp14)
          to label %invoke.cont24 unwind label %terminate.lpad, !dbg !1554

invoke.cont24:                                    ; preds = %lpad19
  br label %ehcleanup25, !dbg !1572

ehcleanup25:                                      ; preds = %invoke.cont24, %lpad17
  call void @_ZNSaIcED1Ev(%"class.std::allocator.0"* %ref.tmp16) #1, !dbg !1574
  br label %eh.resume, !dbg !1574

if.end:                                           ; preds = %invoke.cont22, %invoke.cont12
  %call32 = call dereferenceable(272) %"class.std::basic_ostream"* @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%"class.std::basic_ostream"* dereferenceable(272) @_ZSt4cerr, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str5, i32 0, i32 0)), !dbg !1576
  %arraydecay34 = getelementptr inbounds [128 x i8], [128 x i8]* %key, i32 0, i32 0, !dbg !1577
  call void @_ZNSaIcEC1Ev(%"class.std::allocator.0"* %ref.tmp35) #1, !dbg !1578
  invoke void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_(%"class.std::__cxx11::basic_string"* %ref.tmp33, i8* %arraydecay34, %"class.std::allocator.0"* dereferenceable(1) %ref.tmp35)
          to label %invoke.cont37 unwind label %lpad36, !dbg !1578

invoke.cont37:                                    ; preds = %if.end
  %call40 = invoke dereferenceable(4) i32* @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEEixERS9_(%"class.std::map"* @nodes, %"class.std::__cxx11::basic_string"* dereferenceable(32) %ref.tmp33)
          to label %invoke.cont39 unwind label %lpad38, !dbg !1579

invoke.cont39:                                    ; preds = %invoke.cont37
  %16 = load i32, i32* %call40, !dbg !1581
  %call42 = invoke dereferenceable(272) %"class.std::basic_ostream"* @_ZNSolsEi(%"class.std::basic_ostream"* %call32, i32 %16)
          to label %invoke.cont41 unwind label %lpad38, !dbg !1583

invoke.cont41:                                    ; preds = %invoke.cont39
  invoke void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev(%"class.std::__cxx11::basic_string"* %ref.tmp33)
          to label %invoke.cont43 unwind label %lpad36, !dbg !1584

invoke.cont43:                                    ; preds = %invoke.cont41
  call void @_ZNSaIcED1Ev(%"class.std::allocator.0"* %ref.tmp35) #1, !dbg !1586
  ret void, !dbg !1588

lpad36:                                           ; preds = %invoke.cont41, %if.end
  %17 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          cleanup, !dbg !1588
  %18 = extractvalue { i8*, i32 } %17, 0, !dbg !1588
  store i8* %18, i8** %exn.slot, !dbg !1588
  %19 = extractvalue { i8*, i32 } %17, 1, !dbg !1588
  store i32 %19, i32* %ehselector.slot, !dbg !1588
  br label %ehcleanup46, !dbg !1588

lpad38:                                           ; preds = %invoke.cont39, %invoke.cont37
  %20 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          cleanup, !dbg !1588
  %21 = extractvalue { i8*, i32 } %20, 0, !dbg !1588
  store i8* %21, i8** %exn.slot, !dbg !1588
  %22 = extractvalue { i8*, i32 } %20, 1, !dbg !1588
  store i32 %22, i32* %ehselector.slot, !dbg !1588
  invoke void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev(%"class.std::__cxx11::basic_string"* %ref.tmp33)
          to label %invoke.cont45 unwind label %terminate.lpad, !dbg !1589

invoke.cont45:                                    ; preds = %lpad38
  br label %ehcleanup46, !dbg !1590

ehcleanup46:                                      ; preds = %invoke.cont45, %lpad36
  call void @_ZNSaIcED1Ev(%"class.std::allocator.0"* %ref.tmp35) #1, !dbg !1592
  br label %eh.resume, !dbg !1592

eh.resume:                                        ; preds = %ehcleanup46, %ehcleanup25, %ehcleanup
  %exn = load i8*, i8** %exn.slot, !dbg !1594
  %sel = load i32, i32* %ehselector.slot, !dbg !1594
  %lpad.val = insertvalue { i8*, i32 } undef, i8* %exn, 0, !dbg !1594
  %lpad.val47 = insertvalue { i8*, i32 } %lpad.val, i32 %sel, 1, !dbg !1594
  resume { i8*, i32 } %lpad.val47, !dbg !1594

terminate.lpad:                                   ; preds = %lpad38, %lpad19, %lpad3
  %23 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          catch i8* null, !dbg !1596
  %24 = extractvalue { i8*, i32 } %23, 0, !dbg !1596
  call void @__clang_call_terminate(i8* %24) #13, !dbg !1596
  unreachable, !dbg !1596
}

; Function Attrs: uwtable
define void @_Z10printTracei(i32 %node) #2 {
entry:
  %node.addr = alloca i32, align 4
  store i32 %node, i32* %node.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %node.addr, metadata !1598, metadata !1369), !dbg !1599
  %call = call dereferenceable(272) %"class.std::basic_ostream"* @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%"class.std::basic_ostream"* dereferenceable(272) @_ZSt4cerr, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str5, i32 0, i32 0)), !dbg !1600
  %0 = load i32, i32* %node.addr, align 4, !dbg !1601
  %call1 = call dereferenceable(272) %"class.std::basic_ostream"* @_ZNSolsEi(%"class.std::basic_ostream"* %call, i32 %0), !dbg !1602
  ret void, !dbg !1603
}

; Function Attrs: uwtable
define void @_Z12printBBEntryiPc(i32 %ln, i8* %filename) #2 {
entry:
  %ln.addr = alloca i32, align 4
  %filename.addr = alloca i8*, align 8
  %i = alloca i32, align 4
  %ref.tmp = alloca %"class.std::__cxx11::basic_string", align 8
  %ref.tmp2 = alloca %"class.std::allocator.0", align 1
  %exn.slot = alloca i8*
  %ehselector.slot = alloca i32
  store i32 %ln, i32* %ln.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %ln.addr, metadata !1604, metadata !1369), !dbg !1605
  store i8* %filename, i8** %filename.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %filename.addr, metadata !1606, metadata !1369), !dbg !1607
  call void @llvm.dbg.declare(metadata i32* %i, metadata !1608, metadata !1369), !dbg !1610
  store i32 0, i32* %i, align 4, !dbg !1610
  br label %for.cond, !dbg !1611

for.cond:                                         ; preds = %for.inc, %entry
  %0 = load i32, i32* %i, align 4, !dbg !1612
  %1 = load i32, i32* @level, align 4, !dbg !1616
  %cmp = icmp slt i32 %0, %1, !dbg !1617
  br i1 %cmp, label %for.body, label %for.end, !dbg !1618

for.body:                                         ; preds = %for.cond
  %call = call dereferenceable(272) %"class.std::basic_ostream"* @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%"class.std::basic_ostream"* dereferenceable(272) @_ZSt4cerr, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str7, i32 0, i32 0)), !dbg !1619
  br label %for.inc, !dbg !1620

for.inc:                                          ; preds = %for.body
  %2 = load i32, i32* %i, align 4, !dbg !1621
  %inc = add nsw i32 %2, 1, !dbg !1621
  store i32 %inc, i32* %i, align 4, !dbg !1621
  br label %for.cond, !dbg !1622

for.end:                                          ; preds = %for.cond
  %call1 = call dereferenceable(272) %"class.std::basic_ostream"* @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%"class.std::basic_ostream"* dereferenceable(272) @_ZSt4cerr, i8* getelementptr inbounds ([26 x i8], [26 x i8]* @.str8, i32 0, i32 0)), !dbg !1623
  %3 = load i8*, i8** %filename.addr, align 8, !dbg !1624
  call void @_ZNSaIcEC1Ev(%"class.std::allocator.0"* %ref.tmp2) #1, !dbg !1625
  invoke void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_(%"class.std::__cxx11::basic_string"* %ref.tmp, i8* %3, %"class.std::allocator.0"* dereferenceable(1) %ref.tmp2)
          to label %invoke.cont unwind label %lpad, !dbg !1625

invoke.cont:                                      ; preds = %for.end
  %call5 = invoke dereferenceable(272) %"class.std::basic_ostream"* @_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE(%"class.std::basic_ostream"* dereferenceable(272) %call1, %"class.std::__cxx11::basic_string"* dereferenceable(32) %ref.tmp)
          to label %invoke.cont4 unwind label %lpad3, !dbg !1626

invoke.cont4:                                     ; preds = %invoke.cont
  %call7 = invoke dereferenceable(272) %"class.std::basic_ostream"* @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%"class.std::basic_ostream"* dereferenceable(272) %call5, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @.str9, i32 0, i32 0))
          to label %invoke.cont6 unwind label %lpad3, !dbg !1628

invoke.cont6:                                     ; preds = %invoke.cont4
  %4 = load i32, i32* %ln.addr, align 4, !dbg !1630
  %call9 = invoke dereferenceable(272) %"class.std::basic_ostream"* @_ZNSolsEi(%"class.std::basic_ostream"* %call7, i32 %4)
          to label %invoke.cont8 unwind label %lpad3, !dbg !1632

invoke.cont8:                                     ; preds = %invoke.cont6
  %call11 = invoke dereferenceable(272) %"class.std::basic_ostream"* @_ZNSolsEPFRSoS_E(%"class.std::basic_ostream"* %call9, %"class.std::basic_ostream"* (%"class.std::basic_ostream"*)* @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_)
          to label %invoke.cont10 unwind label %lpad3, !dbg !1633

invoke.cont10:                                    ; preds = %invoke.cont8
  invoke void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev(%"class.std::__cxx11::basic_string"* %ref.tmp)
          to label %invoke.cont12 unwind label %lpad, !dbg !1635

invoke.cont12:                                    ; preds = %invoke.cont10
  call void @_ZNSaIcED1Ev(%"class.std::allocator.0"* %ref.tmp2) #1, !dbg !1637
  %5 = load i32, i32* @level, align 4, !dbg !1639
  %inc14 = add nsw i32 %5, 1, !dbg !1639
  store i32 %inc14, i32* @level, align 4, !dbg !1639
  ret void, !dbg !1640

lpad:                                             ; preds = %invoke.cont10, %for.end
  %6 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          cleanup, !dbg !1640
  %7 = extractvalue { i8*, i32 } %6, 0, !dbg !1640
  store i8* %7, i8** %exn.slot, !dbg !1640
  %8 = extractvalue { i8*, i32 } %6, 1, !dbg !1640
  store i32 %8, i32* %ehselector.slot, !dbg !1640
  br label %ehcleanup, !dbg !1640

lpad3:                                            ; preds = %invoke.cont8, %invoke.cont6, %invoke.cont4, %invoke.cont
  %9 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          cleanup, !dbg !1640
  %10 = extractvalue { i8*, i32 } %9, 0, !dbg !1640
  store i8* %10, i8** %exn.slot, !dbg !1640
  %11 = extractvalue { i8*, i32 } %9, 1, !dbg !1640
  store i32 %11, i32* %ehselector.slot, !dbg !1640
  invoke void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev(%"class.std::__cxx11::basic_string"* %ref.tmp)
          to label %invoke.cont13 unwind label %terminate.lpad, !dbg !1641

invoke.cont13:                                    ; preds = %lpad3
  br label %ehcleanup, !dbg !1642

ehcleanup:                                        ; preds = %invoke.cont13, %lpad
  call void @_ZNSaIcED1Ev(%"class.std::allocator.0"* %ref.tmp2) #1, !dbg !1644
  br label %eh.resume, !dbg !1644

eh.resume:                                        ; preds = %ehcleanup
  %exn = load i8*, i8** %exn.slot, !dbg !1646
  %sel = load i32, i32* %ehselector.slot, !dbg !1646
  %lpad.val = insertvalue { i8*, i32 } undef, i8* %exn, 0, !dbg !1646
  %lpad.val15 = insertvalue { i8*, i32 } %lpad.val, i32 %sel, 1, !dbg !1646
  resume { i8*, i32 } %lpad.val15, !dbg !1646

terminate.lpad:                                   ; preds = %lpad3
  %12 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          catch i8* null, !dbg !1648
  %13 = extractvalue { i8*, i32 } %12, 0, !dbg !1648
  call void @__clang_call_terminate(i8* %13) #13, !dbg !1648
  unreachable, !dbg !1648
}

declare dereferenceable(272) %"class.std::basic_ostream"* @_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE(%"class.std::basic_ostream"* dereferenceable(272), %"class.std::__cxx11::basic_string"* dereferenceable(32)) #0

declare dereferenceable(272) %"class.std::basic_ostream"* @_ZNSolsEPFRSoS_E(%"class.std::basic_ostream"*, %"class.std::basic_ostream"* (%"class.std::basic_ostream"*)*) #0

declare dereferenceable(272) %"class.std::basic_ostream"* @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_(%"class.std::basic_ostream"* dereferenceable(272)) #0

; Function Attrs: uwtable
define void @_Z11printBBExitiPc(i32 %ln, i8* %filename) #2 {
entry:
  %ln.addr = alloca i32, align 4
  %filename.addr = alloca i8*, align 8
  %i = alloca i32, align 4
  store i32 %ln, i32* %ln.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %ln.addr, metadata !1650, metadata !1369), !dbg !1651
  store i8* %filename, i8** %filename.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %filename.addr, metadata !1652, metadata !1369), !dbg !1653
  %0 = load i32, i32* @level, align 4, !dbg !1654
  %dec = add nsw i32 %0, -1, !dbg !1654
  store i32 %dec, i32* @level, align 4, !dbg !1654
  call void @llvm.dbg.declare(metadata i32* %i, metadata !1655, metadata !1369), !dbg !1657
  store i32 0, i32* %i, align 4, !dbg !1657
  br label %for.cond, !dbg !1658

for.cond:                                         ; preds = %for.inc, %entry
  %1 = load i32, i32* %i, align 4, !dbg !1659
  %2 = load i32, i32* @level, align 4, !dbg !1663
  %cmp = icmp slt i32 %1, %2, !dbg !1664
  br i1 %cmp, label %for.body, label %for.end, !dbg !1665

for.body:                                         ; preds = %for.cond
  %call = call dereferenceable(272) %"class.std::basic_ostream"* @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%"class.std::basic_ostream"* dereferenceable(272) @_ZSt4cerr, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str7, i32 0, i32 0)), !dbg !1666
  br label %for.inc, !dbg !1667

for.inc:                                          ; preds = %for.body
  %3 = load i32, i32* %i, align 4, !dbg !1668
  %inc = add nsw i32 %3, 1, !dbg !1668
  store i32 %inc, i32* %i, align 4, !dbg !1668
  br label %for.cond, !dbg !1669

for.end:                                          ; preds = %for.cond
  %call1 = call dereferenceable(272) %"class.std::basic_ostream"* @_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc(%"class.std::basic_ostream"* dereferenceable(272) @_ZSt4cerr, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @.str10, i32 0, i32 0)), !dbg !1670
  %call2 = call dereferenceable(272) %"class.std::basic_ostream"* @_ZNSolsEPFRSoS_E(%"class.std::basic_ostream"* %call1, %"class.std::basic_ostream"* (%"class.std::basic_ostream"*)* @_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_), !dbg !1671
  ret void, !dbg !1672
}

; Function Attrs: uwtable
define linkonce_odr void @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EED2Ev(%"class.std::_Rb_tree"* %this) unnamed_addr #2 comdat align 2 {
entry:
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  %exn.slot = alloca i8*
  %ehselector.slot = alloca i32
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !1673, metadata !1369), !dbg !1675
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  %call = invoke %"struct.std::_Rb_tree_node"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_M_beginEv(%"class.std::_Rb_tree"* %this1)
          to label %invoke.cont unwind label %lpad, !dbg !1676

invoke.cont:                                      ; preds = %entry
  invoke void @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_M_eraseEPSt13_Rb_tree_nodeIS8_E(%"class.std::_Rb_tree"* %this1, %"struct.std::_Rb_tree_node"* %call)
          to label %invoke.cont2 unwind label %lpad, !dbg !1678

invoke.cont2:                                     ; preds = %invoke.cont
  %_M_impl = getelementptr inbounds %"class.std::_Rb_tree", %"class.std::_Rb_tree"* %this1, i32 0, i32 0, !dbg !1680
  call void @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EED2Ev(%"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %_M_impl) #1, !dbg !1680
  ret void, !dbg !1682

lpad:                                             ; preds = %invoke.cont, %entry
  %0 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          cleanup, !dbg !1683
  %1 = extractvalue { i8*, i32 } %0, 0, !dbg !1683
  store i8* %1, i8** %exn.slot, !dbg !1683
  %2 = extractvalue { i8*, i32 } %0, 1, !dbg !1683
  store i32 %2, i32* %ehselector.slot, !dbg !1683
  %_M_impl3 = getelementptr inbounds %"class.std::_Rb_tree", %"class.std::_Rb_tree"* %this1, i32 0, i32 0, !dbg !1683
  call void @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EED2Ev(%"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %_M_impl3) #1, !dbg !1683
  br label %eh.resume, !dbg !1683

eh.resume:                                        ; preds = %lpad
  %exn = load i8*, i8** %exn.slot, !dbg !1686
  %sel = load i32, i32* %ehselector.slot, !dbg !1686
  %lpad.val = insertvalue { i8*, i32 } undef, i8* %exn, 0, !dbg !1686
  %lpad.val4 = insertvalue { i8*, i32 } %lpad.val, i32 %sel, 1, !dbg !1686
  resume { i8*, i32 } %lpad.val4, !dbg !1686
}

; Function Attrs: uwtable
define linkonce_odr void @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_M_eraseEPSt13_Rb_tree_nodeIS8_E(%"class.std::_Rb_tree"* %this, %"struct.std::_Rb_tree_node"* %__x) #2 comdat align 2 {
entry:
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  %__x.addr = alloca %"struct.std::_Rb_tree_node"*, align 8
  %__y = alloca %"struct.std::_Rb_tree_node"*, align 8
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !1688, metadata !1369), !dbg !1689
  store %"struct.std::_Rb_tree_node"* %__x, %"struct.std::_Rb_tree_node"** %__x.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node"** %__x.addr, metadata !1690, metadata !1369), !dbg !1691
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  br label %while.cond, !dbg !1692

while.cond:                                       ; preds = %while.body, %entry
  %0 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__x.addr, align 8, !dbg !1693
  %cmp = icmp ne %"struct.std::_Rb_tree_node"* %0, null, !dbg !1696
  br i1 %cmp, label %while.body, label %while.end, !dbg !1692

while.body:                                       ; preds = %while.cond
  %1 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__x.addr, align 8, !dbg !1697
  %2 = bitcast %"struct.std::_Rb_tree_node"* %1 to %"struct.std::_Rb_tree_node_base"*, !dbg !1697
  %call = call %"struct.std::_Rb_tree_node"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_S_rightEPSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_node_base"* %2), !dbg !1699
  call void @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_M_eraseEPSt13_Rb_tree_nodeIS8_E(%"class.std::_Rb_tree"* %this1, %"struct.std::_Rb_tree_node"* %call), !dbg !1700
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node"** %__y, metadata !1701, metadata !1369), !dbg !1702
  %3 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__x.addr, align 8, !dbg !1703
  %4 = bitcast %"struct.std::_Rb_tree_node"* %3 to %"struct.std::_Rb_tree_node_base"*, !dbg !1703
  %call2 = call %"struct.std::_Rb_tree_node"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE7_S_leftEPSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_node_base"* %4), !dbg !1704
  store %"struct.std::_Rb_tree_node"* %call2, %"struct.std::_Rb_tree_node"** %__y, align 8, !dbg !1702
  %5 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__x.addr, align 8, !dbg !1705
  call void @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS8_E(%"class.std::_Rb_tree"* %this1, %"struct.std::_Rb_tree_node"* %5), !dbg !1706
  %6 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__y, align 8, !dbg !1707
  store %"struct.std::_Rb_tree_node"* %6, %"struct.std::_Rb_tree_node"** %__x.addr, align 8, !dbg !1708
  br label %while.cond, !dbg !1692

while.end:                                        ; preds = %while.cond
  ret void, !dbg !1709
}

; Function Attrs: nounwind uwtable
define linkonce_odr %"struct.std::_Rb_tree_node"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_M_beginEv(%"class.std::_Rb_tree"* %this) #6 comdat align 2 {
entry:
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !1710, metadata !1369), !dbg !1711
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  %_M_impl = getelementptr inbounds %"class.std::_Rb_tree", %"class.std::_Rb_tree"* %this1, i32 0, i32 0, !dbg !1712
  %_M_header = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %_M_impl, i32 0, i32 1, !dbg !1713
  %_M_parent = getelementptr inbounds %"struct.std::_Rb_tree_node_base", %"struct.std::_Rb_tree_node_base"* %_M_header, i32 0, i32 1, !dbg !1714
  %0 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %_M_parent, align 8, !dbg !1714
  %1 = bitcast %"struct.std::_Rb_tree_node_base"* %0 to %"struct.std::_Rb_tree_node"*, !dbg !1715
  ret %"struct.std::_Rb_tree_node"* %1, !dbg !1716
}

; Function Attrs: inlinehint nounwind uwtable
define linkonce_odr void @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EED2Ev(%"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %this) unnamed_addr #8 comdat align 2 {
entry:
  %this.addr = alloca %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"*, align 8
  store %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %this, %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"** %this.addr, metadata !1717, metadata !1369), !dbg !1719
  %this1 = load %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"*, %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"** %this.addr
  %0 = bitcast %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %this1 to %"class.std::allocator"*, !dbg !1720
  call void @_ZNSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEED2Ev(%"class.std::allocator"* %0) #1, !dbg !1720
  ret void, !dbg !1722
}

; Function Attrs: nounwind uwtable
define linkonce_odr %"struct.std::_Rb_tree_node"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_S_rightEPSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_node_base"* %__x) #6 comdat align 2 {
entry:
  %__x.addr = alloca %"struct.std::_Rb_tree_node_base"*, align 8
  store %"struct.std::_Rb_tree_node_base"* %__x, %"struct.std::_Rb_tree_node_base"** %__x.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node_base"** %__x.addr, metadata !1723, metadata !1369), !dbg !1724
  %0 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %__x.addr, align 8, !dbg !1725
  %_M_right = getelementptr inbounds %"struct.std::_Rb_tree_node_base", %"struct.std::_Rb_tree_node_base"* %0, i32 0, i32 3, !dbg !1726
  %1 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %_M_right, align 8, !dbg !1726
  %2 = bitcast %"struct.std::_Rb_tree_node_base"* %1 to %"struct.std::_Rb_tree_node"*, !dbg !1727
  ret %"struct.std::_Rb_tree_node"* %2, !dbg !1728
}

; Function Attrs: nounwind uwtable
define linkonce_odr %"struct.std::_Rb_tree_node"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE7_S_leftEPSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_node_base"* %__x) #6 comdat align 2 {
entry:
  %__x.addr = alloca %"struct.std::_Rb_tree_node_base"*, align 8
  store %"struct.std::_Rb_tree_node_base"* %__x, %"struct.std::_Rb_tree_node_base"** %__x.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node_base"** %__x.addr, metadata !1729, metadata !1369), !dbg !1730
  %0 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %__x.addr, align 8, !dbg !1731
  %_M_left = getelementptr inbounds %"struct.std::_Rb_tree_node_base", %"struct.std::_Rb_tree_node_base"* %0, i32 0, i32 2, !dbg !1732
  %1 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %_M_left, align 8, !dbg !1732
  %2 = bitcast %"struct.std::_Rb_tree_node_base"* %1 to %"struct.std::_Rb_tree_node"*, !dbg !1733
  ret %"struct.std::_Rb_tree_node"* %2, !dbg !1734
}

; Function Attrs: uwtable
define linkonce_odr void @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS8_E(%"class.std::_Rb_tree"* %this, %"struct.std::_Rb_tree_node"* %__p) #2 comdat align 2 {
entry:
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  %__p.addr = alloca %"struct.std::_Rb_tree_node"*, align 8
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !1735, metadata !1369), !dbg !1736
  store %"struct.std::_Rb_tree_node"* %__p, %"struct.std::_Rb_tree_node"** %__p.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node"** %__p.addr, metadata !1737, metadata !1369), !dbg !1738
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  %0 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__p.addr, align 8, !dbg !1739
  call void @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS8_E(%"class.std::_Rb_tree"* %this1, %"struct.std::_Rb_tree_node"* %0), !dbg !1740
  %1 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__p.addr, align 8, !dbg !1741
  call void @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS8_E(%"class.std::_Rb_tree"* %this1, %"struct.std::_Rb_tree_node"* %1), !dbg !1742
  ret void, !dbg !1743
}

; Function Attrs: uwtable
define linkonce_odr void @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS8_E(%"class.std::_Rb_tree"* %this, %"struct.std::_Rb_tree_node"* %__p) #2 comdat align 2 {
entry:
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  %__p.addr = alloca %"struct.std::_Rb_tree_node"*, align 8
  %temp.lvalue = alloca %"class.std::allocator.3", align 1
  %exn.slot = alloca i8*
  %ehselector.slot = alloca i32
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !1744, metadata !1369), !dbg !1745
  store %"struct.std::_Rb_tree_node"* %__p, %"struct.std::_Rb_tree_node"** %__p.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node"** %__p.addr, metadata !1746, metadata !1369), !dbg !1747
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  call void @_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13get_allocatorEv(%"class.std::allocator.3"* sret %temp.lvalue, %"class.std::_Rb_tree"* %this1), !dbg !1748
  %0 = bitcast %"class.std::allocator.3"* %temp.lvalue to %"class.__gnu_cxx::new_allocator.4"*, !dbg !1748
  %1 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__p.addr, align 8, !dbg !1749
  %call = invoke %"struct.std::pair"* @_ZNSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE9_M_valptrEv(%"struct.std::_Rb_tree_node"* %1)
          to label %invoke.cont unwind label %lpad, !dbg !1749

invoke.cont:                                      ; preds = %entry
  invoke void @_ZN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE7destroyEPS9_(%"class.__gnu_cxx::new_allocator.4"* %0, %"struct.std::pair"* %call)
          to label %invoke.cont2 unwind label %lpad, !dbg !1750

invoke.cont2:                                     ; preds = %invoke.cont
  call void @_ZNSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEED2Ev(%"class.std::allocator.3"* %temp.lvalue) #1, !dbg !1752
  ret void, !dbg !1754

lpad:                                             ; preds = %invoke.cont, %entry
  %2 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          cleanup, !dbg !1755
  %3 = extractvalue { i8*, i32 } %2, 0, !dbg !1755
  store i8* %3, i8** %exn.slot, !dbg !1755
  %4 = extractvalue { i8*, i32 } %2, 1, !dbg !1755
  store i32 %4, i32* %ehselector.slot, !dbg !1755
  call void @_ZNSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEED2Ev(%"class.std::allocator.3"* %temp.lvalue) #1, !dbg !1748
  br label %eh.resume, !dbg !1748

eh.resume:                                        ; preds = %lpad
  %exn = load i8*, i8** %exn.slot, !dbg !1758
  %sel = load i32, i32* %ehselector.slot, !dbg !1758
  %lpad.val = insertvalue { i8*, i32 } undef, i8* %exn, 0, !dbg !1758
  %lpad.val3 = insertvalue { i8*, i32 } %lpad.val, i32 %sel, 1, !dbg !1758
  resume { i8*, i32 } %lpad.val3, !dbg !1758
}

; Function Attrs: uwtable
define linkonce_odr void @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS8_E(%"class.std::_Rb_tree"* %this, %"struct.std::_Rb_tree_node"* %__p) #2 comdat align 2 {
entry:
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  %__p.addr = alloca %"struct.std::_Rb_tree_node"*, align 8
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !1760, metadata !1369), !dbg !1761
  store %"struct.std::_Rb_tree_node"* %__p, %"struct.std::_Rb_tree_node"** %__p.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node"** %__p.addr, metadata !1762, metadata !1369), !dbg !1763
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  %call = call dereferenceable(1) %"class.std::allocator"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE21_M_get_Node_allocatorEv(%"class.std::_Rb_tree"* %this1), !dbg !1764
  %0 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__p.addr, align 8, !dbg !1765
  call void @_ZN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE10deallocateERSC_PSB_m(%"class.std::allocator"* dereferenceable(1) %call, %"struct.std::_Rb_tree_node"* %0, i64 1), !dbg !1766
  ret void, !dbg !1767
}

; Function Attrs: uwtable
define linkonce_odr void @_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13get_allocatorEv(%"class.std::allocator.3"* noalias sret %agg.result, %"class.std::_Rb_tree"* %this) #2 comdat align 2 {
entry:
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !1768, metadata !1369), !dbg !1770
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  %call = call dereferenceable(1) %"class.std::allocator"* @_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE21_M_get_Node_allocatorEv(%"class.std::_Rb_tree"* %this1), !dbg !1771
  call void @_ZNSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2ISt13_Rb_tree_nodeIS7_EEERKSaIT_E(%"class.std::allocator.3"* %agg.result, %"class.std::allocator"* dereferenceable(1) %call) #1, !dbg !1772
  ret void, !dbg !1773
}

; Function Attrs: uwtable
define linkonce_odr void @_ZN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE7destroyEPS9_(%"class.__gnu_cxx::new_allocator.4"* %this, %"struct.std::pair"* %__p) #2 comdat align 2 {
entry:
  %this.addr = alloca %"class.__gnu_cxx::new_allocator.4"*, align 8
  %__p.addr = alloca %"struct.std::pair"*, align 8
  store %"class.__gnu_cxx::new_allocator.4"* %this, %"class.__gnu_cxx::new_allocator.4"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.__gnu_cxx::new_allocator.4"** %this.addr, metadata !1774, metadata !1369), !dbg !1776
  store %"struct.std::pair"* %__p, %"struct.std::pair"** %__p.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::pair"** %__p.addr, metadata !1777, metadata !1369), !dbg !1778
  %this1 = load %"class.__gnu_cxx::new_allocator.4"*, %"class.__gnu_cxx::new_allocator.4"** %this.addr
  %0 = load %"struct.std::pair"*, %"struct.std::pair"** %__p.addr, align 8, !dbg !1779
  call void @_ZNSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiED2Ev(%"struct.std::pair"* %0), !dbg !1779
  ret void, !dbg !1780
}

; Function Attrs: uwtable
define linkonce_odr %"struct.std::pair"* @_ZNSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE9_M_valptrEv(%"struct.std::_Rb_tree_node"* %this) #2 comdat align 2 {
entry:
  %this.addr = alloca %"struct.std::_Rb_tree_node"*, align 8
  store %"struct.std::_Rb_tree_node"* %this, %"struct.std::_Rb_tree_node"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node"** %this.addr, metadata !1781, metadata !1369), !dbg !1782
  %this1 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %this.addr
  %_M_value_field = getelementptr inbounds %"struct.std::_Rb_tree_node", %"struct.std::_Rb_tree_node"* %this1, i32 0, i32 1, !dbg !1783
  %call = call %"struct.std::pair"* @_ZSt11__addressofISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEPT_RS9_(%"struct.std::pair"* dereferenceable(40) %_M_value_field), !dbg !1784
  ret %"struct.std::pair"* %call, !dbg !1785
}

; Function Attrs: nounwind uwtable
define linkonce_odr void @_ZNSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEED2Ev(%"class.std::allocator.3"* %this) unnamed_addr #6 comdat align 2 {
entry:
  %this.addr = alloca %"class.std::allocator.3"*, align 8
  store %"class.std::allocator.3"* %this, %"class.std::allocator.3"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::allocator.3"** %this.addr, metadata !1786, metadata !1369), !dbg !1788
  %this1 = load %"class.std::allocator.3"*, %"class.std::allocator.3"** %this.addr
  %0 = bitcast %"class.std::allocator.3"* %this1 to %"class.__gnu_cxx::new_allocator.4"*, !dbg !1789
  call void @_ZN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEED2Ev(%"class.__gnu_cxx::new_allocator.4"* %0) #1, !dbg !1789
  ret void, !dbg !1791
}

; Function Attrs: nounwind uwtable
define linkonce_odr dereferenceable(1) %"class.std::allocator"* @_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE21_M_get_Node_allocatorEv(%"class.std::_Rb_tree"* %this) #6 comdat align 2 {
entry:
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !1792, metadata !1369), !dbg !1793
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  %_M_impl = getelementptr inbounds %"class.std::_Rb_tree", %"class.std::_Rb_tree"* %this1, i32 0, i32 0, !dbg !1794
  %0 = bitcast %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %_M_impl to %"class.std::allocator"*, !dbg !1795
  ret %"class.std::allocator"* %0, !dbg !1796
}

; Function Attrs: nounwind uwtable
define linkonce_odr void @_ZNSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2ISt13_Rb_tree_nodeIS7_EEERKSaIT_E(%"class.std::allocator.3"* %this, %"class.std::allocator"* dereferenceable(1)) unnamed_addr #6 comdat align 2 {
entry:
  %this.addr = alloca %"class.std::allocator.3"*, align 8
  %.addr = alloca %"class.std::allocator"*, align 8
  store %"class.std::allocator.3"* %this, %"class.std::allocator.3"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::allocator.3"** %this.addr, metadata !1797, metadata !1369), !dbg !1798
  store %"class.std::allocator"* %0, %"class.std::allocator"** %.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::allocator"** %.addr, metadata !1799, metadata !1369), !dbg !1800
  %this1 = load %"class.std::allocator.3"*, %"class.std::allocator.3"** %this.addr
  %1 = bitcast %"class.std::allocator.3"* %this1 to %"class.__gnu_cxx::new_allocator.4"*, !dbg !1801
  call void @_ZN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2Ev(%"class.__gnu_cxx::new_allocator.4"* %1) #1, !dbg !1802
  ret void, !dbg !1803
}

; Function Attrs: nounwind uwtable
define linkonce_odr void @_ZN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2Ev(%"class.__gnu_cxx::new_allocator.4"* %this) unnamed_addr #6 comdat align 2 {
entry:
  %this.addr = alloca %"class.__gnu_cxx::new_allocator.4"*, align 8
  store %"class.__gnu_cxx::new_allocator.4"* %this, %"class.__gnu_cxx::new_allocator.4"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.__gnu_cxx::new_allocator.4"** %this.addr, metadata !1804, metadata !1369), !dbg !1805
  %this1 = load %"class.__gnu_cxx::new_allocator.4"*, %"class.__gnu_cxx::new_allocator.4"** %this.addr
  ret void, !dbg !1806
}

; Function Attrs: inlinehint uwtable
define linkonce_odr void @_ZNSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiED2Ev(%"struct.std::pair"* %this) unnamed_addr #3 comdat align 2 {
entry:
  %this.addr = alloca %"struct.std::pair"*, align 8
  store %"struct.std::pair"* %this, %"struct.std::pair"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::pair"** %this.addr, metadata !1807, metadata !1369), !dbg !1808
  %this1 = load %"struct.std::pair"*, %"struct.std::pair"** %this.addr
  %first = getelementptr inbounds %"struct.std::pair", %"struct.std::pair"* %this1, i32 0, i32 0, !dbg !1809
  call void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev(%"class.std::__cxx11::basic_string"* %first), !dbg !1809
  ret void, !dbg !1811
}

; Function Attrs: inlinehint nounwind uwtable
define linkonce_odr %"struct.std::pair"* @_ZSt11__addressofISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEPT_RS9_(%"struct.std::pair"* dereferenceable(40) %__r) #8 comdat {
entry:
  %__r.addr = alloca %"struct.std::pair"*, align 8
  store %"struct.std::pair"* %__r, %"struct.std::pair"** %__r.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::pair"** %__r.addr, metadata !1812, metadata !1369), !dbg !1813
  %0 = load %"struct.std::pair"*, %"struct.std::pair"** %__r.addr, align 8, !dbg !1814
  %1 = bitcast %"struct.std::pair"* %0 to i8*, !dbg !1815
  %2 = bitcast i8* %1 to %"struct.std::pair"*, !dbg !1816
  ret %"struct.std::pair"* %2, !dbg !1817
}

; Function Attrs: nounwind uwtable
define linkonce_odr void @_ZN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEED2Ev(%"class.__gnu_cxx::new_allocator.4"* %this) unnamed_addr #6 comdat align 2 {
entry:
  %this.addr = alloca %"class.__gnu_cxx::new_allocator.4"*, align 8
  store %"class.__gnu_cxx::new_allocator.4"* %this, %"class.__gnu_cxx::new_allocator.4"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.__gnu_cxx::new_allocator.4"** %this.addr, metadata !1818, metadata !1369), !dbg !1819
  %this1 = load %"class.__gnu_cxx::new_allocator.4"*, %"class.__gnu_cxx::new_allocator.4"** %this.addr
  ret void, !dbg !1820
}

; Function Attrs: uwtable
define linkonce_odr void @_ZN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE10deallocateERSC_PSB_m(%"class.std::allocator"* dereferenceable(1) %__a, %"struct.std::_Rb_tree_node"* %__p, i64 %__n) #2 comdat align 2 {
entry:
  %__a.addr = alloca %"class.std::allocator"*, align 8
  %__p.addr = alloca %"struct.std::_Rb_tree_node"*, align 8
  %__n.addr = alloca i64, align 8
  store %"class.std::allocator"* %__a, %"class.std::allocator"** %__a.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::allocator"** %__a.addr, metadata !1821, metadata !1369), !dbg !1822
  store %"struct.std::_Rb_tree_node"* %__p, %"struct.std::_Rb_tree_node"** %__p.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node"** %__p.addr, metadata !1823, metadata !1369), !dbg !1824
  store i64 %__n, i64* %__n.addr, align 8
  call void @llvm.dbg.declare(metadata i64* %__n.addr, metadata !1825, metadata !1369), !dbg !1826
  %0 = load %"class.std::allocator"*, %"class.std::allocator"** %__a.addr, align 8, !dbg !1827
  %1 = bitcast %"class.std::allocator"* %0 to %"class.__gnu_cxx::new_allocator"*, !dbg !1827
  %2 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__p.addr, align 8, !dbg !1828
  %3 = load i64, i64* %__n.addr, align 8, !dbg !1829
  call void @_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE10deallocateEPSB_m(%"class.__gnu_cxx::new_allocator"* %1, %"struct.std::_Rb_tree_node"* %2, i64 %3), !dbg !1827
  ret void, !dbg !1830
}

; Function Attrs: nounwind uwtable
define linkonce_odr dereferenceable(1) %"class.std::allocator"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE21_M_get_Node_allocatorEv(%"class.std::_Rb_tree"* %this) #6 comdat align 2 {
entry:
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !1831, metadata !1369), !dbg !1832
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  %_M_impl = getelementptr inbounds %"class.std::_Rb_tree", %"class.std::_Rb_tree"* %this1, i32 0, i32 0, !dbg !1833
  %0 = bitcast %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %_M_impl to %"class.std::allocator"*, !dbg !1834
  ret %"class.std::allocator"* %0, !dbg !1835
}

; Function Attrs: nounwind uwtable
define linkonce_odr void @_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE10deallocateEPSB_m(%"class.__gnu_cxx::new_allocator"* %this, %"struct.std::_Rb_tree_node"* %__p, i64) #6 comdat align 2 {
entry:
  %this.addr = alloca %"class.__gnu_cxx::new_allocator"*, align 8
  %__p.addr = alloca %"struct.std::_Rb_tree_node"*, align 8
  %.addr = alloca i64, align 8
  store %"class.__gnu_cxx::new_allocator"* %this, %"class.__gnu_cxx::new_allocator"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.__gnu_cxx::new_allocator"** %this.addr, metadata !1836, metadata !1369), !dbg !1838
  store %"struct.std::_Rb_tree_node"* %__p, %"struct.std::_Rb_tree_node"** %__p.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node"** %__p.addr, metadata !1839, metadata !1369), !dbg !1840
  store i64 %0, i64* %.addr, align 8
  call void @llvm.dbg.declare(metadata i64* %.addr, metadata !1841, metadata !1369), !dbg !1842
  %this1 = load %"class.__gnu_cxx::new_allocator"*, %"class.__gnu_cxx::new_allocator"** %this.addr
  %1 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__p.addr, align 8, !dbg !1843
  %2 = bitcast %"struct.std::_Rb_tree_node"* %1 to i8*, !dbg !1843
  call void @_ZdlPv(i8* %2) #1, !dbg !1844
  ret void, !dbg !1845
}

; Function Attrs: nobuiltin nounwind
declare void @_ZdlPv(i8*) #9

; Function Attrs: nounwind uwtable
define linkonce_odr void @_ZNSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEED2Ev(%"class.std::allocator"* %this) unnamed_addr #6 comdat align 2 {
entry:
  %this.addr = alloca %"class.std::allocator"*, align 8
  store %"class.std::allocator"* %this, %"class.std::allocator"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::allocator"** %this.addr, metadata !1846, metadata !1369), !dbg !1848
  %this1 = load %"class.std::allocator"*, %"class.std::allocator"** %this.addr
  %0 = bitcast %"class.std::allocator"* %this1 to %"class.__gnu_cxx::new_allocator"*, !dbg !1849
  call void @_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEED2Ev(%"class.__gnu_cxx::new_allocator"* %0) #1, !dbg !1849
  ret void, !dbg !1851
}

; Function Attrs: nounwind uwtable
define linkonce_odr void @_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEED2Ev(%"class.__gnu_cxx::new_allocator"* %this) unnamed_addr #6 comdat align 2 {
entry:
  %this.addr = alloca %"class.__gnu_cxx::new_allocator"*, align 8
  store %"class.__gnu_cxx::new_allocator"* %this, %"class.__gnu_cxx::new_allocator"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.__gnu_cxx::new_allocator"** %this.addr, metadata !1852, metadata !1369), !dbg !1853
  %this1 = load %"class.__gnu_cxx::new_allocator"*, %"class.__gnu_cxx::new_allocator"** %this.addr
  ret void, !dbg !1854
}

; Function Attrs: uwtable
define linkonce_odr void @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EEC2Ev(%"class.std::_Rb_tree"* %this) unnamed_addr #2 comdat align 2 {
entry:
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !1855, metadata !1369), !dbg !1856
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  %_M_impl = getelementptr inbounds %"class.std::_Rb_tree", %"class.std::_Rb_tree"* %this1, i32 0, i32 0, !dbg !1857
  call void @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EEC2Ev(%"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %_M_impl), !dbg !1857
  ret void, !dbg !1858
}

; Function Attrs: uwtable
define linkonce_odr void @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EEC2Ev(%"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %this) unnamed_addr #2 comdat align 2 {
entry:
  %this.addr = alloca %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"*, align 8
  %exn.slot = alloca i8*
  %ehselector.slot = alloca i32
  store %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %this, %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"** %this.addr, metadata !1859, metadata !1369), !dbg !1860
  %this1 = load %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"*, %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"** %this.addr
  %0 = bitcast %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %this1 to %"class.std::allocator"*, !dbg !1861
  call void @_ZNSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEC2Ev(%"class.std::allocator"* %0) #1, !dbg !1862
  %_M_key_compare = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %this1, i32 0, i32 0, !dbg !1863
  %_M_header = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %this1, i32 0, i32 1, !dbg !1864
  %1 = bitcast %"struct.std::_Rb_tree_node_base"* %_M_header to i8*, !dbg !1864
  call void @llvm.memset.p0i8.i64(i8* %1, i8 0, i64 32, i32 8, i1 false), !dbg !1864
  %_M_node_count = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %this1, i32 0, i32 2, !dbg !1865
  store i64 0, i64* %_M_node_count, align 8, !dbg !1865
  invoke void @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EE13_M_initializeEv(%"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %this1)
          to label %invoke.cont unwind label %lpad, !dbg !1866

invoke.cont:                                      ; preds = %entry
  ret void, !dbg !1868

lpad:                                             ; preds = %entry
  %2 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          cleanup, !dbg !1870
  %3 = extractvalue { i8*, i32 } %2, 0, !dbg !1870
  store i8* %3, i8** %exn.slot, !dbg !1870
  %4 = extractvalue { i8*, i32 } %2, 1, !dbg !1870
  store i32 %4, i32* %ehselector.slot, !dbg !1870
  %5 = bitcast %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %this1 to %"class.std::allocator"*, !dbg !1870
  call void @_ZNSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEED2Ev(%"class.std::allocator"* %5) #1, !dbg !1870
  br label %eh.resume, !dbg !1870

eh.resume:                                        ; preds = %lpad
  %exn = load i8*, i8** %exn.slot, !dbg !1872
  %sel = load i32, i32* %ehselector.slot, !dbg !1872
  %lpad.val = insertvalue { i8*, i32 } undef, i8* %exn, 0, !dbg !1872
  %lpad.val2 = insertvalue { i8*, i32 } %lpad.val, i32 %sel, 1, !dbg !1872
  resume { i8*, i32 } %lpad.val2, !dbg !1872
}

; Function Attrs: nounwind uwtable
define linkonce_odr void @_ZNSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEC2Ev(%"class.std::allocator"* %this) unnamed_addr #6 comdat align 2 {
entry:
  %this.addr = alloca %"class.std::allocator"*, align 8
  store %"class.std::allocator"* %this, %"class.std::allocator"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::allocator"** %this.addr, metadata !1874, metadata !1369), !dbg !1875
  %this1 = load %"class.std::allocator"*, %"class.std::allocator"** %this.addr
  %0 = bitcast %"class.std::allocator"* %this1 to %"class.__gnu_cxx::new_allocator"*, !dbg !1876
  call void @_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEC2Ev(%"class.__gnu_cxx::new_allocator"* %0) #1, !dbg !1877
  ret void, !dbg !1878
}

; Function Attrs: nounwind
declare void @llvm.memset.p0i8.i64(i8* nocapture, i8, i64, i32, i1) #1

; Function Attrs: nounwind uwtable
define linkonce_odr void @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EE13_M_initializeEv(%"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %this) #6 comdat align 2 {
entry:
  %this.addr = alloca %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"*, align 8
  store %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %this, %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"** %this.addr, metadata !1879, metadata !1369), !dbg !1880
  %this1 = load %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"*, %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"** %this.addr
  %_M_header = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %this1, i32 0, i32 1, !dbg !1881
  %_M_color = getelementptr inbounds %"struct.std::_Rb_tree_node_base", %"struct.std::_Rb_tree_node_base"* %_M_header, i32 0, i32 0, !dbg !1882
  store i32 0, i32* %_M_color, align 4, !dbg !1883
  %_M_header2 = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %this1, i32 0, i32 1, !dbg !1884
  %_M_parent = getelementptr inbounds %"struct.std::_Rb_tree_node_base", %"struct.std::_Rb_tree_node_base"* %_M_header2, i32 0, i32 1, !dbg !1885
  store %"struct.std::_Rb_tree_node_base"* null, %"struct.std::_Rb_tree_node_base"** %_M_parent, align 8, !dbg !1886
  %_M_header3 = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %this1, i32 0, i32 1, !dbg !1887
  %_M_header4 = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %this1, i32 0, i32 1, !dbg !1888
  %_M_left = getelementptr inbounds %"struct.std::_Rb_tree_node_base", %"struct.std::_Rb_tree_node_base"* %_M_header4, i32 0, i32 2, !dbg !1889
  store %"struct.std::_Rb_tree_node_base"* %_M_header3, %"struct.std::_Rb_tree_node_base"** %_M_left, align 8, !dbg !1890
  %_M_header5 = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %this1, i32 0, i32 1, !dbg !1891
  %_M_header6 = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %this1, i32 0, i32 1, !dbg !1892
  %_M_right = getelementptr inbounds %"struct.std::_Rb_tree_node_base", %"struct.std::_Rb_tree_node_base"* %_M_header6, i32 0, i32 3, !dbg !1893
  store %"struct.std::_Rb_tree_node_base"* %_M_header5, %"struct.std::_Rb_tree_node_base"** %_M_right, align 8, !dbg !1894
  ret void, !dbg !1895
}

; Function Attrs: nounwind uwtable
define linkonce_odr void @_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEC2Ev(%"class.__gnu_cxx::new_allocator"* %this) unnamed_addr #6 comdat align 2 {
entry:
  %this.addr = alloca %"class.__gnu_cxx::new_allocator"*, align 8
  store %"class.__gnu_cxx::new_allocator"* %this, %"class.__gnu_cxx::new_allocator"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.__gnu_cxx::new_allocator"** %this.addr, metadata !1896, metadata !1369), !dbg !1897
  %this1 = load %"class.__gnu_cxx::new_allocator"*, %"class.__gnu_cxx::new_allocator"** %this.addr
  ret void, !dbg !1898
}

; Function Attrs: uwtable
define linkonce_odr %"struct.std::_Rb_tree_node_base"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE4findERS7_(%"class.std::_Rb_tree"* %this, %"class.std::__cxx11::basic_string"* dereferenceable(32) %__k) #2 comdat align 2 {
entry:
  %retval = alloca %"struct.std::_Rb_tree_iterator", align 8
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  %__k.addr = alloca %"class.std::__cxx11::basic_string"*, align 8
  %__j = alloca %"struct.std::_Rb_tree_iterator", align 8
  %ref.tmp = alloca %"struct.std::_Rb_tree_iterator", align 8
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !1899, metadata !1369), !dbg !1900
  store %"class.std::__cxx11::basic_string"* %__k, %"class.std::__cxx11::basic_string"** %__k.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::__cxx11::basic_string"** %__k.addr, metadata !1901, metadata !1369), !dbg !1902
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_iterator"* %__j, metadata !1903, metadata !1369), !dbg !1904
  %call = call %"struct.std::_Rb_tree_node"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_M_beginEv(%"class.std::_Rb_tree"* %this1), !dbg !1905
  %call2 = call %"struct.std::_Rb_tree_node"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_M_endEv(%"class.std::_Rb_tree"* %this1), !dbg !1906
  %0 = load %"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"** %__k.addr, align 8, !dbg !1907
  %call3 = call %"struct.std::_Rb_tree_node_base"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE14_M_lower_boundEPSt13_Rb_tree_nodeIS8_ESH_RS7_(%"class.std::_Rb_tree"* %this1, %"struct.std::_Rb_tree_node"* %call, %"struct.std::_Rb_tree_node"* %call2, %"class.std::__cxx11::basic_string"* dereferenceable(32) %0), !dbg !1908
  %coerce.dive = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %__j, i32 0, i32 0, !dbg !1908
  store %"struct.std::_Rb_tree_node_base"* %call3, %"struct.std::_Rb_tree_node_base"** %coerce.dive, !dbg !1908
  %call4 = call %"struct.std::_Rb_tree_node_base"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE3endEv(%"class.std::_Rb_tree"* %this1), !dbg !1909
  %coerce.dive5 = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %ref.tmp, i32 0, i32 0, !dbg !1909
  store %"struct.std::_Rb_tree_node_base"* %call4, %"struct.std::_Rb_tree_node_base"** %coerce.dive5, !dbg !1909
  %call6 = call zeroext i1 @_ZNKSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEeqERKS9_(%"struct.std::_Rb_tree_iterator"* %__j, %"struct.std::_Rb_tree_iterator"* dereferenceable(8) %ref.tmp), !dbg !1910
  br i1 %call6, label %cond.true, label %lor.lhs.false, !dbg !1911

lor.lhs.false:                                    ; preds = %entry
  %_M_impl = getelementptr inbounds %"class.std::_Rb_tree", %"class.std::_Rb_tree"* %this1, i32 0, i32 0, !dbg !1912
  %_M_key_compare = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %_M_impl, i32 0, i32 0, !dbg !1914
  %1 = load %"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"** %__k.addr, align 8, !dbg !1915
  %_M_node = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %__j, i32 0, i32 0, !dbg !1916
  %2 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %_M_node, align 8, !dbg !1916
  %call7 = call dereferenceable(32) %"class.std::__cxx11::basic_string"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_S_keyEPKSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_node_base"* %2), !dbg !1917
  %call8 = call zeroext i1 @_ZNKSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEclERKS5_S8_(%"struct.std::less"* %_M_key_compare, %"class.std::__cxx11::basic_string"* dereferenceable(32) %1, %"class.std::__cxx11::basic_string"* dereferenceable(32) %call7), !dbg !1918
  br i1 %call8, label %cond.true, label %cond.false, !dbg !1919

cond.true:                                        ; preds = %lor.lhs.false, %entry
  %call9 = call %"struct.std::_Rb_tree_node_base"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE3endEv(%"class.std::_Rb_tree"* %this1), !dbg !1920
  %coerce.dive10 = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %retval, i32 0, i32 0, !dbg !1920
  store %"struct.std::_Rb_tree_node_base"* %call9, %"struct.std::_Rb_tree_node_base"** %coerce.dive10, !dbg !1920
  br label %cond.end, !dbg !1919

cond.false:                                       ; preds = %lor.lhs.false
  %3 = bitcast %"struct.std::_Rb_tree_iterator"* %retval to i8*, !dbg !1921
  %4 = bitcast %"struct.std::_Rb_tree_iterator"* %__j to i8*, !dbg !1921
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* %3, i8* %4, i64 8, i32 8, i1 false), !dbg !1921
  br label %cond.end, !dbg !1919

cond.end:                                         ; preds = %cond.false, %cond.true
  %coerce.dive11 = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %retval, i32 0, i32 0, !dbg !1922
  %5 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %coerce.dive11, !dbg !1922
  ret %"struct.std::_Rb_tree_node_base"* %5, !dbg !1922
}

; Function Attrs: uwtable
define linkonce_odr %"struct.std::_Rb_tree_node_base"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE14_M_lower_boundEPSt13_Rb_tree_nodeIS8_ESH_RS7_(%"class.std::_Rb_tree"* %this, %"struct.std::_Rb_tree_node"* %__x, %"struct.std::_Rb_tree_node"* %__y, %"class.std::__cxx11::basic_string"* dereferenceable(32) %__k) #2 comdat align 2 {
entry:
  %retval = alloca %"struct.std::_Rb_tree_iterator", align 8
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  %__x.addr = alloca %"struct.std::_Rb_tree_node"*, align 8
  %__y.addr = alloca %"struct.std::_Rb_tree_node"*, align 8
  %__k.addr = alloca %"class.std::__cxx11::basic_string"*, align 8
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !1924, metadata !1369), !dbg !1925
  store %"struct.std::_Rb_tree_node"* %__x, %"struct.std::_Rb_tree_node"** %__x.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node"** %__x.addr, metadata !1926, metadata !1369), !dbg !1927
  store %"struct.std::_Rb_tree_node"* %__y, %"struct.std::_Rb_tree_node"** %__y.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node"** %__y.addr, metadata !1928, metadata !1369), !dbg !1929
  store %"class.std::__cxx11::basic_string"* %__k, %"class.std::__cxx11::basic_string"** %__k.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::__cxx11::basic_string"** %__k.addr, metadata !1930, metadata !1369), !dbg !1931
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  br label %while.cond, !dbg !1932

while.cond:                                       ; preds = %if.end, %entry
  %0 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__x.addr, align 8, !dbg !1933
  %cmp = icmp ne %"struct.std::_Rb_tree_node"* %0, null, !dbg !1936
  br i1 %cmp, label %while.body, label %while.end, !dbg !1932

while.body:                                       ; preds = %while.cond
  %_M_impl = getelementptr inbounds %"class.std::_Rb_tree", %"class.std::_Rb_tree"* %this1, i32 0, i32 0, !dbg !1937
  %_M_key_compare = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %_M_impl, i32 0, i32 0, !dbg !1939
  %1 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__x.addr, align 8, !dbg !1940
  %call = call dereferenceable(32) %"class.std::__cxx11::basic_string"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_S_keyEPKSt13_Rb_tree_nodeIS8_E(%"struct.std::_Rb_tree_node"* %1), !dbg !1941
  %2 = load %"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"** %__k.addr, align 8, !dbg !1942
  %call2 = call zeroext i1 @_ZNKSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEclERKS5_S8_(%"struct.std::less"* %_M_key_compare, %"class.std::__cxx11::basic_string"* dereferenceable(32) %call, %"class.std::__cxx11::basic_string"* dereferenceable(32) %2), !dbg !1937
  br i1 %call2, label %if.else, label %if.then, !dbg !1943

if.then:                                          ; preds = %while.body
  %3 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__x.addr, align 8, !dbg !1944
  store %"struct.std::_Rb_tree_node"* %3, %"struct.std::_Rb_tree_node"** %__y.addr, align 8, !dbg !1945
  %4 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__x.addr, align 8, !dbg !1946
  %5 = bitcast %"struct.std::_Rb_tree_node"* %4 to %"struct.std::_Rb_tree_node_base"*, !dbg !1946
  %call3 = call %"struct.std::_Rb_tree_node"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE7_S_leftEPSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_node_base"* %5), !dbg !1947
  store %"struct.std::_Rb_tree_node"* %call3, %"struct.std::_Rb_tree_node"** %__x.addr, align 8, !dbg !1948
  br label %if.end, !dbg !1949

if.else:                                          ; preds = %while.body
  %6 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__x.addr, align 8, !dbg !1950
  %7 = bitcast %"struct.std::_Rb_tree_node"* %6 to %"struct.std::_Rb_tree_node_base"*, !dbg !1950
  %call4 = call %"struct.std::_Rb_tree_node"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_S_rightEPSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_node_base"* %7), !dbg !1951
  store %"struct.std::_Rb_tree_node"* %call4, %"struct.std::_Rb_tree_node"** %__x.addr, align 8, !dbg !1952
  br label %if.end

if.end:                                           ; preds = %if.else, %if.then
  br label %while.cond, !dbg !1932

while.end:                                        ; preds = %while.cond
  %8 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__y.addr, align 8, !dbg !1953
  %9 = bitcast %"struct.std::_Rb_tree_node"* %8 to %"struct.std::_Rb_tree_node_base"*, !dbg !1953
  call void @_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2EPSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_iterator"* %retval, %"struct.std::_Rb_tree_node_base"* %9), !dbg !1954
  %coerce.dive = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %retval, i32 0, i32 0, !dbg !1955
  %10 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %coerce.dive, !dbg !1955
  ret %"struct.std::_Rb_tree_node_base"* %10, !dbg !1955
}

; Function Attrs: nounwind uwtable
define linkonce_odr %"struct.std::_Rb_tree_node"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_M_endEv(%"class.std::_Rb_tree"* %this) #6 comdat align 2 {
entry:
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !1956, metadata !1369), !dbg !1957
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  %_M_impl = getelementptr inbounds %"class.std::_Rb_tree", %"class.std::_Rb_tree"* %this1, i32 0, i32 0, !dbg !1958
  %_M_header = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %_M_impl, i32 0, i32 1, !dbg !1959
  %0 = bitcast %"struct.std::_Rb_tree_node_base"* %_M_header to %"struct.std::_Rb_tree_node"*, !dbg !1960
  ret %"struct.std::_Rb_tree_node"* %0, !dbg !1961
}

; Function Attrs: uwtable
define linkonce_odr %"struct.std::_Rb_tree_node_base"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE3endEv(%"class.std::_Rb_tree"* %this) #2 comdat align 2 {
entry:
  %retval = alloca %"struct.std::_Rb_tree_iterator", align 8
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !1962, metadata !1369), !dbg !1963
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  %_M_impl = getelementptr inbounds %"class.std::_Rb_tree", %"class.std::_Rb_tree"* %this1, i32 0, i32 0, !dbg !1964
  %_M_header = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %_M_impl, i32 0, i32 1, !dbg !1965
  call void @_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2EPSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_iterator"* %retval, %"struct.std::_Rb_tree_node_base"* %_M_header), !dbg !1966
  %coerce.dive = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %retval, i32 0, i32 0, !dbg !1967
  %0 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %coerce.dive, !dbg !1967
  ret %"struct.std::_Rb_tree_node_base"* %0, !dbg !1967
}

; Function Attrs: uwtable
define linkonce_odr zeroext i1 @_ZNKSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEclERKS5_S8_(%"struct.std::less"* %this, %"class.std::__cxx11::basic_string"* dereferenceable(32) %__x, %"class.std::__cxx11::basic_string"* dereferenceable(32) %__y) #2 comdat align 2 {
entry:
  %this.addr = alloca %"struct.std::less"*, align 8
  %__x.addr = alloca %"class.std::__cxx11::basic_string"*, align 8
  %__y.addr = alloca %"class.std::__cxx11::basic_string"*, align 8
  store %"struct.std::less"* %this, %"struct.std::less"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::less"** %this.addr, metadata !1968, metadata !1369), !dbg !1970
  store %"class.std::__cxx11::basic_string"* %__x, %"class.std::__cxx11::basic_string"** %__x.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::__cxx11::basic_string"** %__x.addr, metadata !1971, metadata !1369), !dbg !1972
  store %"class.std::__cxx11::basic_string"* %__y, %"class.std::__cxx11::basic_string"** %__y.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::__cxx11::basic_string"** %__y.addr, metadata !1973, metadata !1369), !dbg !1974
  %this1 = load %"struct.std::less"*, %"struct.std::less"** %this.addr
  %0 = load %"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"** %__x.addr, align 8, !dbg !1975
  %1 = load %"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"** %__y.addr, align 8, !dbg !1976
  %call = call zeroext i1 @_ZStltIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EESA_(%"class.std::__cxx11::basic_string"* dereferenceable(32) %0, %"class.std::__cxx11::basic_string"* dereferenceable(32) %1), !dbg !1977
  ret i1 %call, !dbg !1978
}

; Function Attrs: uwtable
define linkonce_odr dereferenceable(32) %"class.std::__cxx11::basic_string"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_S_keyEPKSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_node_base"* %__x) #2 comdat align 2 {
entry:
  %__x.addr = alloca %"struct.std::_Rb_tree_node_base"*, align 8
  %tmp = alloca %"struct.std::_Select1st", align 1
  store %"struct.std::_Rb_tree_node_base"* %__x, %"struct.std::_Rb_tree_node_base"** %__x.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node_base"** %__x.addr, metadata !1979, metadata !1369), !dbg !1980
  %0 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %__x.addr, align 8, !dbg !1981
  %call = call dereferenceable(40) %"struct.std::pair"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_S_valueEPKSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_node_base"* %0), !dbg !1982
  %call1 = call dereferenceable(32) %"class.std::__cxx11::basic_string"* @_ZNKSt10_Select1stISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEclERKS8_(%"struct.std::_Select1st"* %tmp, %"struct.std::pair"* dereferenceable(40) %call), !dbg !1983
  ret %"class.std::__cxx11::basic_string"* %call1, !dbg !1984
}

; Function Attrs: nounwind
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* nocapture, i8* nocapture readonly, i64, i32, i1) #1

; Function Attrs: uwtable
define linkonce_odr dereferenceable(32) %"class.std::__cxx11::basic_string"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_S_keyEPKSt13_Rb_tree_nodeIS8_E(%"struct.std::_Rb_tree_node"* %__x) #2 comdat align 2 {
entry:
  %__x.addr = alloca %"struct.std::_Rb_tree_node"*, align 8
  %tmp = alloca %"struct.std::_Select1st", align 1
  store %"struct.std::_Rb_tree_node"* %__x, %"struct.std::_Rb_tree_node"** %__x.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node"** %__x.addr, metadata !1985, metadata !1369), !dbg !1986
  %0 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__x.addr, align 8, !dbg !1987
  %call = call dereferenceable(40) %"struct.std::pair"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_S_valueEPKSt13_Rb_tree_nodeIS8_E(%"struct.std::_Rb_tree_node"* %0), !dbg !1988
  %call1 = call dereferenceable(32) %"class.std::__cxx11::basic_string"* @_ZNKSt10_Select1stISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEclERKS8_(%"struct.std::_Select1st"* %tmp, %"struct.std::pair"* dereferenceable(40) %call), !dbg !1989
  ret %"class.std::__cxx11::basic_string"* %call1, !dbg !1990
}

; Function Attrs: nounwind uwtable
define linkonce_odr void @_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2EPSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_iterator"* %this, %"struct.std::_Rb_tree_node_base"* %__x) unnamed_addr #6 comdat align 2 {
entry:
  %this.addr = alloca %"struct.std::_Rb_tree_iterator"*, align 8
  %__x.addr = alloca %"struct.std::_Rb_tree_node_base"*, align 8
  store %"struct.std::_Rb_tree_iterator"* %this, %"struct.std::_Rb_tree_iterator"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_iterator"** %this.addr, metadata !1991, metadata !1369), !dbg !1993
  store %"struct.std::_Rb_tree_node_base"* %__x, %"struct.std::_Rb_tree_node_base"** %__x.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node_base"** %__x.addr, metadata !1994, metadata !1369), !dbg !1995
  %this1 = load %"struct.std::_Rb_tree_iterator"*, %"struct.std::_Rb_tree_iterator"** %this.addr
  %_M_node = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %this1, i32 0, i32 0, !dbg !1996
  %0 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %__x.addr, align 8, !dbg !1997
  store %"struct.std::_Rb_tree_node_base"* %0, %"struct.std::_Rb_tree_node_base"** %_M_node, align 8, !dbg !1996
  ret void, !dbg !1998
}

; Function Attrs: nounwind uwtable
define linkonce_odr dereferenceable(32) %"class.std::__cxx11::basic_string"* @_ZNKSt10_Select1stISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEclERKS8_(%"struct.std::_Select1st"* %this, %"struct.std::pair"* dereferenceable(40) %__x) #6 comdat align 2 {
entry:
  %this.addr = alloca %"struct.std::_Select1st"*, align 8
  %__x.addr = alloca %"struct.std::pair"*, align 8
  store %"struct.std::_Select1st"* %this, %"struct.std::_Select1st"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Select1st"** %this.addr, metadata !1999, metadata !1369), !dbg !2001
  store %"struct.std::pair"* %__x, %"struct.std::pair"** %__x.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::pair"** %__x.addr, metadata !2002, metadata !1369), !dbg !2003
  %this1 = load %"struct.std::_Select1st"*, %"struct.std::_Select1st"** %this.addr
  %0 = load %"struct.std::pair"*, %"struct.std::pair"** %__x.addr, align 8, !dbg !2004
  %first = getelementptr inbounds %"struct.std::pair", %"struct.std::pair"* %0, i32 0, i32 0, !dbg !2005
  ret %"class.std::__cxx11::basic_string"* %first, !dbg !2006
}

; Function Attrs: uwtable
define linkonce_odr dereferenceable(40) %"struct.std::pair"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_S_valueEPKSt13_Rb_tree_nodeIS8_E(%"struct.std::_Rb_tree_node"* %__x) #2 comdat align 2 {
entry:
  %__x.addr = alloca %"struct.std::_Rb_tree_node"*, align 8
  store %"struct.std::_Rb_tree_node"* %__x, %"struct.std::_Rb_tree_node"** %__x.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node"** %__x.addr, metadata !2007, metadata !1369), !dbg !2008
  %0 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__x.addr, align 8, !dbg !2009
  %call = call %"struct.std::pair"* @_ZNKSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE9_M_valptrEv(%"struct.std::_Rb_tree_node"* %0), !dbg !2009
  ret %"struct.std::pair"* %call, !dbg !2010
}

; Function Attrs: uwtable
define linkonce_odr %"struct.std::pair"* @_ZNKSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE9_M_valptrEv(%"struct.std::_Rb_tree_node"* %this) #2 comdat align 2 {
entry:
  %this.addr = alloca %"struct.std::_Rb_tree_node"*, align 8
  store %"struct.std::_Rb_tree_node"* %this, %"struct.std::_Rb_tree_node"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node"** %this.addr, metadata !2011, metadata !1369), !dbg !2012
  %this1 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %this.addr
  %_M_value_field = getelementptr inbounds %"struct.std::_Rb_tree_node", %"struct.std::_Rb_tree_node"* %this1, i32 0, i32 1, !dbg !2013
  %call = call %"struct.std::pair"* @_ZSt11__addressofIKSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEPT_RSA_(%"struct.std::pair"* dereferenceable(40) %_M_value_field), !dbg !2014
  ret %"struct.std::pair"* %call, !dbg !2015
}

; Function Attrs: inlinehint nounwind uwtable
define linkonce_odr %"struct.std::pair"* @_ZSt11__addressofIKSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEPT_RSA_(%"struct.std::pair"* dereferenceable(40) %__r) #8 comdat {
entry:
  %__r.addr = alloca %"struct.std::pair"*, align 8
  store %"struct.std::pair"* %__r, %"struct.std::pair"** %__r.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::pair"** %__r.addr, metadata !2016, metadata !1369), !dbg !2017
  %0 = load %"struct.std::pair"*, %"struct.std::pair"** %__r.addr, align 8, !dbg !2018
  %1 = bitcast %"struct.std::pair"* %0 to i8*, !dbg !2019
  %2 = bitcast i8* %1 to %"struct.std::pair"*, !dbg !2020
  ret %"struct.std::pair"* %2, !dbg !2021
}

; Function Attrs: inlinehint uwtable
define linkonce_odr zeroext i1 @_ZStltIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EESA_(%"class.std::__cxx11::basic_string"* dereferenceable(32) %__lhs, %"class.std::__cxx11::basic_string"* dereferenceable(32) %__rhs) #3 comdat {
entry:
  %__lhs.addr = alloca %"class.std::__cxx11::basic_string"*, align 8
  %__rhs.addr = alloca %"class.std::__cxx11::basic_string"*, align 8
  store %"class.std::__cxx11::basic_string"* %__lhs, %"class.std::__cxx11::basic_string"** %__lhs.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::__cxx11::basic_string"** %__lhs.addr, metadata !2022, metadata !1369), !dbg !2023
  store %"class.std::__cxx11::basic_string"* %__rhs, %"class.std::__cxx11::basic_string"** %__rhs.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::__cxx11::basic_string"** %__rhs.addr, metadata !2024, metadata !1369), !dbg !2025
  %0 = load %"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"** %__lhs.addr, align 8, !dbg !2026
  %1 = load %"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"** %__rhs.addr, align 8, !dbg !2027
  %call = call i32 @_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7compareERKS4_(%"class.std::__cxx11::basic_string"* %0, %"class.std::__cxx11::basic_string"* dereferenceable(32) %1), !dbg !2026
  %cmp = icmp slt i32 %call, 0, !dbg !2028
  ret i1 %cmp, !dbg !2029
}

declare i32 @_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7compareERKS4_(%"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"* dereferenceable(32)) #0

; Function Attrs: uwtable
define linkonce_odr dereferenceable(40) %"struct.std::pair"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_S_valueEPKSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_node_base"* %__x) #2 comdat align 2 {
entry:
  %__x.addr = alloca %"struct.std::_Rb_tree_node_base"*, align 8
  store %"struct.std::_Rb_tree_node_base"* %__x, %"struct.std::_Rb_tree_node_base"** %__x.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node_base"** %__x.addr, metadata !2030, metadata !1369), !dbg !2031
  %0 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %__x.addr, align 8, !dbg !2032
  %1 = bitcast %"struct.std::_Rb_tree_node_base"* %0 to %"struct.std::_Rb_tree_node"*, !dbg !2033
  %call = call %"struct.std::pair"* @_ZNKSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE9_M_valptrEv(%"struct.std::_Rb_tree_node"* %1), !dbg !2033
  ret %"struct.std::pair"* %call, !dbg !2034
}

; Function Attrs: uwtable
define linkonce_odr %"struct.std::_Rb_tree_node_base"* @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE11lower_boundERS9_(%"class.std::map"* %this, %"class.std::__cxx11::basic_string"* dereferenceable(32) %__x) #2 comdat align 2 {
entry:
  %retval = alloca %"struct.std::_Rb_tree_iterator", align 8
  %this.addr = alloca %"class.std::map"*, align 8
  %__x.addr = alloca %"class.std::__cxx11::basic_string"*, align 8
  store %"class.std::map"* %this, %"class.std::map"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::map"** %this.addr, metadata !2035, metadata !1369), !dbg !2036
  store %"class.std::__cxx11::basic_string"* %__x, %"class.std::__cxx11::basic_string"** %__x.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::__cxx11::basic_string"** %__x.addr, metadata !2037, metadata !1369), !dbg !2038
  %this1 = load %"class.std::map"*, %"class.std::map"** %this.addr
  %_M_t = getelementptr inbounds %"class.std::map", %"class.std::map"* %this1, i32 0, i32 0, !dbg !2039
  %0 = load %"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"** %__x.addr, align 8, !dbg !2040
  %call = call %"struct.std::_Rb_tree_node_base"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11lower_boundERS7_(%"class.std::_Rb_tree"* %_M_t, %"class.std::__cxx11::basic_string"* dereferenceable(32) %0), !dbg !2039
  %coerce.dive = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %retval, i32 0, i32 0, !dbg !2039
  store %"struct.std::_Rb_tree_node_base"* %call, %"struct.std::_Rb_tree_node_base"** %coerce.dive, !dbg !2039
  %coerce.dive2 = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %retval, i32 0, i32 0, !dbg !2041
  %1 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %coerce.dive2, !dbg !2041
  ret %"struct.std::_Rb_tree_node_base"* %1, !dbg !2041
}

; Function Attrs: uwtable
define linkonce_odr void @_ZNKSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE8key_compEv(%"class.std::map"* %this) #2 comdat align 2 {
entry:
  %retval = alloca %"struct.std::less", align 1
  %this.addr = alloca %"class.std::map"*, align 8
  %undef.agg.tmp = alloca %"struct.std::less", align 1
  store %"class.std::map"* %this, %"class.std::map"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::map"** %this.addr, metadata !2042, metadata !1369), !dbg !2044
  %this1 = load %"class.std::map"*, %"class.std::map"** %this.addr
  %_M_t = getelementptr inbounds %"class.std::map", %"class.std::map"* %this1, i32 0, i32 0, !dbg !2045
  call void @_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8key_compEv(%"class.std::_Rb_tree"* %_M_t), !dbg !2045
  ret void, !dbg !2046
}

; Function Attrs: uwtable
define linkonce_odr dereferenceable(40) %"struct.std::pair"* @_ZNKSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEdeEv(%"struct.std::_Rb_tree_iterator"* %this) #2 comdat align 2 {
entry:
  %this.addr = alloca %"struct.std::_Rb_tree_iterator"*, align 8
  store %"struct.std::_Rb_tree_iterator"* %this, %"struct.std::_Rb_tree_iterator"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_iterator"** %this.addr, metadata !2047, metadata !1369), !dbg !2048
  %this1 = load %"struct.std::_Rb_tree_iterator"*, %"struct.std::_Rb_tree_iterator"** %this.addr
  %_M_node = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %this1, i32 0, i32 0, !dbg !2049
  %0 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %_M_node, align 8, !dbg !2049
  %1 = bitcast %"struct.std::_Rb_tree_node_base"* %0 to %"struct.std::_Rb_tree_node"*, !dbg !2050
  %call = call %"struct.std::pair"* @_ZNSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE9_M_valptrEv(%"struct.std::_Rb_tree_node"* %1), !dbg !2050
  ret %"struct.std::pair"* %call, !dbg !2051
}

; Function Attrs: uwtable
define linkonce_odr %"struct.std::_Rb_tree_node_base"* @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE6insertESt17_Rb_tree_iteratorISA_ERKSA_(%"class.std::map"* %this, %"struct.std::_Rb_tree_node_base"* %__position.coerce, %"struct.std::pair"* dereferenceable(40) %__x) #2 comdat align 2 {
entry:
  %retval = alloca %"struct.std::_Rb_tree_iterator", align 8
  %__position = alloca %"struct.std::_Rb_tree_iterator", align 8
  %this.addr = alloca %"class.std::map"*, align 8
  %__x.addr = alloca %"struct.std::pair"*, align 8
  %agg.tmp = alloca %"struct.std::_Rb_tree_const_iterator", align 8
  %coerce.dive = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %__position, i32 0, i32 0
  store %"struct.std::_Rb_tree_node_base"* %__position.coerce, %"struct.std::_Rb_tree_node_base"** %coerce.dive
  store %"class.std::map"* %this, %"class.std::map"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::map"** %this.addr, metadata !2052, metadata !1369), !dbg !2053
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_iterator"* %__position, metadata !2054, metadata !1369), !dbg !2055
  store %"struct.std::pair"* %__x, %"struct.std::pair"** %__x.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::pair"** %__x.addr, metadata !2056, metadata !1369), !dbg !2057
  %this1 = load %"class.std::map"*, %"class.std::map"** %this.addr
  %_M_t = getelementptr inbounds %"class.std::map", %"class.std::map"* %this1, i32 0, i32 0, !dbg !2058
  call void @_ZNSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2ERKSt17_Rb_tree_iteratorIS8_E(%"struct.std::_Rb_tree_const_iterator"* %agg.tmp, %"struct.std::_Rb_tree_iterator"* dereferenceable(8) %__position), !dbg !2059
  %0 = load %"struct.std::pair"*, %"struct.std::pair"** %__x.addr, align 8, !dbg !2060
  %coerce.dive2 = getelementptr %"struct.std::_Rb_tree_const_iterator", %"struct.std::_Rb_tree_const_iterator"* %agg.tmp, i32 0, i32 0, !dbg !2058
  %1 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %coerce.dive2, !dbg !2058
  %call = call %"struct.std::_Rb_tree_node_base"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE17_M_insert_unique_ESt23_Rb_tree_const_iteratorIS8_ERKS8_(%"class.std::_Rb_tree"* %_M_t, %"struct.std::_Rb_tree_node_base"* %1, %"struct.std::pair"* dereferenceable(40) %0), !dbg !2058
  %coerce.dive3 = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %retval, i32 0, i32 0, !dbg !2058
  store %"struct.std::_Rb_tree_node_base"* %call, %"struct.std::_Rb_tree_node_base"** %coerce.dive3, !dbg !2058
  %coerce.dive4 = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %retval, i32 0, i32 0, !dbg !2061
  %2 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %coerce.dive4, !dbg !2061
  ret %"struct.std::_Rb_tree_node_base"* %2, !dbg !2061
}

; Function Attrs: uwtable
define linkonce_odr void @_ZNSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEC2ERS6_RKi(%"struct.std::pair"* %this, %"class.std::__cxx11::basic_string"* dereferenceable(32) %__a, i32* dereferenceable(4) %__b) unnamed_addr #2 comdat align 2 {
entry:
  %this.addr = alloca %"struct.std::pair"*, align 8
  %__a.addr = alloca %"class.std::__cxx11::basic_string"*, align 8
  %__b.addr = alloca i32*, align 8
  store %"struct.std::pair"* %this, %"struct.std::pair"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::pair"** %this.addr, metadata !2062, metadata !1369), !dbg !2063
  store %"class.std::__cxx11::basic_string"* %__a, %"class.std::__cxx11::basic_string"** %__a.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::__cxx11::basic_string"** %__a.addr, metadata !2064, metadata !1369), !dbg !2065
  store i32* %__b, i32** %__b.addr, align 8
  call void @llvm.dbg.declare(metadata i32** %__b.addr, metadata !2066, metadata !1369), !dbg !2067
  %this1 = load %"struct.std::pair"*, %"struct.std::pair"** %this.addr
  %first = getelementptr inbounds %"struct.std::pair", %"struct.std::pair"* %this1, i32 0, i32 0, !dbg !2068
  %0 = load %"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"** %__a.addr, align 8, !dbg !2069
  call void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_(%"class.std::__cxx11::basic_string"* %first, %"class.std::__cxx11::basic_string"* dereferenceable(32) %0), !dbg !2068
  %second = getelementptr inbounds %"struct.std::pair", %"struct.std::pair"* %this1, i32 0, i32 1, !dbg !2070
  %1 = load i32*, i32** %__b.addr, align 8, !dbg !2071
  %2 = load i32, i32* %1, align 4, !dbg !2071
  store i32 %2, i32* %second, align 4, !dbg !2070
  ret void, !dbg !2072
}

; Function Attrs: uwtable
define linkonce_odr %"struct.std::_Rb_tree_node_base"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11lower_boundERS7_(%"class.std::_Rb_tree"* %this, %"class.std::__cxx11::basic_string"* dereferenceable(32) %__k) #2 comdat align 2 {
entry:
  %retval = alloca %"struct.std::_Rb_tree_iterator", align 8
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  %__k.addr = alloca %"class.std::__cxx11::basic_string"*, align 8
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !2073, metadata !1369), !dbg !2074
  store %"class.std::__cxx11::basic_string"* %__k, %"class.std::__cxx11::basic_string"** %__k.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::__cxx11::basic_string"** %__k.addr, metadata !2075, metadata !1369), !dbg !2076
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  %call = call %"struct.std::_Rb_tree_node"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_M_beginEv(%"class.std::_Rb_tree"* %this1), !dbg !2077
  %call2 = call %"struct.std::_Rb_tree_node"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_M_endEv(%"class.std::_Rb_tree"* %this1), !dbg !2078
  %0 = load %"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"** %__k.addr, align 8, !dbg !2079
  %call3 = call %"struct.std::_Rb_tree_node_base"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE14_M_lower_boundEPSt13_Rb_tree_nodeIS8_ESH_RS7_(%"class.std::_Rb_tree"* %this1, %"struct.std::_Rb_tree_node"* %call, %"struct.std::_Rb_tree_node"* %call2, %"class.std::__cxx11::basic_string"* dereferenceable(32) %0), !dbg !2080
  %coerce.dive = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %retval, i32 0, i32 0, !dbg !2080
  store %"struct.std::_Rb_tree_node_base"* %call3, %"struct.std::_Rb_tree_node_base"** %coerce.dive, !dbg !2080
  %coerce.dive4 = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %retval, i32 0, i32 0, !dbg !2081
  %1 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %coerce.dive4, !dbg !2081
  ret %"struct.std::_Rb_tree_node_base"* %1, !dbg !2081
}

; Function Attrs: nounwind uwtable
define linkonce_odr void @_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8key_compEv(%"class.std::_Rb_tree"* %this) #6 comdat align 2 {
entry:
  %retval = alloca %"struct.std::less", align 1
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !2082, metadata !1369), !dbg !2083
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  %_M_impl = getelementptr inbounds %"class.std::_Rb_tree", %"class.std::_Rb_tree"* %this1, i32 0, i32 0, !dbg !2084
  %_M_key_compare = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %_M_impl, i32 0, i32 0, !dbg !2085
  ret void, !dbg !2086
}

; Function Attrs: uwtable
define linkonce_odr %"struct.std::_Rb_tree_node_base"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE17_M_insert_unique_ESt23_Rb_tree_const_iteratorIS8_ERKS8_(%"class.std::_Rb_tree"* %this, %"struct.std::_Rb_tree_node_base"* %__pos.coerce, %"struct.std::pair"* dereferenceable(40) %__x) #2 comdat align 2 {
entry:
  %retval = alloca %"struct.std::_Rb_tree_iterator", align 8
  %__pos = alloca %"struct.std::_Rb_tree_const_iterator", align 8
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  %__x.addr = alloca %"struct.std::pair"*, align 8
  %__an = alloca %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node", align 8
  %agg.tmp = alloca %"struct.std::_Rb_tree_const_iterator", align 8
  %coerce.dive = getelementptr %"struct.std::_Rb_tree_const_iterator", %"struct.std::_Rb_tree_const_iterator"* %__pos, i32 0, i32 0
  store %"struct.std::_Rb_tree_node_base"* %__pos.coerce, %"struct.std::_Rb_tree_node_base"** %coerce.dive
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !2087, metadata !1369), !dbg !2088
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_const_iterator"* %__pos, metadata !2089, metadata !1369), !dbg !2090
  store %"struct.std::pair"* %__x, %"struct.std::pair"** %__x.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::pair"** %__x.addr, metadata !2091, metadata !1369), !dbg !2092
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"* %__an, metadata !2093, metadata !1369), !dbg !2094
  call void @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_Alloc_nodeC2ERSE_(%"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"* %__an, %"class.std::_Rb_tree"* dereferenceable(48) %this1), !dbg !2094
  %0 = bitcast %"struct.std::_Rb_tree_const_iterator"* %agg.tmp to i8*, !dbg !2095
  %1 = bitcast %"struct.std::_Rb_tree_const_iterator"* %__pos to i8*, !dbg !2095
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* %0, i8* %1, i64 8, i32 8, i1 false), !dbg !2095
  %2 = load %"struct.std::pair"*, %"struct.std::pair"** %__x.addr, align 8, !dbg !2096
  %coerce.dive2 = getelementptr %"struct.std::_Rb_tree_const_iterator", %"struct.std::_Rb_tree_const_iterator"* %agg.tmp, i32 0, i32 0, !dbg !2097
  %3 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %coerce.dive2, !dbg !2097
  %call = call %"struct.std::_Rb_tree_node_base"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE17_M_insert_unique_INSE_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS8_ESt23_Rb_tree_const_iteratorIS8_ERKS8_RT_(%"class.std::_Rb_tree"* %this1, %"struct.std::_Rb_tree_node_base"* %3, %"struct.std::pair"* dereferenceable(40) %2, %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"* dereferenceable(8) %__an), !dbg !2097
  %coerce.dive3 = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %retval, i32 0, i32 0, !dbg !2097
  store %"struct.std::_Rb_tree_node_base"* %call, %"struct.std::_Rb_tree_node_base"** %coerce.dive3, !dbg !2097
  %coerce.dive4 = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %retval, i32 0, i32 0, !dbg !2098
  %4 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %coerce.dive4, !dbg !2098
  ret %"struct.std::_Rb_tree_node_base"* %4, !dbg !2098
}

; Function Attrs: nounwind uwtable
define linkonce_odr void @_ZNSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2ERKSt17_Rb_tree_iteratorIS8_E(%"struct.std::_Rb_tree_const_iterator"* %this, %"struct.std::_Rb_tree_iterator"* dereferenceable(8) %__it) unnamed_addr #6 comdat align 2 {
entry:
  %this.addr = alloca %"struct.std::_Rb_tree_const_iterator"*, align 8
  %__it.addr = alloca %"struct.std::_Rb_tree_iterator"*, align 8
  store %"struct.std::_Rb_tree_const_iterator"* %this, %"struct.std::_Rb_tree_const_iterator"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_const_iterator"** %this.addr, metadata !2099, metadata !1369), !dbg !2101
  store %"struct.std::_Rb_tree_iterator"* %__it, %"struct.std::_Rb_tree_iterator"** %__it.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_iterator"** %__it.addr, metadata !2102, metadata !1369), !dbg !2103
  %this1 = load %"struct.std::_Rb_tree_const_iterator"*, %"struct.std::_Rb_tree_const_iterator"** %this.addr
  %_M_node = getelementptr inbounds %"struct.std::_Rb_tree_const_iterator", %"struct.std::_Rb_tree_const_iterator"* %this1, i32 0, i32 0, !dbg !2104
  %0 = load %"struct.std::_Rb_tree_iterator"*, %"struct.std::_Rb_tree_iterator"** %__it.addr, align 8, !dbg !2105
  %_M_node2 = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %0, i32 0, i32 0, !dbg !2106
  %1 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %_M_node2, align 8, !dbg !2106
  store %"struct.std::_Rb_tree_node_base"* %1, %"struct.std::_Rb_tree_node_base"** %_M_node, align 8, !dbg !2104
  ret void, !dbg !2107
}

; Function Attrs: nounwind uwtable
define linkonce_odr void @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_Alloc_nodeC2ERSE_(%"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"* %this, %"class.std::_Rb_tree"* dereferenceable(48) %__t) unnamed_addr #6 comdat align 2 {
entry:
  %this.addr = alloca %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"*, align 8
  %__t.addr = alloca %"class.std::_Rb_tree"*, align 8
  store %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"* %this, %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"** %this.addr, metadata !2108, metadata !1369), !dbg !2110
  store %"class.std::_Rb_tree"* %__t, %"class.std::_Rb_tree"** %__t.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %__t.addr, metadata !2111, metadata !1369), !dbg !2112
  %this1 = load %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"*, %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"** %this.addr
  %0 = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"* %this1, i32 0, i32 0, !dbg !2113
  %1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %__t.addr, align 8, !dbg !2114
  store %"class.std::_Rb_tree"* %1, %"class.std::_Rb_tree"** %0, align 8, !dbg !2113
  ret void, !dbg !2115
}

; Function Attrs: uwtable
define linkonce_odr %"struct.std::_Rb_tree_node_base"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE17_M_insert_unique_INSE_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS8_ESt23_Rb_tree_const_iteratorIS8_ERKS8_RT_(%"class.std::_Rb_tree"* %this, %"struct.std::_Rb_tree_node_base"* %__position.coerce, %"struct.std::pair"* dereferenceable(40) %__v, %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"* dereferenceable(8) %__node_gen) #2 comdat align 2 {
entry:
  %retval = alloca %"struct.std::_Rb_tree_iterator", align 8
  %__position = alloca %"struct.std::_Rb_tree_const_iterator", align 8
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  %__v.addr = alloca %"struct.std::pair"*, align 8
  %__node_gen.addr = alloca %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"*, align 8
  %__res = alloca %"struct.std::pair.6", align 8
  %agg.tmp = alloca %"struct.std::_Rb_tree_const_iterator", align 8
  %tmp = alloca %"struct.std::_Select1st", align 1
  %coerce.dive = getelementptr %"struct.std::_Rb_tree_const_iterator", %"struct.std::_Rb_tree_const_iterator"* %__position, i32 0, i32 0
  store %"struct.std::_Rb_tree_node_base"* %__position.coerce, %"struct.std::_Rb_tree_node_base"** %coerce.dive
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !2116, metadata !1369), !dbg !2117
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_const_iterator"* %__position, metadata !2118, metadata !1369), !dbg !2119
  store %"struct.std::pair"* %__v, %"struct.std::pair"** %__v.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::pair"** %__v.addr, metadata !2120, metadata !1369), !dbg !2121
  store %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"* %__node_gen, %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"** %__node_gen.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"** %__node_gen.addr, metadata !2122, metadata !1369), !dbg !2123
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  call void @llvm.dbg.declare(metadata %"struct.std::pair.6"* %__res, metadata !2124, metadata !1369), !dbg !2125
  %0 = bitcast %"struct.std::_Rb_tree_const_iterator"* %agg.tmp to i8*, !dbg !2126
  %1 = bitcast %"struct.std::_Rb_tree_const_iterator"* %__position to i8*, !dbg !2126
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* %0, i8* %1, i64 8, i32 8, i1 false), !dbg !2126
  %2 = load %"struct.std::pair"*, %"struct.std::pair"** %__v.addr, align 8, !dbg !2127
  %call = call dereferenceable(32) %"class.std::__cxx11::basic_string"* @_ZNKSt10_Select1stISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEclERKS8_(%"struct.std::_Select1st"* %tmp, %"struct.std::pair"* dereferenceable(40) %2), !dbg !2128
  %coerce.dive2 = getelementptr %"struct.std::_Rb_tree_const_iterator", %"struct.std::_Rb_tree_const_iterator"* %agg.tmp, i32 0, i32 0, !dbg !2129
  %3 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %coerce.dive2, !dbg !2129
  %call3 = call { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* } @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS8_ERS7_(%"class.std::_Rb_tree"* %this1, %"struct.std::_Rb_tree_node_base"* %3, %"class.std::__cxx11::basic_string"* dereferenceable(32) %call), !dbg !2129
  %4 = bitcast %"struct.std::pair.6"* %__res to { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }*, !dbg !2129
  %5 = getelementptr { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }, { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }* %4, i32 0, i32 0, !dbg !2129
  %6 = extractvalue { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* } %call3, 0, !dbg !2129
  store %"struct.std::_Rb_tree_node_base"* %6, %"struct.std::_Rb_tree_node_base"** %5, align 1, !dbg !2129
  %7 = getelementptr { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }, { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }* %4, i32 0, i32 1, !dbg !2129
  %8 = extractvalue { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* } %call3, 1, !dbg !2129
  store %"struct.std::_Rb_tree_node_base"* %8, %"struct.std::_Rb_tree_node_base"** %7, align 1, !dbg !2129
  %second = getelementptr inbounds %"struct.std::pair.6", %"struct.std::pair.6"* %__res, i32 0, i32 1, !dbg !2130
  %9 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %second, align 8, !dbg !2130
  %tobool = icmp ne %"struct.std::_Rb_tree_node_base"* %9, null, !dbg !2132
  br i1 %tobool, label %if.then, label %if.end, !dbg !2133

if.then:                                          ; preds = %entry
  %first = getelementptr inbounds %"struct.std::pair.6", %"struct.std::pair.6"* %__res, i32 0, i32 0, !dbg !2134
  %10 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %first, align 8, !dbg !2134
  %second4 = getelementptr inbounds %"struct.std::pair.6", %"struct.std::pair.6"* %__res, i32 0, i32 1, !dbg !2135
  %11 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %second4, align 8, !dbg !2135
  %12 = load %"struct.std::pair"*, %"struct.std::pair"** %__v.addr, align 8, !dbg !2136
  %13 = load %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"*, %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"** %__node_gen.addr, align 8, !dbg !2137
  %call5 = call %"struct.std::_Rb_tree_node_base"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE10_M_insert_INSE_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS8_EPSt18_Rb_tree_node_baseSK_RKS8_RT_(%"class.std::_Rb_tree"* %this1, %"struct.std::_Rb_tree_node_base"* %10, %"struct.std::_Rb_tree_node_base"* %11, %"struct.std::pair"* dereferenceable(40) %12, %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"* dereferenceable(8) %13), !dbg !2138
  %coerce.dive6 = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %retval, i32 0, i32 0, !dbg !2138
  store %"struct.std::_Rb_tree_node_base"* %call5, %"struct.std::_Rb_tree_node_base"** %coerce.dive6, !dbg !2138
  br label %return, !dbg !2139

if.end:                                           ; preds = %entry
  %first7 = getelementptr inbounds %"struct.std::pair.6", %"struct.std::pair.6"* %__res, i32 0, i32 0, !dbg !2140
  %14 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %first7, align 8, !dbg !2140
  %15 = bitcast %"struct.std::_Rb_tree_node_base"* %14 to %"struct.std::_Rb_tree_node"*, !dbg !2141
  %16 = bitcast %"struct.std::_Rb_tree_node"* %15 to %"struct.std::_Rb_tree_node_base"*, !dbg !2141
  call void @_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2EPSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_iterator"* %retval, %"struct.std::_Rb_tree_node_base"* %16), !dbg !2142
  br label %return, !dbg !2143

return:                                           ; preds = %if.end, %if.then
  %coerce.dive8 = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %retval, i32 0, i32 0, !dbg !2144
  %17 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %coerce.dive8, !dbg !2144
  ret %"struct.std::_Rb_tree_node_base"* %17, !dbg !2144
}

; Function Attrs: uwtable
define linkonce_odr { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* } @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS8_ERS7_(%"class.std::_Rb_tree"* %this, %"struct.std::_Rb_tree_node_base"* %__position.coerce, %"class.std::__cxx11::basic_string"* dereferenceable(32) %__k) #2 comdat align 2 {
entry:
  %retval = alloca %"struct.std::pair.6", align 8
  %__position = alloca %"struct.std::_Rb_tree_const_iterator", align 8
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  %__k.addr = alloca %"class.std::__cxx11::basic_string"*, align 8
  %__pos = alloca %"struct.std::_Rb_tree_iterator", align 8
  %ref.tmp = alloca %"struct.std::_Rb_tree_node_base"*, align 8
  %__before = alloca %"struct.std::_Rb_tree_iterator", align 8
  %ref.tmp37 = alloca %"struct.std::_Rb_tree_node_base"*, align 8
  %__after = alloca %"struct.std::_Rb_tree_iterator", align 8
  %ref.tmp55 = alloca %"struct.std::_Rb_tree_node_base"*, align 8
  %ref.tmp69 = alloca %"struct.std::_Rb_tree_node_base"*, align 8
  %ref.tmp78 = alloca %"struct.std::_Rb_tree_node_base"*, align 8
  %coerce.dive = getelementptr %"struct.std::_Rb_tree_const_iterator", %"struct.std::_Rb_tree_const_iterator"* %__position, i32 0, i32 0
  store %"struct.std::_Rb_tree_node_base"* %__position.coerce, %"struct.std::_Rb_tree_node_base"** %coerce.dive
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !2145, metadata !1369), !dbg !2146
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_const_iterator"* %__position, metadata !2147, metadata !1369), !dbg !2148
  store %"class.std::__cxx11::basic_string"* %__k, %"class.std::__cxx11::basic_string"** %__k.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::__cxx11::basic_string"** %__k.addr, metadata !2149, metadata !1369), !dbg !2150
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_iterator"* %__pos, metadata !2151, metadata !1369), !dbg !2152
  %call = call %"struct.std::_Rb_tree_node_base"* @_ZNKSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE13_M_const_castEv(%"struct.std::_Rb_tree_const_iterator"* %__position), !dbg !2153
  %coerce.dive2 = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %__pos, i32 0, i32 0, !dbg !2153
  store %"struct.std::_Rb_tree_node_base"* %call, %"struct.std::_Rb_tree_node_base"** %coerce.dive2, !dbg !2153
  %_M_node = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %__pos, i32 0, i32 0, !dbg !2154
  %0 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %_M_node, align 8, !dbg !2154
  %call3 = call %"struct.std::_Rb_tree_node"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_M_endEv(%"class.std::_Rb_tree"* %this1), !dbg !2156
  %1 = bitcast %"struct.std::_Rb_tree_node"* %call3 to %"struct.std::_Rb_tree_node_base"*, !dbg !2156
  %cmp = icmp eq %"struct.std::_Rb_tree_node_base"* %0, %1, !dbg !2157
  br i1 %cmp, label %if.then, label %if.else12, !dbg !2158

if.then:                                          ; preds = %entry
  %call4 = call i64 @_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE4sizeEv(%"class.std::_Rb_tree"* %this1), !dbg !2159
  %cmp5 = icmp ugt i64 %call4, 0, !dbg !2162
  br i1 %cmp5, label %land.lhs.true, label %if.else, !dbg !2163

land.lhs.true:                                    ; preds = %if.then
  %_M_impl = getelementptr inbounds %"class.std::_Rb_tree", %"class.std::_Rb_tree"* %this1, i32 0, i32 0, !dbg !2164
  %_M_key_compare = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %_M_impl, i32 0, i32 0, !dbg !2166
  %call6 = call dereferenceable(8) %"struct.std::_Rb_tree_node_base"** @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE12_M_rightmostEv(%"class.std::_Rb_tree"* %this1), !dbg !2167
  %2 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %call6, !dbg !2167
  %call7 = call dereferenceable(32) %"class.std::__cxx11::basic_string"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_S_keyEPKSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_node_base"* %2), !dbg !2168
  %3 = load %"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"** %__k.addr, align 8, !dbg !2169
  %call8 = call zeroext i1 @_ZNKSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEclERKS5_S8_(%"struct.std::less"* %_M_key_compare, %"class.std::__cxx11::basic_string"* dereferenceable(32) %call7, %"class.std::__cxx11::basic_string"* dereferenceable(32) %3), !dbg !2170
  br i1 %call8, label %if.then9, label %if.else, !dbg !2171

if.then9:                                         ; preds = %land.lhs.true
  store %"struct.std::_Rb_tree_node_base"* null, %"struct.std::_Rb_tree_node_base"** %ref.tmp, !dbg !2172
  %call10 = call dereferenceable(8) %"struct.std::_Rb_tree_node_base"** @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE12_M_rightmostEv(%"class.std::_Rb_tree"* %this1), !dbg !2173
  call void @_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2ERKS1_S4_(%"struct.std::pair.6"* %retval, %"struct.std::_Rb_tree_node_base"** dereferenceable(8) %ref.tmp, %"struct.std::_Rb_tree_node_base"** dereferenceable(8) %call10), !dbg !2174
  br label %return, !dbg !2175

if.else:                                          ; preds = %land.lhs.true, %if.then
  %4 = load %"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"** %__k.addr, align 8, !dbg !2176
  %call11 = call { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* } @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE24_M_get_insert_unique_posERS7_(%"class.std::_Rb_tree"* %this1, %"class.std::__cxx11::basic_string"* dereferenceable(32) %4), !dbg !2177
  %5 = bitcast %"struct.std::pair.6"* %retval to { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }*, !dbg !2177
  %6 = getelementptr { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }, { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }* %5, i32 0, i32 0, !dbg !2177
  %7 = extractvalue { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* } %call11, 0, !dbg !2177
  store %"struct.std::_Rb_tree_node_base"* %7, %"struct.std::_Rb_tree_node_base"** %6, align 1, !dbg !2177
  %8 = getelementptr { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }, { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }* %5, i32 0, i32 1, !dbg !2177
  %9 = extractvalue { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* } %call11, 1, !dbg !2177
  store %"struct.std::_Rb_tree_node_base"* %9, %"struct.std::_Rb_tree_node_base"** %8, align 1, !dbg !2177
  br label %return, !dbg !2178

if.else12:                                        ; preds = %entry
  %_M_impl13 = getelementptr inbounds %"class.std::_Rb_tree", %"class.std::_Rb_tree"* %this1, i32 0, i32 0, !dbg !2179
  %_M_key_compare14 = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %_M_impl13, i32 0, i32 0, !dbg !2181
  %10 = load %"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"** %__k.addr, align 8, !dbg !2182
  %_M_node15 = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %__pos, i32 0, i32 0, !dbg !2183
  %11 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %_M_node15, align 8, !dbg !2183
  %call16 = call dereferenceable(32) %"class.std::__cxx11::basic_string"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_S_keyEPKSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_node_base"* %11), !dbg !2184
  %call17 = call zeroext i1 @_ZNKSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEclERKS5_S8_(%"struct.std::less"* %_M_key_compare14, %"class.std::__cxx11::basic_string"* dereferenceable(32) %10, %"class.std::__cxx11::basic_string"* dereferenceable(32) %call16), !dbg !2179
  br i1 %call17, label %if.then18, label %if.else44, !dbg !2185

if.then18:                                        ; preds = %if.else12
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_iterator"* %__before, metadata !2186, metadata !1369), !dbg !2188
  %12 = bitcast %"struct.std::_Rb_tree_iterator"* %__before to i8*, !dbg !2189
  %13 = bitcast %"struct.std::_Rb_tree_iterator"* %__pos to i8*, !dbg !2189
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* %12, i8* %13, i64 8, i32 8, i1 false), !dbg !2189
  %_M_node19 = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %__pos, i32 0, i32 0, !dbg !2190
  %14 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %_M_node19, align 8, !dbg !2190
  %call20 = call dereferenceable(8) %"struct.std::_Rb_tree_node_base"** @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_M_leftmostEv(%"class.std::_Rb_tree"* %this1), !dbg !2192
  %15 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %call20, !dbg !2192
  %cmp21 = icmp eq %"struct.std::_Rb_tree_node_base"* %14, %15, !dbg !2193
  br i1 %cmp21, label %if.then22, label %if.else25, !dbg !2194

if.then22:                                        ; preds = %if.then18
  %call23 = call dereferenceable(8) %"struct.std::_Rb_tree_node_base"** @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_M_leftmostEv(%"class.std::_Rb_tree"* %this1), !dbg !2195
  %call24 = call dereferenceable(8) %"struct.std::_Rb_tree_node_base"** @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_M_leftmostEv(%"class.std::_Rb_tree"* %this1), !dbg !2196
  call void @_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2ERKS1_S4_(%"struct.std::pair.6"* %retval, %"struct.std::_Rb_tree_node_base"** dereferenceable(8) %call23, %"struct.std::_Rb_tree_node_base"** dereferenceable(8) %call24), !dbg !2197
  br label %return, !dbg !2198

if.else25:                                        ; preds = %if.then18
  %_M_impl26 = getelementptr inbounds %"class.std::_Rb_tree", %"class.std::_Rb_tree"* %this1, i32 0, i32 0, !dbg !2199
  %_M_key_compare27 = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %_M_impl26, i32 0, i32 0, !dbg !2201
  %call28 = call dereferenceable(8) %"struct.std::_Rb_tree_iterator"* @_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEmmEv(%"struct.std::_Rb_tree_iterator"* %__before), !dbg !2202
  %_M_node29 = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %call28, i32 0, i32 0, !dbg !2203
  %16 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %_M_node29, align 8, !dbg !2203
  %call30 = call dereferenceable(32) %"class.std::__cxx11::basic_string"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_S_keyEPKSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_node_base"* %16), !dbg !2204
  %17 = load %"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"** %__k.addr, align 8, !dbg !2205
  %call31 = call zeroext i1 @_ZNKSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEclERKS5_S8_(%"struct.std::less"* %_M_key_compare27, %"class.std::__cxx11::basic_string"* dereferenceable(32) %call30, %"class.std::__cxx11::basic_string"* dereferenceable(32) %17), !dbg !2199
  br i1 %call31, label %if.then32, label %if.else42, !dbg !2206

if.then32:                                        ; preds = %if.else25
  %_M_node33 = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %__before, i32 0, i32 0, !dbg !2207
  %18 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %_M_node33, align 8, !dbg !2207
  %call34 = call %"struct.std::_Rb_tree_node"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_S_rightEPSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_node_base"* %18), !dbg !2210
  %cmp35 = icmp eq %"struct.std::_Rb_tree_node"* %call34, null, !dbg !2211
  br i1 %cmp35, label %if.then36, label %if.else39, !dbg !2212

if.then36:                                        ; preds = %if.then32
  store %"struct.std::_Rb_tree_node_base"* null, %"struct.std::_Rb_tree_node_base"** %ref.tmp37, !dbg !2213
  %_M_node38 = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %__before, i32 0, i32 0, !dbg !2214
  call void @_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2ERKS1_S4_(%"struct.std::pair.6"* %retval, %"struct.std::_Rb_tree_node_base"** dereferenceable(8) %ref.tmp37, %"struct.std::_Rb_tree_node_base"** dereferenceable(8) %_M_node38), !dbg !2215
  br label %return, !dbg !2216

if.else39:                                        ; preds = %if.then32
  %_M_node40 = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %__pos, i32 0, i32 0, !dbg !2217
  %_M_node41 = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %__pos, i32 0, i32 0, !dbg !2218
  call void @_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2ERKS1_S4_(%"struct.std::pair.6"* %retval, %"struct.std::_Rb_tree_node_base"** dereferenceable(8) %_M_node40, %"struct.std::_Rb_tree_node_base"** dereferenceable(8) %_M_node41), !dbg !2219
  br label %return, !dbg !2220

if.else42:                                        ; preds = %if.else25
  %19 = load %"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"** %__k.addr, align 8, !dbg !2221
  %call43 = call { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* } @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE24_M_get_insert_unique_posERS7_(%"class.std::_Rb_tree"* %this1, %"class.std::__cxx11::basic_string"* dereferenceable(32) %19), !dbg !2222
  %20 = bitcast %"struct.std::pair.6"* %retval to { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }*, !dbg !2222
  %21 = getelementptr { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }, { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }* %20, i32 0, i32 0, !dbg !2222
  %22 = extractvalue { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* } %call43, 0, !dbg !2222
  store %"struct.std::_Rb_tree_node_base"* %22, %"struct.std::_Rb_tree_node_base"** %21, align 1, !dbg !2222
  %23 = getelementptr { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }, { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }* %20, i32 0, i32 1, !dbg !2222
  %24 = extractvalue { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* } %call43, 1, !dbg !2222
  store %"struct.std::_Rb_tree_node_base"* %24, %"struct.std::_Rb_tree_node_base"** %23, align 1, !dbg !2222
  br label %return, !dbg !2223

if.else44:                                        ; preds = %if.else12
  %_M_impl45 = getelementptr inbounds %"class.std::_Rb_tree", %"class.std::_Rb_tree"* %this1, i32 0, i32 0, !dbg !2224
  %_M_key_compare46 = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %_M_impl45, i32 0, i32 0, !dbg !2226
  %_M_node47 = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %__pos, i32 0, i32 0, !dbg !2227
  %25 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %_M_node47, align 8, !dbg !2227
  %call48 = call dereferenceable(32) %"class.std::__cxx11::basic_string"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_S_keyEPKSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_node_base"* %25), !dbg !2228
  %26 = load %"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"** %__k.addr, align 8, !dbg !2229
  %call49 = call zeroext i1 @_ZNKSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEclERKS5_S8_(%"struct.std::less"* %_M_key_compare46, %"class.std::__cxx11::basic_string"* dereferenceable(32) %call48, %"class.std::__cxx11::basic_string"* dereferenceable(32) %26), !dbg !2224
  br i1 %call49, label %if.then50, label %if.else76, !dbg !2230

if.then50:                                        ; preds = %if.else44
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_iterator"* %__after, metadata !2231, metadata !1369), !dbg !2233
  %27 = bitcast %"struct.std::_Rb_tree_iterator"* %__after to i8*, !dbg !2234
  %28 = bitcast %"struct.std::_Rb_tree_iterator"* %__pos to i8*, !dbg !2234
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* %27, i8* %28, i64 8, i32 8, i1 false), !dbg !2234
  %_M_node51 = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %__pos, i32 0, i32 0, !dbg !2235
  %29 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %_M_node51, align 8, !dbg !2235
  %call52 = call dereferenceable(8) %"struct.std::_Rb_tree_node_base"** @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE12_M_rightmostEv(%"class.std::_Rb_tree"* %this1), !dbg !2237
  %30 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %call52, !dbg !2237
  %cmp53 = icmp eq %"struct.std::_Rb_tree_node_base"* %29, %30, !dbg !2238
  br i1 %cmp53, label %if.then54, label %if.else57, !dbg !2239

if.then54:                                        ; preds = %if.then50
  store %"struct.std::_Rb_tree_node_base"* null, %"struct.std::_Rb_tree_node_base"** %ref.tmp55, !dbg !2240
  %call56 = call dereferenceable(8) %"struct.std::_Rb_tree_node_base"** @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE12_M_rightmostEv(%"class.std::_Rb_tree"* %this1), !dbg !2241
  call void @_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2ERKS1_S4_(%"struct.std::pair.6"* %retval, %"struct.std::_Rb_tree_node_base"** dereferenceable(8) %ref.tmp55, %"struct.std::_Rb_tree_node_base"** dereferenceable(8) %call56), !dbg !2242
  br label %return, !dbg !2243

if.else57:                                        ; preds = %if.then50
  %_M_impl58 = getelementptr inbounds %"class.std::_Rb_tree", %"class.std::_Rb_tree"* %this1, i32 0, i32 0, !dbg !2244
  %_M_key_compare59 = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %_M_impl58, i32 0, i32 0, !dbg !2246
  %31 = load %"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"** %__k.addr, align 8, !dbg !2247
  %call60 = call dereferenceable(8) %"struct.std::_Rb_tree_iterator"* @_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEppEv(%"struct.std::_Rb_tree_iterator"* %__after), !dbg !2248
  %_M_node61 = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %call60, i32 0, i32 0, !dbg !2249
  %32 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %_M_node61, align 8, !dbg !2249
  %call62 = call dereferenceable(32) %"class.std::__cxx11::basic_string"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_S_keyEPKSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_node_base"* %32), !dbg !2250
  %call63 = call zeroext i1 @_ZNKSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEclERKS5_S8_(%"struct.std::less"* %_M_key_compare59, %"class.std::__cxx11::basic_string"* dereferenceable(32) %31, %"class.std::__cxx11::basic_string"* dereferenceable(32) %call62), !dbg !2244
  br i1 %call63, label %if.then64, label %if.else74, !dbg !2251

if.then64:                                        ; preds = %if.else57
  %_M_node65 = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %__pos, i32 0, i32 0, !dbg !2252
  %33 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %_M_node65, align 8, !dbg !2252
  %call66 = call %"struct.std::_Rb_tree_node"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_S_rightEPSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_node_base"* %33), !dbg !2255
  %cmp67 = icmp eq %"struct.std::_Rb_tree_node"* %call66, null, !dbg !2256
  br i1 %cmp67, label %if.then68, label %if.else71, !dbg !2257

if.then68:                                        ; preds = %if.then64
  store %"struct.std::_Rb_tree_node_base"* null, %"struct.std::_Rb_tree_node_base"** %ref.tmp69, !dbg !2258
  %_M_node70 = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %__pos, i32 0, i32 0, !dbg !2259
  call void @_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2ERKS1_S4_(%"struct.std::pair.6"* %retval, %"struct.std::_Rb_tree_node_base"** dereferenceable(8) %ref.tmp69, %"struct.std::_Rb_tree_node_base"** dereferenceable(8) %_M_node70), !dbg !2260
  br label %return, !dbg !2261

if.else71:                                        ; preds = %if.then64
  %_M_node72 = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %__after, i32 0, i32 0, !dbg !2262
  %_M_node73 = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %__after, i32 0, i32 0, !dbg !2263
  call void @_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2ERKS1_S4_(%"struct.std::pair.6"* %retval, %"struct.std::_Rb_tree_node_base"** dereferenceable(8) %_M_node72, %"struct.std::_Rb_tree_node_base"** dereferenceable(8) %_M_node73), !dbg !2264
  br label %return, !dbg !2265

if.else74:                                        ; preds = %if.else57
  %34 = load %"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"** %__k.addr, align 8, !dbg !2266
  %call75 = call { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* } @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE24_M_get_insert_unique_posERS7_(%"class.std::_Rb_tree"* %this1, %"class.std::__cxx11::basic_string"* dereferenceable(32) %34), !dbg !2267
  %35 = bitcast %"struct.std::pair.6"* %retval to { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }*, !dbg !2267
  %36 = getelementptr { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }, { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }* %35, i32 0, i32 0, !dbg !2267
  %37 = extractvalue { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* } %call75, 0, !dbg !2267
  store %"struct.std::_Rb_tree_node_base"* %37, %"struct.std::_Rb_tree_node_base"** %36, align 1, !dbg !2267
  %38 = getelementptr { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }, { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }* %35, i32 0, i32 1, !dbg !2267
  %39 = extractvalue { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* } %call75, 1, !dbg !2267
  store %"struct.std::_Rb_tree_node_base"* %39, %"struct.std::_Rb_tree_node_base"** %38, align 1, !dbg !2267
  br label %return, !dbg !2268

if.else76:                                        ; preds = %if.else44
  %_M_node77 = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %__pos, i32 0, i32 0, !dbg !2269
  store %"struct.std::_Rb_tree_node_base"* null, %"struct.std::_Rb_tree_node_base"** %ref.tmp78, !dbg !2270
  call void @_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2ERKS1_S4_(%"struct.std::pair.6"* %retval, %"struct.std::_Rb_tree_node_base"** dereferenceable(8) %_M_node77, %"struct.std::_Rb_tree_node_base"** dereferenceable(8) %ref.tmp78), !dbg !2271
  br label %return, !dbg !2272

return:                                           ; preds = %if.else76, %if.else74, %if.else71, %if.then68, %if.then54, %if.else42, %if.else39, %if.then36, %if.then22, %if.else, %if.then9
  %40 = bitcast %"struct.std::pair.6"* %retval to { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }*, !dbg !2273
  %41 = load { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }, { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }* %40, align 1, !dbg !2273
  ret { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* } %41, !dbg !2273
}

; Function Attrs: uwtable
define linkonce_odr %"struct.std::_Rb_tree_node_base"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE10_M_insert_INSE_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS8_EPSt18_Rb_tree_node_baseSK_RKS8_RT_(%"class.std::_Rb_tree"* %this, %"struct.std::_Rb_tree_node_base"* %__x, %"struct.std::_Rb_tree_node_base"* %__p, %"struct.std::pair"* dereferenceable(40) %__v, %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"* dereferenceable(8) %__node_gen) #2 comdat align 2 {
entry:
  %retval = alloca %"struct.std::_Rb_tree_iterator", align 8
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  %__x.addr = alloca %"struct.std::_Rb_tree_node_base"*, align 8
  %__p.addr = alloca %"struct.std::_Rb_tree_node_base"*, align 8
  %__v.addr = alloca %"struct.std::pair"*, align 8
  %__node_gen.addr = alloca %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"*, align 8
  %__insert_left = alloca i8, align 1
  %tmp = alloca %"struct.std::_Select1st", align 1
  %__z = alloca %"struct.std::_Rb_tree_node"*, align 8
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !2274, metadata !1369), !dbg !2275
  store %"struct.std::_Rb_tree_node_base"* %__x, %"struct.std::_Rb_tree_node_base"** %__x.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node_base"** %__x.addr, metadata !2276, metadata !1369), !dbg !2277
  store %"struct.std::_Rb_tree_node_base"* %__p, %"struct.std::_Rb_tree_node_base"** %__p.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node_base"** %__p.addr, metadata !2278, metadata !1369), !dbg !2279
  store %"struct.std::pair"* %__v, %"struct.std::pair"** %__v.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::pair"** %__v.addr, metadata !2280, metadata !1369), !dbg !2281
  store %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"* %__node_gen, %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"** %__node_gen.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"** %__node_gen.addr, metadata !2282, metadata !1369), !dbg !2283
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  call void @llvm.dbg.declare(metadata i8* %__insert_left, metadata !2284, metadata !1369), !dbg !2285
  %0 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %__x.addr, align 8, !dbg !2286
  %cmp = icmp ne %"struct.std::_Rb_tree_node_base"* %0, null, !dbg !2287
  br i1 %cmp, label %lor.end, label %lor.lhs.false, !dbg !2288

lor.lhs.false:                                    ; preds = %entry
  %1 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %__p.addr, align 8, !dbg !2289
  %call = call %"struct.std::_Rb_tree_node"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_M_endEv(%"class.std::_Rb_tree"* %this1), !dbg !2291
  %2 = bitcast %"struct.std::_Rb_tree_node"* %call to %"struct.std::_Rb_tree_node_base"*, !dbg !2291
  %cmp2 = icmp eq %"struct.std::_Rb_tree_node_base"* %1, %2, !dbg !2292
  br i1 %cmp2, label %lor.end, label %lor.rhs, !dbg !2293

lor.rhs:                                          ; preds = %lor.lhs.false
  %_M_impl = getelementptr inbounds %"class.std::_Rb_tree", %"class.std::_Rb_tree"* %this1, i32 0, i32 0, !dbg !2294
  %_M_key_compare = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %_M_impl, i32 0, i32 0, !dbg !2296
  %3 = load %"struct.std::pair"*, %"struct.std::pair"** %__v.addr, align 8, !dbg !2297
  %call3 = call dereferenceable(32) %"class.std::__cxx11::basic_string"* @_ZNKSt10_Select1stISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEclERKS8_(%"struct.std::_Select1st"* %tmp, %"struct.std::pair"* dereferenceable(40) %3), !dbg !2298
  %4 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %__p.addr, align 8, !dbg !2299
  %call4 = call dereferenceable(32) %"class.std::__cxx11::basic_string"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_S_keyEPKSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_node_base"* %4), !dbg !2300
  %call5 = call zeroext i1 @_ZNKSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEclERKS5_S8_(%"struct.std::less"* %_M_key_compare, %"class.std::__cxx11::basic_string"* dereferenceable(32) %call3, %"class.std::__cxx11::basic_string"* dereferenceable(32) %call4), !dbg !2301
  br label %lor.end, !dbg !2293

lor.end:                                          ; preds = %lor.rhs, %lor.lhs.false, %entry
  %5 = phi i1 [ true, %lor.lhs.false ], [ true, %entry ], [ %call5, %lor.rhs ]
  %frombool = zext i1 %5 to i8, !dbg !2302
  store i8 %frombool, i8* %__insert_left, align 1, !dbg !2302
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node"** %__z, metadata !2303, metadata !1369), !dbg !2304
  %6 = load %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"*, %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"** %__node_gen.addr, align 8, !dbg !2305
  %7 = load %"struct.std::pair"*, %"struct.std::pair"** %__v.addr, align 8, !dbg !2306
  %call7 = call %"struct.std::_Rb_tree_node"* @_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_Alloc_nodeclIS8_EEPSt13_Rb_tree_nodeIS8_ERKT_(%"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"* %6, %"struct.std::pair"* dereferenceable(40) %7), !dbg !2305
  store %"struct.std::_Rb_tree_node"* %call7, %"struct.std::_Rb_tree_node"** %__z, align 8, !dbg !2304
  %8 = load i8, i8* %__insert_left, align 1, !dbg !2307
  %tobool = trunc i8 %8 to i1, !dbg !2307
  %9 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__z, align 8, !dbg !2308
  %10 = bitcast %"struct.std::_Rb_tree_node"* %9 to %"struct.std::_Rb_tree_node_base"*, !dbg !2308
  %11 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %__p.addr, align 8, !dbg !2309
  %_M_impl8 = getelementptr inbounds %"class.std::_Rb_tree", %"class.std::_Rb_tree"* %this1, i32 0, i32 0, !dbg !2310
  %_M_header = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %_M_impl8, i32 0, i32 1, !dbg !2311
  call void @_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_(i1 zeroext %tobool, %"struct.std::_Rb_tree_node_base"* %10, %"struct.std::_Rb_tree_node_base"* %11, %"struct.std::_Rb_tree_node_base"* dereferenceable(32) %_M_header) #1, !dbg !2312
  %_M_impl9 = getelementptr inbounds %"class.std::_Rb_tree", %"class.std::_Rb_tree"* %this1, i32 0, i32 0, !dbg !2313
  %_M_node_count = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %_M_impl9, i32 0, i32 2, !dbg !2314
  %12 = load i64, i64* %_M_node_count, align 8, !dbg !2315
  %inc = add i64 %12, 1, !dbg !2315
  store i64 %inc, i64* %_M_node_count, align 8, !dbg !2315
  %13 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__z, align 8, !dbg !2316
  %14 = bitcast %"struct.std::_Rb_tree_node"* %13 to %"struct.std::_Rb_tree_node_base"*, !dbg !2316
  call void @_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2EPSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_iterator"* %retval, %"struct.std::_Rb_tree_node_base"* %14), !dbg !2317
  %coerce.dive = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %retval, i32 0, i32 0, !dbg !2318
  %15 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %coerce.dive, !dbg !2318
  ret %"struct.std::_Rb_tree_node_base"* %15, !dbg !2318
}

; Function Attrs: uwtable
define linkonce_odr %"struct.std::_Rb_tree_node_base"* @_ZNKSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE13_M_const_castEv(%"struct.std::_Rb_tree_const_iterator"* %this) #2 comdat align 2 {
entry:
  %retval = alloca %"struct.std::_Rb_tree_iterator", align 8
  %this.addr = alloca %"struct.std::_Rb_tree_const_iterator"*, align 8
  store %"struct.std::_Rb_tree_const_iterator"* %this, %"struct.std::_Rb_tree_const_iterator"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_const_iterator"** %this.addr, metadata !2319, metadata !1369), !dbg !2321
  %this1 = load %"struct.std::_Rb_tree_const_iterator"*, %"struct.std::_Rb_tree_const_iterator"** %this.addr
  %_M_node = getelementptr inbounds %"struct.std::_Rb_tree_const_iterator", %"struct.std::_Rb_tree_const_iterator"* %this1, i32 0, i32 0, !dbg !2322
  %0 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %_M_node, align 8, !dbg !2322
  call void @_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2EPSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_iterator"* %retval, %"struct.std::_Rb_tree_node_base"* %0), !dbg !2323
  %coerce.dive = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %retval, i32 0, i32 0, !dbg !2324
  %1 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %coerce.dive, !dbg !2324
  ret %"struct.std::_Rb_tree_node_base"* %1, !dbg !2324
}

; Function Attrs: nounwind uwtable
define linkonce_odr i64 @_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE4sizeEv(%"class.std::_Rb_tree"* %this) #6 comdat align 2 {
entry:
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !2325, metadata !1369), !dbg !2326
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  %_M_impl = getelementptr inbounds %"class.std::_Rb_tree", %"class.std::_Rb_tree"* %this1, i32 0, i32 0, !dbg !2327
  %_M_node_count = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %_M_impl, i32 0, i32 2, !dbg !2328
  %0 = load i64, i64* %_M_node_count, align 8, !dbg !2328
  ret i64 %0, !dbg !2329
}

; Function Attrs: nounwind uwtable
define linkonce_odr dereferenceable(8) %"struct.std::_Rb_tree_node_base"** @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE12_M_rightmostEv(%"class.std::_Rb_tree"* %this) #6 comdat align 2 {
entry:
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !2330, metadata !1369), !dbg !2331
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  %_M_impl = getelementptr inbounds %"class.std::_Rb_tree", %"class.std::_Rb_tree"* %this1, i32 0, i32 0, !dbg !2332
  %_M_header = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %_M_impl, i32 0, i32 1, !dbg !2333
  %_M_right = getelementptr inbounds %"struct.std::_Rb_tree_node_base", %"struct.std::_Rb_tree_node_base"* %_M_header, i32 0, i32 3, !dbg !2334
  ret %"struct.std::_Rb_tree_node_base"** %_M_right, !dbg !2335
}

; Function Attrs: nounwind uwtable
define linkonce_odr void @_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2ERKS1_S4_(%"struct.std::pair.6"* %this, %"struct.std::_Rb_tree_node_base"** dereferenceable(8) %__a, %"struct.std::_Rb_tree_node_base"** dereferenceable(8) %__b) unnamed_addr #6 comdat align 2 {
entry:
  %this.addr = alloca %"struct.std::pair.6"*, align 8
  %__a.addr = alloca %"struct.std::_Rb_tree_node_base"**, align 8
  %__b.addr = alloca %"struct.std::_Rb_tree_node_base"**, align 8
  store %"struct.std::pair.6"* %this, %"struct.std::pair.6"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::pair.6"** %this.addr, metadata !2336, metadata !1369), !dbg !2338
  store %"struct.std::_Rb_tree_node_base"** %__a, %"struct.std::_Rb_tree_node_base"*** %__a.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node_base"*** %__a.addr, metadata !2339, metadata !1369), !dbg !2340
  store %"struct.std::_Rb_tree_node_base"** %__b, %"struct.std::_Rb_tree_node_base"*** %__b.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node_base"*** %__b.addr, metadata !2341, metadata !1369), !dbg !2342
  %this1 = load %"struct.std::pair.6"*, %"struct.std::pair.6"** %this.addr
  %first = getelementptr inbounds %"struct.std::pair.6", %"struct.std::pair.6"* %this1, i32 0, i32 0, !dbg !2343
  %0 = load %"struct.std::_Rb_tree_node_base"**, %"struct.std::_Rb_tree_node_base"*** %__a.addr, align 8, !dbg !2344
  %1 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %0, align 8, !dbg !2344
  store %"struct.std::_Rb_tree_node_base"* %1, %"struct.std::_Rb_tree_node_base"** %first, align 8, !dbg !2343
  %second = getelementptr inbounds %"struct.std::pair.6", %"struct.std::pair.6"* %this1, i32 0, i32 1, !dbg !2345
  %2 = load %"struct.std::_Rb_tree_node_base"**, %"struct.std::_Rb_tree_node_base"*** %__b.addr, align 8, !dbg !2346
  %3 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %2, align 8, !dbg !2346
  store %"struct.std::_Rb_tree_node_base"* %3, %"struct.std::_Rb_tree_node_base"** %second, align 8, !dbg !2345
  ret void, !dbg !2347
}

; Function Attrs: uwtable
define linkonce_odr { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* } @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE24_M_get_insert_unique_posERS7_(%"class.std::_Rb_tree"* %this, %"class.std::__cxx11::basic_string"* dereferenceable(32) %__k) #2 comdat align 2 {
entry:
  %retval = alloca %"struct.std::pair.6", align 8
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  %__k.addr = alloca %"class.std::__cxx11::basic_string"*, align 8
  %__x = alloca %"struct.std::_Rb_tree_node"*, align 8
  %__y = alloca %"struct.std::_Rb_tree_node"*, align 8
  %__comp = alloca i8, align 1
  %__j = alloca %"struct.std::_Rb_tree_iterator", align 8
  %ref.tmp = alloca %"struct.std::_Rb_tree_iterator", align 8
  %ref.tmp11 = alloca %"struct.std::_Rb_tree_node_base"*, align 8
  %ref.tmp12 = alloca %"struct.std::_Rb_tree_node_base"*, align 8
  %ref.tmp20 = alloca %"struct.std::_Rb_tree_node_base"*, align 8
  %ref.tmp21 = alloca %"struct.std::_Rb_tree_node_base"*, align 8
  %ref.tmp24 = alloca %"struct.std::_Rb_tree_node_base"*, align 8
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !2348, metadata !1369), !dbg !2349
  store %"class.std::__cxx11::basic_string"* %__k, %"class.std::__cxx11::basic_string"** %__k.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::__cxx11::basic_string"** %__k.addr, metadata !2350, metadata !1369), !dbg !2351
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node"** %__x, metadata !2352, metadata !1369), !dbg !2353
  %call = call %"struct.std::_Rb_tree_node"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_M_beginEv(%"class.std::_Rb_tree"* %this1), !dbg !2354
  store %"struct.std::_Rb_tree_node"* %call, %"struct.std::_Rb_tree_node"** %__x, align 8, !dbg !2353
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node"** %__y, metadata !2355, metadata !1369), !dbg !2356
  %call2 = call %"struct.std::_Rb_tree_node"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_M_endEv(%"class.std::_Rb_tree"* %this1), !dbg !2357
  store %"struct.std::_Rb_tree_node"* %call2, %"struct.std::_Rb_tree_node"** %__y, align 8, !dbg !2356
  call void @llvm.dbg.declare(metadata i8* %__comp, metadata !2358, metadata !1369), !dbg !2359
  store i8 1, i8* %__comp, align 1, !dbg !2359
  br label %while.cond, !dbg !2360

while.cond:                                       ; preds = %cond.end, %entry
  %0 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__x, align 8, !dbg !2361
  %cmp = icmp ne %"struct.std::_Rb_tree_node"* %0, null, !dbg !2364
  br i1 %cmp, label %while.body, label %while.end, !dbg !2360

while.body:                                       ; preds = %while.cond
  %1 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__x, align 8, !dbg !2365
  store %"struct.std::_Rb_tree_node"* %1, %"struct.std::_Rb_tree_node"** %__y, align 8, !dbg !2367
  %_M_impl = getelementptr inbounds %"class.std::_Rb_tree", %"class.std::_Rb_tree"* %this1, i32 0, i32 0, !dbg !2368
  %_M_key_compare = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %_M_impl, i32 0, i32 0, !dbg !2369
  %2 = load %"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"** %__k.addr, align 8, !dbg !2370
  %3 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__x, align 8, !dbg !2371
  %call3 = call dereferenceable(32) %"class.std::__cxx11::basic_string"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_S_keyEPKSt13_Rb_tree_nodeIS8_E(%"struct.std::_Rb_tree_node"* %3), !dbg !2372
  %call4 = call zeroext i1 @_ZNKSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEclERKS5_S8_(%"struct.std::less"* %_M_key_compare, %"class.std::__cxx11::basic_string"* dereferenceable(32) %2, %"class.std::__cxx11::basic_string"* dereferenceable(32) %call3), !dbg !2368
  %frombool = zext i1 %call4 to i8, !dbg !2373
  store i8 %frombool, i8* %__comp, align 1, !dbg !2373
  %4 = load i8, i8* %__comp, align 1, !dbg !2374
  %tobool = trunc i8 %4 to i1, !dbg !2374
  br i1 %tobool, label %cond.true, label %cond.false, !dbg !2374

cond.true:                                        ; preds = %while.body
  %5 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__x, align 8, !dbg !2375
  %6 = bitcast %"struct.std::_Rb_tree_node"* %5 to %"struct.std::_Rb_tree_node_base"*, !dbg !2375
  %call5 = call %"struct.std::_Rb_tree_node"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE7_S_leftEPSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_node_base"* %6), !dbg !2377
  br label %cond.end, !dbg !2374

cond.false:                                       ; preds = %while.body
  %7 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__x, align 8, !dbg !2378
  %8 = bitcast %"struct.std::_Rb_tree_node"* %7 to %"struct.std::_Rb_tree_node_base"*, !dbg !2378
  %call6 = call %"struct.std::_Rb_tree_node"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_S_rightEPSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_node_base"* %8), !dbg !2380
  br label %cond.end, !dbg !2374

cond.end:                                         ; preds = %cond.false, %cond.true
  %cond = phi %"struct.std::_Rb_tree_node"* [ %call5, %cond.true ], [ %call6, %cond.false ], !dbg !2374
  store %"struct.std::_Rb_tree_node"* %cond, %"struct.std::_Rb_tree_node"** %__x, align 8, !dbg !2381
  br label %while.cond, !dbg !2360

while.end:                                        ; preds = %while.cond
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_iterator"* %__j, metadata !2384, metadata !1369), !dbg !2385
  %9 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__y, align 8, !dbg !2386
  %10 = bitcast %"struct.std::_Rb_tree_node"* %9 to %"struct.std::_Rb_tree_node_base"*, !dbg !2386
  call void @_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2EPSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_iterator"* %__j, %"struct.std::_Rb_tree_node_base"* %10), !dbg !2387
  %11 = load i8, i8* %__comp, align 1, !dbg !2388
  %tobool7 = trunc i8 %11 to i1, !dbg !2388
  br i1 %tobool7, label %if.then, label %if.end14, !dbg !2390

if.then:                                          ; preds = %while.end
  %call8 = call %"struct.std::_Rb_tree_node_base"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE5beginEv(%"class.std::_Rb_tree"* %this1), !dbg !2391
  %coerce.dive = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %ref.tmp, i32 0, i32 0, !dbg !2391
  store %"struct.std::_Rb_tree_node_base"* %call8, %"struct.std::_Rb_tree_node_base"** %coerce.dive, !dbg !2391
  %call9 = call zeroext i1 @_ZNKSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEeqERKS9_(%"struct.std::_Rb_tree_iterator"* %__j, %"struct.std::_Rb_tree_iterator"* dereferenceable(8) %ref.tmp), !dbg !2394
  br i1 %call9, label %if.then10, label %if.else, !dbg !2395

if.then10:                                        ; preds = %if.then
  %12 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__x, align 8, !dbg !2396
  %13 = bitcast %"struct.std::_Rb_tree_node"* %12 to %"struct.std::_Rb_tree_node_base"*, !dbg !2396
  store %"struct.std::_Rb_tree_node_base"* %13, %"struct.std::_Rb_tree_node_base"** %ref.tmp11, !dbg !2396
  %14 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__y, align 8, !dbg !2397
  %15 = bitcast %"struct.std::_Rb_tree_node"* %14 to %"struct.std::_Rb_tree_node_base"*, !dbg !2397
  store %"struct.std::_Rb_tree_node_base"* %15, %"struct.std::_Rb_tree_node_base"** %ref.tmp12, !dbg !2397
  call void @_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2ERKS1_S4_(%"struct.std::pair.6"* %retval, %"struct.std::_Rb_tree_node_base"** dereferenceable(8) %ref.tmp11, %"struct.std::_Rb_tree_node_base"** dereferenceable(8) %ref.tmp12), !dbg !2398
  br label %return, !dbg !2399

if.else:                                          ; preds = %if.then
  %call13 = call dereferenceable(8) %"struct.std::_Rb_tree_iterator"* @_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEmmEv(%"struct.std::_Rb_tree_iterator"* %__j), !dbg !2400
  br label %if.end

if.end:                                           ; preds = %if.else
  br label %if.end14, !dbg !2401

if.end14:                                         ; preds = %if.end, %while.end
  %_M_impl15 = getelementptr inbounds %"class.std::_Rb_tree", %"class.std::_Rb_tree"* %this1, i32 0, i32 0, !dbg !2402
  %_M_key_compare16 = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %_M_impl15, i32 0, i32 0, !dbg !2404
  %_M_node = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %__j, i32 0, i32 0, !dbg !2405
  %16 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %_M_node, align 8, !dbg !2405
  %call17 = call dereferenceable(32) %"class.std::__cxx11::basic_string"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_S_keyEPKSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_node_base"* %16), !dbg !2406
  %17 = load %"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"** %__k.addr, align 8, !dbg !2407
  %call18 = call zeroext i1 @_ZNKSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEclERKS5_S8_(%"struct.std::less"* %_M_key_compare16, %"class.std::__cxx11::basic_string"* dereferenceable(32) %call17, %"class.std::__cxx11::basic_string"* dereferenceable(32) %17), !dbg !2402
  br i1 %call18, label %if.then19, label %if.end22, !dbg !2408

if.then19:                                        ; preds = %if.end14
  %18 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__x, align 8, !dbg !2409
  %19 = bitcast %"struct.std::_Rb_tree_node"* %18 to %"struct.std::_Rb_tree_node_base"*, !dbg !2409
  store %"struct.std::_Rb_tree_node_base"* %19, %"struct.std::_Rb_tree_node_base"** %ref.tmp20, !dbg !2409
  %20 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__y, align 8, !dbg !2410
  %21 = bitcast %"struct.std::_Rb_tree_node"* %20 to %"struct.std::_Rb_tree_node_base"*, !dbg !2410
  store %"struct.std::_Rb_tree_node_base"* %21, %"struct.std::_Rb_tree_node_base"** %ref.tmp21, !dbg !2410
  call void @_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2ERKS1_S4_(%"struct.std::pair.6"* %retval, %"struct.std::_Rb_tree_node_base"** dereferenceable(8) %ref.tmp20, %"struct.std::_Rb_tree_node_base"** dereferenceable(8) %ref.tmp21), !dbg !2411
  br label %return, !dbg !2412

if.end22:                                         ; preds = %if.end14
  %_M_node23 = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %__j, i32 0, i32 0, !dbg !2413
  store %"struct.std::_Rb_tree_node_base"* null, %"struct.std::_Rb_tree_node_base"** %ref.tmp24, !dbg !2414
  call void @_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2ERKS1_S4_(%"struct.std::pair.6"* %retval, %"struct.std::_Rb_tree_node_base"** dereferenceable(8) %_M_node23, %"struct.std::_Rb_tree_node_base"** dereferenceable(8) %ref.tmp24), !dbg !2415
  br label %return, !dbg !2416

return:                                           ; preds = %if.end22, %if.then19, %if.then10
  %22 = bitcast %"struct.std::pair.6"* %retval to { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }*, !dbg !2417
  %23 = load { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }, { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* }* %22, align 1, !dbg !2417
  ret { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* } %23, !dbg !2417
}

; Function Attrs: nounwind uwtable
define linkonce_odr dereferenceable(8) %"struct.std::_Rb_tree_node_base"** @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_M_leftmostEv(%"class.std::_Rb_tree"* %this) #6 comdat align 2 {
entry:
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !2418, metadata !1369), !dbg !2419
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  %_M_impl = getelementptr inbounds %"class.std::_Rb_tree", %"class.std::_Rb_tree"* %this1, i32 0, i32 0, !dbg !2420
  %_M_header = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %_M_impl, i32 0, i32 1, !dbg !2421
  %_M_left = getelementptr inbounds %"struct.std::_Rb_tree_node_base", %"struct.std::_Rb_tree_node_base"* %_M_header, i32 0, i32 2, !dbg !2422
  ret %"struct.std::_Rb_tree_node_base"** %_M_left, !dbg !2423
}

; Function Attrs: nounwind uwtable
define linkonce_odr dereferenceable(8) %"struct.std::_Rb_tree_iterator"* @_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEmmEv(%"struct.std::_Rb_tree_iterator"* %this) #6 comdat align 2 {
entry:
  %this.addr = alloca %"struct.std::_Rb_tree_iterator"*, align 8
  store %"struct.std::_Rb_tree_iterator"* %this, %"struct.std::_Rb_tree_iterator"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_iterator"** %this.addr, metadata !2424, metadata !1369), !dbg !2425
  %this1 = load %"struct.std::_Rb_tree_iterator"*, %"struct.std::_Rb_tree_iterator"** %this.addr
  %_M_node = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %this1, i32 0, i32 0, !dbg !2426
  %0 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %_M_node, align 8, !dbg !2426
  %call = call %"struct.std::_Rb_tree_node_base"* @_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_node_base"* %0) #14, !dbg !2427
  %_M_node2 = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %this1, i32 0, i32 0, !dbg !2428
  store %"struct.std::_Rb_tree_node_base"* %call, %"struct.std::_Rb_tree_node_base"** %_M_node2, align 8, !dbg !2429
  ret %"struct.std::_Rb_tree_iterator"* %this1, !dbg !2430
}

; Function Attrs: nounwind uwtable
define linkonce_odr dereferenceable(8) %"struct.std::_Rb_tree_iterator"* @_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEppEv(%"struct.std::_Rb_tree_iterator"* %this) #6 comdat align 2 {
entry:
  %this.addr = alloca %"struct.std::_Rb_tree_iterator"*, align 8
  store %"struct.std::_Rb_tree_iterator"* %this, %"struct.std::_Rb_tree_iterator"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_iterator"** %this.addr, metadata !2431, metadata !1369), !dbg !2432
  %this1 = load %"struct.std::_Rb_tree_iterator"*, %"struct.std::_Rb_tree_iterator"** %this.addr
  %_M_node = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %this1, i32 0, i32 0, !dbg !2433
  %0 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %_M_node, align 8, !dbg !2433
  %call = call %"struct.std::_Rb_tree_node_base"* @_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_node_base"* %0) #14, !dbg !2434
  %_M_node2 = getelementptr inbounds %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %this1, i32 0, i32 0, !dbg !2435
  store %"struct.std::_Rb_tree_node_base"* %call, %"struct.std::_Rb_tree_node_base"** %_M_node2, align 8, !dbg !2436
  ret %"struct.std::_Rb_tree_iterator"* %this1, !dbg !2437
}

; Function Attrs: uwtable
define linkonce_odr %"struct.std::_Rb_tree_node_base"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE5beginEv(%"class.std::_Rb_tree"* %this) #2 comdat align 2 {
entry:
  %retval = alloca %"struct.std::_Rb_tree_iterator", align 8
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !2438, metadata !1369), !dbg !2439
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  %_M_impl = getelementptr inbounds %"class.std::_Rb_tree", %"class.std::_Rb_tree"* %this1, i32 0, i32 0, !dbg !2440
  %_M_header = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"* %_M_impl, i32 0, i32 1, !dbg !2441
  %_M_left = getelementptr inbounds %"struct.std::_Rb_tree_node_base", %"struct.std::_Rb_tree_node_base"* %_M_header, i32 0, i32 2, !dbg !2442
  %0 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %_M_left, align 8, !dbg !2442
  call void @_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2EPSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_iterator"* %retval, %"struct.std::_Rb_tree_node_base"* %0), !dbg !2443
  %coerce.dive = getelementptr %"struct.std::_Rb_tree_iterator", %"struct.std::_Rb_tree_iterator"* %retval, i32 0, i32 0, !dbg !2444
  %1 = load %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"** %coerce.dive, !dbg !2444
  ret %"struct.std::_Rb_tree_node_base"* %1, !dbg !2444
}

; Function Attrs: nounwind readonly
declare %"struct.std::_Rb_tree_node_base"* @_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_node_base"*) #10

; Function Attrs: nounwind readonly
declare %"struct.std::_Rb_tree_node_base"* @_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base(%"struct.std::_Rb_tree_node_base"*) #10

; Function Attrs: uwtable
define linkonce_odr %"struct.std::_Rb_tree_node"* @_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_Alloc_nodeclIS8_EEPSt13_Rb_tree_nodeIS8_ERKT_(%"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"* %this, %"struct.std::pair"* dereferenceable(40) %__arg) #2 comdat align 2 {
entry:
  %this.addr = alloca %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"*, align 8
  %__arg.addr = alloca %"struct.std::pair"*, align 8
  store %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"* %this, %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"** %this.addr, metadata !2445, metadata !1369), !dbg !2447
  store %"struct.std::pair"* %__arg, %"struct.std::pair"** %__arg.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::pair"** %__arg.addr, metadata !2448, metadata !1369), !dbg !2449
  %this1 = load %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"*, %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"** %this.addr
  %_M_t = getelementptr inbounds %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node", %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"* %this1, i32 0, i32 0, !dbg !2450
  %ref = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %_M_t, align 8, !dbg !2450
  %0 = load %"struct.std::pair"*, %"struct.std::pair"** %__arg.addr, align 8, !dbg !2451
  %call = call %"struct.std::_Rb_tree_node"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE14_M_create_nodeERKS8_(%"class.std::_Rb_tree"* %ref, %"struct.std::pair"* dereferenceable(40) %0), !dbg !2450
  ret %"struct.std::_Rb_tree_node"* %call, !dbg !2452
}

; Function Attrs: nounwind
declare void @_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_(i1 zeroext, %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* dereferenceable(32)) #5

; Function Attrs: uwtable
define linkonce_odr %"struct.std::_Rb_tree_node"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE14_M_create_nodeERKS8_(%"class.std::_Rb_tree"* %this, %"struct.std::pair"* dereferenceable(40) %__x) #2 comdat align 2 {
entry:
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  %__x.addr = alloca %"struct.std::pair"*, align 8
  %__tmp = alloca %"struct.std::_Rb_tree_node"*, align 8
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !2453, metadata !1369), !dbg !2454
  store %"struct.std::pair"* %__x, %"struct.std::pair"** %__x.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::pair"** %__x.addr, metadata !2455, metadata !1369), !dbg !2456
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node"** %__tmp, metadata !2457, metadata !1369), !dbg !2458
  %call = call %"struct.std::_Rb_tree_node"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_M_get_nodeEv(%"class.std::_Rb_tree"* %this1), !dbg !2459
  store %"struct.std::_Rb_tree_node"* %call, %"struct.std::_Rb_tree_node"** %__tmp, align 8, !dbg !2458
  %0 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__tmp, align 8, !dbg !2460
  %1 = load %"struct.std::pair"*, %"struct.std::pair"** %__x.addr, align 8, !dbg !2461
  call void @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE17_M_construct_nodeEPSt13_Rb_tree_nodeIS8_ERKS8_(%"class.std::_Rb_tree"* %this1, %"struct.std::_Rb_tree_node"* %0, %"struct.std::pair"* dereferenceable(40) %1), !dbg !2462
  %2 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__tmp, align 8, !dbg !2463
  ret %"struct.std::_Rb_tree_node"* %2, !dbg !2464
}

; Function Attrs: uwtable
define linkonce_odr %"struct.std::_Rb_tree_node"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_M_get_nodeEv(%"class.std::_Rb_tree"* %this) #2 comdat align 2 {
entry:
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !2465, metadata !1369), !dbg !2466
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  %call = call dereferenceable(1) %"class.std::allocator"* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE21_M_get_Node_allocatorEv(%"class.std::_Rb_tree"* %this1), !dbg !2467
  %call2 = call %"struct.std::_Rb_tree_node"* @_ZN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE8allocateERSC_m(%"class.std::allocator"* dereferenceable(1) %call, i64 1), !dbg !2468
  ret %"struct.std::_Rb_tree_node"* %call2, !dbg !2469
}

; Function Attrs: uwtable
define linkonce_odr void @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE17_M_construct_nodeEPSt13_Rb_tree_nodeIS8_ERKS8_(%"class.std::_Rb_tree"* %this, %"struct.std::_Rb_tree_node"* %__node, %"struct.std::pair"* dereferenceable(40) %__x) #2 comdat align 2 {
entry:
  %this.addr = alloca %"class.std::_Rb_tree"*, align 8
  %__node.addr = alloca %"struct.std::_Rb_tree_node"*, align 8
  %__x.addr = alloca %"struct.std::pair"*, align 8
  %temp.lvalue = alloca %"class.std::allocator.3", align 1
  %exn.slot = alloca i8*
  %ehselector.slot = alloca i32
  store %"class.std::_Rb_tree"* %this, %"class.std::_Rb_tree"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::_Rb_tree"** %this.addr, metadata !2470, metadata !1369), !dbg !2471
  store %"struct.std::_Rb_tree_node"* %__node, %"struct.std::_Rb_tree_node"** %__node.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::_Rb_tree_node"** %__node.addr, metadata !2472, metadata !1369), !dbg !2473
  store %"struct.std::pair"* %__x, %"struct.std::pair"** %__x.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::pair"** %__x.addr, metadata !2474, metadata !1369), !dbg !2475
  %this1 = load %"class.std::_Rb_tree"*, %"class.std::_Rb_tree"** %this.addr
  invoke void @_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13get_allocatorEv(%"class.std::allocator.3"* sret %temp.lvalue, %"class.std::_Rb_tree"* %this1)
          to label %invoke.cont unwind label %lpad, !dbg !2476

invoke.cont:                                      ; preds = %entry
  %0 = bitcast %"class.std::allocator.3"* %temp.lvalue to %"class.__gnu_cxx::new_allocator.4"*, !dbg !2478
  %1 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__node.addr, align 8, !dbg !2480
  %call = invoke %"struct.std::pair"* @_ZNSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE9_M_valptrEv(%"struct.std::_Rb_tree_node"* %1)
          to label %invoke.cont3 unwind label %lpad2, !dbg !2480

invoke.cont3:                                     ; preds = %invoke.cont
  %2 = load %"struct.std::pair"*, %"struct.std::pair"** %__x.addr, align 8, !dbg !2481
  invoke void @_ZN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE9constructEPS9_RKS9_(%"class.__gnu_cxx::new_allocator.4"* %0, %"struct.std::pair"* %call, %"struct.std::pair"* dereferenceable(40) %2)
          to label %invoke.cont4 unwind label %lpad2, !dbg !2476

invoke.cont4:                                     ; preds = %invoke.cont3
  call void @_ZNSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEED2Ev(%"class.std::allocator.3"* %temp.lvalue) #1, !dbg !2483
  br label %try.cont, !dbg !2485

lpad:                                             ; preds = %entry
  %3 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          catch i8* null, !dbg !2486
  %4 = extractvalue { i8*, i32 } %3, 0, !dbg !2486
  store i8* %4, i8** %exn.slot, !dbg !2486
  %5 = extractvalue { i8*, i32 } %3, 1, !dbg !2486
  store i32 %5, i32* %ehselector.slot, !dbg !2486
  br label %catch, !dbg !2486

lpad2:                                            ; preds = %invoke.cont3, %invoke.cont
  %6 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          catch i8* null, !dbg !2486
  %7 = extractvalue { i8*, i32 } %6, 0, !dbg !2486
  store i8* %7, i8** %exn.slot, !dbg !2486
  %8 = extractvalue { i8*, i32 } %6, 1, !dbg !2486
  store i32 %8, i32* %ehselector.slot, !dbg !2486
  call void @_ZNSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEED2Ev(%"class.std::allocator.3"* %temp.lvalue) #1, !dbg !2476
  br label %catch, !dbg !2476

catch:                                            ; preds = %lpad2, %lpad
  %exn = load i8*, i8** %exn.slot, !dbg !2487
  %9 = call i8* @__cxa_begin_catch(i8* %exn) #1, !dbg !2487
  %10 = load %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"** %__node.addr, align 8, !dbg !2489
  invoke void @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS8_E(%"class.std::_Rb_tree"* %this1, %"struct.std::_Rb_tree_node"* %10)
          to label %invoke.cont6 unwind label %lpad5, !dbg !2491

invoke.cont6:                                     ; preds = %catch
  invoke void @__cxa_rethrow() #15
          to label %unreachable unwind label %lpad5, !dbg !2492

lpad5:                                            ; preds = %invoke.cont6, %catch
  %11 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          cleanup, !dbg !2493
  %12 = extractvalue { i8*, i32 } %11, 0, !dbg !2493
  store i8* %12, i8** %exn.slot, !dbg !2493
  %13 = extractvalue { i8*, i32 } %11, 1, !dbg !2493
  store i32 %13, i32* %ehselector.slot, !dbg !2493
  invoke void @__cxa_end_catch()
          to label %invoke.cont7 unwind label %terminate.lpad, !dbg !2494

invoke.cont7:                                     ; preds = %lpad5
  br label %eh.resume, !dbg !2495

try.cont:                                         ; preds = %invoke.cont4
  ret void, !dbg !2497

eh.resume:                                        ; preds = %invoke.cont7
  %exn8 = load i8*, i8** %exn.slot, !dbg !2498
  %sel = load i32, i32* %ehselector.slot, !dbg !2498
  %lpad.val = insertvalue { i8*, i32 } undef, i8* %exn8, 0, !dbg !2498
  %lpad.val9 = insertvalue { i8*, i32 } %lpad.val, i32 %sel, 1, !dbg !2498
  resume { i8*, i32 } %lpad.val9, !dbg !2498

terminate.lpad:                                   ; preds = %lpad5
  %14 = landingpad { i8*, i32 } personality i8* bitcast (i32 (...)* @__gxx_personality_v0 to i8*)
          catch i8* null, !dbg !2500
  %15 = extractvalue { i8*, i32 } %14, 0, !dbg !2500
  call void @__clang_call_terminate(i8* %15) #13, !dbg !2500
  unreachable, !dbg !2500

unreachable:                                      ; preds = %invoke.cont6
  unreachable
}

; Function Attrs: uwtable
define linkonce_odr %"struct.std::_Rb_tree_node"* @_ZN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE8allocateERSC_m(%"class.std::allocator"* dereferenceable(1) %__a, i64 %__n) #2 comdat align 2 {
entry:
  %__a.addr = alloca %"class.std::allocator"*, align 8
  %__n.addr = alloca i64, align 8
  store %"class.std::allocator"* %__a, %"class.std::allocator"** %__a.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.std::allocator"** %__a.addr, metadata !2502, metadata !1369), !dbg !2503
  store i64 %__n, i64* %__n.addr, align 8
  call void @llvm.dbg.declare(metadata i64* %__n.addr, metadata !2504, metadata !1369), !dbg !2505
  %0 = load %"class.std::allocator"*, %"class.std::allocator"** %__a.addr, align 8, !dbg !2506
  %1 = bitcast %"class.std::allocator"* %0 to %"class.__gnu_cxx::new_allocator"*, !dbg !2506
  %2 = load i64, i64* %__n.addr, align 8, !dbg !2507
  %call = call %"struct.std::_Rb_tree_node"* @_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE8allocateEmPKv(%"class.__gnu_cxx::new_allocator"* %1, i64 %2, i8* null), !dbg !2506
  ret %"struct.std::_Rb_tree_node"* %call, !dbg !2508
}

; Function Attrs: uwtable
define linkonce_odr %"struct.std::_Rb_tree_node"* @_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE8allocateEmPKv(%"class.__gnu_cxx::new_allocator"* %this, i64 %__n, i8*) #2 comdat align 2 {
entry:
  %this.addr = alloca %"class.__gnu_cxx::new_allocator"*, align 8
  %__n.addr = alloca i64, align 8
  %.addr = alloca i8*, align 8
  store %"class.__gnu_cxx::new_allocator"* %this, %"class.__gnu_cxx::new_allocator"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.__gnu_cxx::new_allocator"** %this.addr, metadata !2509, metadata !1369), !dbg !2510
  store i64 %__n, i64* %__n.addr, align 8
  call void @llvm.dbg.declare(metadata i64* %__n.addr, metadata !2511, metadata !1369), !dbg !2512
  store i8* %0, i8** %.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %.addr, metadata !2513, metadata !1369), !dbg !2514
  %this1 = load %"class.__gnu_cxx::new_allocator"*, %"class.__gnu_cxx::new_allocator"** %this.addr
  %1 = load i64, i64* %__n.addr, align 8, !dbg !2515
  %call = call i64 @_ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE8max_sizeEv(%"class.__gnu_cxx::new_allocator"* %this1) #1, !dbg !2517
  %cmp = icmp ugt i64 %1, %call, !dbg !2518
  br i1 %cmp, label %if.then, label %if.end, !dbg !2519

if.then:                                          ; preds = %entry
  call void @_ZSt17__throw_bad_allocv() #15, !dbg !2520
  unreachable, !dbg !2520

if.end:                                           ; preds = %entry
  %2 = load i64, i64* %__n.addr, align 8, !dbg !2521
  %mul = mul i64 %2, 72, !dbg !2522
  %call2 = call noalias i8* @_Znwm(i64 %mul), !dbg !2523
  %3 = bitcast i8* %call2 to %"struct.std::_Rb_tree_node"*, !dbg !2524
  ret %"struct.std::_Rb_tree_node"* %3, !dbg !2525
}

; Function Attrs: nounwind uwtable
define linkonce_odr i64 @_ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE8max_sizeEv(%"class.__gnu_cxx::new_allocator"* %this) #6 comdat align 2 {
entry:
  %this.addr = alloca %"class.__gnu_cxx::new_allocator"*, align 8
  store %"class.__gnu_cxx::new_allocator"* %this, %"class.__gnu_cxx::new_allocator"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.__gnu_cxx::new_allocator"** %this.addr, metadata !2526, metadata !1369), !dbg !2528
  %this1 = load %"class.__gnu_cxx::new_allocator"*, %"class.__gnu_cxx::new_allocator"** %this.addr
  ret i64 256204778801521550, !dbg !2529
}

; Function Attrs: noreturn
declare void @_ZSt17__throw_bad_allocv() #11

; Function Attrs: nobuiltin
declare noalias i8* @_Znwm(i64) #12

; Function Attrs: uwtable
define linkonce_odr void @_ZN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE9constructEPS9_RKS9_(%"class.__gnu_cxx::new_allocator.4"* %this, %"struct.std::pair"* %__p, %"struct.std::pair"* dereferenceable(40) %__val) #2 comdat align 2 {
entry:
  %this.addr = alloca %"class.__gnu_cxx::new_allocator.4"*, align 8
  %__p.addr = alloca %"struct.std::pair"*, align 8
  %__val.addr = alloca %"struct.std::pair"*, align 8
  store %"class.__gnu_cxx::new_allocator.4"* %this, %"class.__gnu_cxx::new_allocator.4"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"class.__gnu_cxx::new_allocator.4"** %this.addr, metadata !2530, metadata !1369), !dbg !2531
  store %"struct.std::pair"* %__p, %"struct.std::pair"** %__p.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::pair"** %__p.addr, metadata !2532, metadata !1369), !dbg !2533
  store %"struct.std::pair"* %__val, %"struct.std::pair"** %__val.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::pair"** %__val.addr, metadata !2534, metadata !1369), !dbg !2535
  %this1 = load %"class.__gnu_cxx::new_allocator.4"*, %"class.__gnu_cxx::new_allocator.4"** %this.addr
  %0 = load %"struct.std::pair"*, %"struct.std::pair"** %__p.addr, align 8, !dbg !2536
  %1 = bitcast %"struct.std::pair"* %0 to i8*, !dbg !2536
  %2 = bitcast i8* %1 to %"struct.std::pair"*, !dbg !2537
  %3 = load %"struct.std::pair"*, %"struct.std::pair"** %__val.addr, align 8, !dbg !2538
  call void @_ZNSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEC2ERKS7_(%"struct.std::pair"* %2, %"struct.std::pair"* dereferenceable(40) %3), !dbg !2539
  ret void, !dbg !2540
}

declare void @__cxa_rethrow()

declare void @__cxa_end_catch()

; Function Attrs: inlinehint uwtable
define linkonce_odr void @_ZNSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEC2ERKS7_(%"struct.std::pair"* %this, %"struct.std::pair"* dereferenceable(40)) unnamed_addr #3 comdat align 2 {
entry:
  %this.addr = alloca %"struct.std::pair"*, align 8
  %.addr = alloca %"struct.std::pair"*, align 8
  store %"struct.std::pair"* %this, %"struct.std::pair"** %this.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::pair"** %this.addr, metadata !2541, metadata !1369), !dbg !2542
  store %"struct.std::pair"* %0, %"struct.std::pair"** %.addr, align 8
  call void @llvm.dbg.declare(metadata %"struct.std::pair"** %.addr, metadata !2543, metadata !1369), !dbg !2542
  %this1 = load %"struct.std::pair"*, %"struct.std::pair"** %this.addr
  %first = getelementptr inbounds %"struct.std::pair", %"struct.std::pair"* %this1, i32 0, i32 0, !dbg !2544
  %1 = load %"struct.std::pair"*, %"struct.std::pair"** %.addr, align 8, !dbg !2544
  %first2 = getelementptr inbounds %"struct.std::pair", %"struct.std::pair"* %1, i32 0, i32 0, !dbg !2544
  call void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_(%"class.std::__cxx11::basic_string"* %first, %"class.std::__cxx11::basic_string"* dereferenceable(32) %first2), !dbg !2544
  %second = getelementptr inbounds %"struct.std::pair", %"struct.std::pair"* %this1, i32 0, i32 1, !dbg !2544
  %2 = load %"struct.std::pair"*, %"struct.std::pair"** %.addr, align 8, !dbg !2544
  %second3 = getelementptr inbounds %"struct.std::pair", %"struct.std::pair"* %2, i32 0, i32 1, !dbg !2544
  %3 = load i32, i32* %second3, align 4, !dbg !2544
  store i32 %3, i32* %second, align 4, !dbg !2544
  ret void, !dbg !2544
}

declare void @_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_(%"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"* dereferenceable(32)) #0

define internal void @_GLOBAL__sub_I_printLine.cpp() section ".text.startup" {
entry:
  call void @__cxx_global_var_init(), !dbg !2545
  call void @__cxx_global_var_init1(), !dbg !2545
  ret void
}

attributes #0 = { "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { nounwind }
attributes #2 = { uwtable "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #3 = { inlinehint uwtable "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #4 = { nounwind readnone }
attributes #5 = { nounwind "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #6 = { nounwind uwtable "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #7 = { noinline noreturn nounwind }
attributes #8 = { inlinehint nounwind uwtable "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #9 = { nobuiltin nounwind "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #10 = { nounwind readonly "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #11 = { noreturn "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #12 = { nobuiltin "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #13 = { noreturn nounwind }
attributes #14 = { nounwind readonly }
attributes #15 = { noreturn }

!llvm.dbg.cu = !{!0}
!llvm.module.flags = !{!1362, !1363}
!llvm.ident = !{!1364}

!0 = !MDCompileUnit(language: DW_LANG_C_plus_plus, file: !1, producer: "clang version 3.7.0 (trunk) (https://github.com/C0deZLee/llvm-dsa.git 37744f40c2bfa98b8b4cad0885aeb2cb1f84d8e0)", isOptimized: false, runtimeVersion: 0, emissionKind: 1, enums: !2, retainedTypes: !10, subprograms: !861, globals: !1000, imports: !1005)
!1 = !MDFile(filename: "/home/troy/llvm-dsa/ResearchTests/instrumentation/BBInfo/printLine.cpp", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!2 = !{!3}
!3 = !MDCompositeType(tag: DW_TAG_enumeration_type, name: "_Rb_tree_color", scope: !5, file: !4, line: 92, size: 32, align: 32, elements: !7, identifier: "_ZTSSt14_Rb_tree_color")
!4 = !MDFile(filename: "/usr/lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/bits/stl_tree.h", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!5 = !MDNamespace(name: "std", scope: null, file: !6, line: 194)
!6 = !MDFile(filename: "/usr/lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/x86_64-linux-gnu/c++/5.4.0/bits/c++config.h", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!7 = !{!8, !9}
!8 = !MDEnumerator(name: "_S_red", value: 0)
!9 = !MDEnumerator(name: "_S_black", value: 1)
!10 = !{!11, !17, !26, !28, !35, !36, !38, !40, !52, !184, !187, !199, !205, !221, !238, !286, !511, !528, !546, !572, !575, !588, !591, !604, !644, !3, !660, !676, !722, !759, !761, !762, !763, !764, !765, !766, !312, !770, !256, !771, !798, !264, !799, !851, !348, !852, !853, !860, !313, !114, !33}
!11 = !MDCompositeType(tag: DW_TAG_structure_type, file: !12, line: 82, size: 64, align: 32, elements: !13, identifier: "_ZTS11__mbstate_t")
!12 = !MDFile(filename: "/usr/include/wchar.h", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!13 = !{!14, !16}
!14 = !MDDerivedType(tag: DW_TAG_member, name: "__count", scope: !"_ZTS11__mbstate_t", file: !12, line: 84, baseType: !15, size: 32, align: 32)
!15 = !MDBasicType(name: "int", size: 32, align: 32, encoding: DW_ATE_signed)
!16 = !MDDerivedType(tag: DW_TAG_member, name: "__value", scope: !"_ZTS11__mbstate_t", file: !12, line: 93, baseType: !"_ZTSN11__mbstate_tUt_E", size: 32, align: 32, offset: 32)
!17 = !MDCompositeType(tag: DW_TAG_union_type, scope: !"_ZTS11__mbstate_t", file: !12, line: 85, size: 32, align: 32, elements: !18, identifier: "_ZTSN11__mbstate_tUt_E")
!18 = !{!19, !21}
!19 = !MDDerivedType(tag: DW_TAG_member, name: "__wch", scope: !"_ZTSN11__mbstate_tUt_E", file: !12, line: 88, baseType: !20, size: 32, align: 32)
!20 = !MDBasicType(name: "unsigned int", size: 32, align: 32, encoding: DW_ATE_unsigned)
!21 = !MDDerivedType(tag: DW_TAG_member, name: "__wchb", scope: !"_ZTSN11__mbstate_tUt_E", file: !12, line: 92, baseType: !22, size: 32, align: 8)
!22 = !MDCompositeType(tag: DW_TAG_array_type, baseType: !23, size: 32, align: 8, elements: !24)
!23 = !MDBasicType(name: "char", size: 8, align: 8, encoding: DW_ATE_signed_char)
!24 = !{!25}
!25 = !MDSubrange(count: 4)
!26 = !MDCompositeType(tag: DW_TAG_structure_type, name: "_IO_FILE", file: !27, line: 241, size: 1728, align: 64, flags: DIFlagFwdDecl, identifier: "_ZTS8_IO_FILE")
!27 = !MDFile(filename: "/usr/include/libio.h", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!28 = !MDCompositeType(tag: DW_TAG_structure_type, name: "__va_list_tag", file: !1, size: 192, align: 64, elements: !29, identifier: "_ZTS13__va_list_tag")
!29 = !{!30, !31, !32, !34}
!30 = !MDDerivedType(tag: DW_TAG_member, name: "gp_offset", scope: !"_ZTS13__va_list_tag", file: !1, baseType: !20, size: 32, align: 32)
!31 = !MDDerivedType(tag: DW_TAG_member, name: "fp_offset", scope: !"_ZTS13__va_list_tag", file: !1, baseType: !20, size: 32, align: 32, offset: 32)
!32 = !MDDerivedType(tag: DW_TAG_member, name: "overflow_arg_area", scope: !"_ZTS13__va_list_tag", file: !1, baseType: !33, size: 64, align: 64, offset: 64)
!33 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: null, size: 64, align: 64)
!34 = !MDDerivedType(tag: DW_TAG_member, name: "reg_save_area", scope: !"_ZTS13__va_list_tag", file: !1, baseType: !33, size: 64, align: 64, offset: 128)
!35 = !MDCompositeType(tag: DW_TAG_structure_type, name: "tm", file: !12, line: 137, flags: DIFlagFwdDecl, identifier: "_ZTS2tm")
!36 = !MDCompositeType(tag: DW_TAG_structure_type, name: "lconv", file: !37, line: 53, size: 768, align: 64, flags: DIFlagFwdDecl, identifier: "_ZTS5lconv")
!37 = !MDFile(filename: "/usr/include/locale.h", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!38 = !MDCompositeType(tag: DW_TAG_class_type, name: "ios_base", scope: !5, file: !39, line: 228, size: 1728, align: 64, flags: DIFlagFwdDecl, identifier: "_ZTSSt8ios_base")
!39 = !MDFile(filename: "/usr/lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/bits/ios_base.h", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!40 = !MDCompositeType(tag: DW_TAG_class_type, name: "Init", scope: !"_ZTSSt8ios_base", file: !39, line: 601, size: 8, align: 8, elements: !41, identifier: "_ZTSNSt8ios_base4InitE")
!41 = !{!42, !45, !47, !51}
!42 = !MDDerivedType(tag: DW_TAG_member, name: "_S_refcount", scope: !"_ZTSNSt8ios_base4InitE", file: !39, line: 609, baseType: !43, flags: DIFlagStaticMember)
!43 = !MDDerivedType(tag: DW_TAG_typedef, name: "_Atomic_word", file: !44, line: 32, baseType: !15)
!44 = !MDFile(filename: "/usr/lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/x86_64-linux-gnu/c++/5.4.0/bits/atomic_word.h", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!45 = !MDDerivedType(tag: DW_TAG_member, name: "_S_synced_with_stdio", scope: !"_ZTSNSt8ios_base4InitE", file: !39, line: 610, baseType: !46, flags: DIFlagStaticMember)
!46 = !MDBasicType(name: "bool", size: 8, align: 8, encoding: DW_ATE_boolean)
!47 = !MDSubprogram(name: "Init", scope: !"_ZTSNSt8ios_base4InitE", file: !39, line: 605, type: !48, isLocal: false, isDefinition: false, scopeLine: 605, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!48 = !MDSubroutineType(types: !49)
!49 = !{null, !50}
!50 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSNSt8ios_base4InitE", size: 64, align: 64, flags: DIFlagArtificial | DIFlagObjectPointer)
!51 = !MDSubprogram(name: "~Init", scope: !"_ZTSNSt8ios_base4InitE", file: !39, line: 606, type: !48, isLocal: false, isDefinition: false, scopeLine: 606, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!52 = !MDCompositeType(tag: DW_TAG_class_type, name: "map<std::__cxx11::basic_string<char>, int, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >", scope: !5, file: !53, line: 96, size: 384, align: 64, elements: !54, templateParams: !179, identifier: "_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE")
!53 = !MDFile(filename: "/usr/lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/bits/stl_map.h", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!54 = !{!55, !57, !61, !69, !74, !78, !82, !87, !92, !93, !94, !99, !104, !105, !106, !109, !116, !117, !125, !126, !131, !137, !140, !143, !146, !149, !152, !153, !157, !160, !163, !166, !169, !170, !171, !172, !173, !176}
!55 = !MDDerivedType(tag: DW_TAG_member, name: "_M_t", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 138, baseType: !56, size: 384, align: 64)
!56 = !MDDerivedType(tag: DW_TAG_typedef, name: "_Rep_type", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 135, baseType: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE")
!57 = !MDSubprogram(name: "map", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 162, type: !58, isLocal: false, isDefinition: false, scopeLine: 162, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!58 = !MDSubroutineType(types: !59)
!59 = !{null, !60}
!60 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", size: 64, align: 64, flags: DIFlagArtificial | DIFlagObjectPointer)
!61 = !MDSubprogram(name: "map", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 174, type: !62, isLocal: false, isDefinition: false, scopeLine: 174, flags: DIFlagPublic | DIFlagExplicit | DIFlagPrototyped, isOptimized: false)
!62 = !MDSubroutineType(types: !63)
!63 = !{null, !60, !64, !66}
!64 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !65)
!65 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !"_ZTSSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE")
!66 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !67)
!67 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !68)
!68 = !MDDerivedType(tag: DW_TAG_typedef, name: "allocator_type", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 103, baseType: !"_ZTSSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE")
!69 = !MDSubprogram(name: "map", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 185, type: !70, isLocal: false, isDefinition: false, scopeLine: 185, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!70 = !MDSubroutineType(types: !71)
!71 = !{null, !60, !72}
!72 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !73)
!73 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE")
!74 = !MDSubprogram(name: "operator=", linkageName: "_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEEaSERKSC_", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 296, type: !75, isLocal: false, isDefinition: false, scopeLine: 296, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!75 = !MDSubroutineType(types: !76)
!76 = !{!77, !60, !72}
!77 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE")
!78 = !MDSubprogram(name: "get_allocator", linkageName: "_ZNKSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE13get_allocatorEv", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 328, type: !79, isLocal: false, isDefinition: false, scopeLine: 328, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!79 = !MDSubroutineType(types: !80)
!80 = !{!68, !81}
!81 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !73, size: 64, align: 64, flags: DIFlagArtificial | DIFlagObjectPointer)
!82 = !MDSubprogram(name: "begin", linkageName: "_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE5beginEv", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 338, type: !83, isLocal: false, isDefinition: false, scopeLine: 338, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!83 = !MDSubroutineType(types: !84)
!84 = !{!85, !60}
!85 = !MDDerivedType(tag: DW_TAG_typedef, name: "iterator", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 149, baseType: !86)
!86 = !MDDerivedType(tag: DW_TAG_typedef, name: "iterator", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 718, baseType: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE")
!87 = !MDSubprogram(name: "begin", linkageName: "_ZNKSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE5beginEv", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 347, type: !88, isLocal: false, isDefinition: false, scopeLine: 347, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!88 = !MDSubroutineType(types: !89)
!89 = !{!90, !81}
!90 = !MDDerivedType(tag: DW_TAG_typedef, name: "const_iterator", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 150, baseType: !91)
!91 = !MDDerivedType(tag: DW_TAG_typedef, name: "const_iterator", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 719, baseType: !"_ZTSSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE")
!92 = !MDSubprogram(name: "end", linkageName: "_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE3endEv", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 356, type: !83, isLocal: false, isDefinition: false, scopeLine: 356, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!93 = !MDSubprogram(name: "end", linkageName: "_ZNKSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE3endEv", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 365, type: !88, isLocal: false, isDefinition: false, scopeLine: 365, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!94 = !MDSubprogram(name: "rbegin", linkageName: "_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE6rbeginEv", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 374, type: !95, isLocal: false, isDefinition: false, scopeLine: 374, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!95 = !MDSubroutineType(types: !96)
!96 = !{!97, !60}
!97 = !MDDerivedType(tag: DW_TAG_typedef, name: "reverse_iterator", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 153, baseType: !98)
!98 = !MDDerivedType(tag: DW_TAG_typedef, name: "reverse_iterator", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 721, baseType: !"_ZTSSt16reverse_iteratorISt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE")
!99 = !MDSubprogram(name: "rbegin", linkageName: "_ZNKSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE6rbeginEv", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 383, type: !100, isLocal: false, isDefinition: false, scopeLine: 383, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!100 = !MDSubroutineType(types: !101)
!101 = !{!102, !81}
!102 = !MDDerivedType(tag: DW_TAG_typedef, name: "const_reverse_iterator", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 154, baseType: !103)
!103 = !MDDerivedType(tag: DW_TAG_typedef, name: "const_reverse_iterator", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 722, baseType: !"_ZTSSt16reverse_iteratorISt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE")
!104 = !MDSubprogram(name: "rend", linkageName: "_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE4rendEv", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 392, type: !95, isLocal: false, isDefinition: false, scopeLine: 392, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!105 = !MDSubprogram(name: "rend", linkageName: "_ZNKSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE4rendEv", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 401, type: !100, isLocal: false, isDefinition: false, scopeLine: 401, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!106 = !MDSubprogram(name: "empty", linkageName: "_ZNKSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE5emptyEv", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 447, type: !107, isLocal: false, isDefinition: false, scopeLine: 447, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!107 = !MDSubroutineType(types: !108)
!108 = !{!46, !81}
!109 = !MDSubprogram(name: "size", linkageName: "_ZNKSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE4sizeEv", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 452, type: !110, isLocal: false, isDefinition: false, scopeLine: 452, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!110 = !MDSubroutineType(types: !111)
!111 = !{!112, !81}
!112 = !MDDerivedType(tag: DW_TAG_typedef, name: "size_type", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 151, baseType: !113)
!113 = !MDDerivedType(tag: DW_TAG_typedef, name: "size_type", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 472, baseType: !114)
!114 = !MDDerivedType(tag: DW_TAG_typedef, name: "size_t", scope: !5, file: !6, line: 196, baseType: !115)
!115 = !MDBasicType(name: "long unsigned int", size: 64, align: 64, encoding: DW_ATE_unsigned)
!116 = !MDSubprogram(name: "max_size", linkageName: "_ZNKSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE8max_sizeEv", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 457, type: !110, isLocal: false, isDefinition: false, scopeLine: 457, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!117 = !MDSubprogram(name: "operator[]", linkageName: "_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEEixERS9_", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 474, type: !118, isLocal: false, isDefinition: false, scopeLine: 474, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!118 = !MDSubroutineType(types: !119)
!119 = !{!120, !60, !122}
!120 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !121)
!121 = !MDDerivedType(tag: DW_TAG_typedef, name: "mapped_type", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 100, baseType: !15)
!122 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !123)
!123 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !124)
!124 = !MDDerivedType(tag: DW_TAG_typedef, name: "key_type", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 99, baseType: !"_ZTSNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE")
!125 = !MDSubprogram(name: "at", linkageName: "_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE2atERS9_", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 519, type: !118, isLocal: false, isDefinition: false, scopeLine: 519, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!126 = !MDSubprogram(name: "at", linkageName: "_ZNKSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE2atERS9_", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 528, type: !127, isLocal: false, isDefinition: false, scopeLine: 528, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!127 = !MDSubroutineType(types: !128)
!128 = !{!129, !81, !122}
!129 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !130)
!130 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !121)
!131 = !MDSubprogram(name: "insert", linkageName: "_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE6insertERKSA_", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 612, type: !132, isLocal: false, isDefinition: false, scopeLine: 612, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!132 = !MDSubroutineType(types: !133)
!133 = !{!"_ZTSSt4pairISt17_Rb_tree_iteratorIS_IKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEbE", !60, !134}
!134 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !135)
!135 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !136)
!136 = !MDDerivedType(tag: DW_TAG_typedef, name: "value_type", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 101, baseType: !"_ZTSSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiE")
!137 = !MDSubprogram(name: "insert", linkageName: "_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE6insertESt17_Rb_tree_iteratorISA_ERKSA_", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 664, type: !138, isLocal: false, isDefinition: false, scopeLine: 664, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!138 = !MDSubroutineType(types: !139)
!139 = !{!85, !60, !85, !134}
!140 = !MDSubprogram(name: "erase", linkageName: "_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE5eraseESt17_Rb_tree_iteratorISA_E", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 728, type: !141, isLocal: false, isDefinition: false, scopeLine: 728, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!141 = !MDSubroutineType(types: !142)
!142 = !{null, !60, !85}
!143 = !MDSubprogram(name: "erase", linkageName: "_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE5eraseERS9_", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 744, type: !144, isLocal: false, isDefinition: false, scopeLine: 744, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!144 = !MDSubroutineType(types: !145)
!145 = !{!112, !60, !122}
!146 = !MDSubprogram(name: "erase", linkageName: "_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE5eraseESt17_Rb_tree_iteratorISA_ESE_", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 780, type: !147, isLocal: false, isDefinition: false, scopeLine: 780, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!147 = !MDSubroutineType(types: !148)
!148 = !{null, !60, !85, !85}
!149 = !MDSubprogram(name: "swap", linkageName: "_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE4swapERSC_", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 796, type: !150, isLocal: false, isDefinition: false, scopeLine: 796, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!150 = !MDSubroutineType(types: !151)
!151 = !{null, !60, !77}
!152 = !MDSubprogram(name: "clear", linkageName: "_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE5clearEv", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 809, type: !58, isLocal: false, isDefinition: false, scopeLine: 809, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!153 = !MDSubprogram(name: "key_comp", linkageName: "_ZNKSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE8key_compEv", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 818, type: !154, isLocal: false, isDefinition: false, scopeLine: 818, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!154 = !MDSubroutineType(types: !155)
!155 = !{!156, !81}
!156 = !MDDerivedType(tag: DW_TAG_typedef, name: "key_compare", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 102, baseType: !"_ZTSSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE")
!157 = !MDSubprogram(name: "value_comp", linkageName: "_ZNKSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE10value_compEv", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 826, type: !158, isLocal: false, isDefinition: false, scopeLine: 826, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!158 = !MDSubroutineType(types: !159)
!159 = !{!"_ZTSNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE13value_compareE", !81}
!160 = !MDSubprogram(name: "find", linkageName: "_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE4findERS9_", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 845, type: !161, isLocal: false, isDefinition: false, scopeLine: 845, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!161 = !MDSubroutineType(types: !162)
!162 = !{!85, !60, !122}
!163 = !MDSubprogram(name: "find", linkageName: "_ZNKSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE4findERS9_", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 870, type: !164, isLocal: false, isDefinition: false, scopeLine: 870, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!164 = !MDSubroutineType(types: !165)
!165 = !{!90, !81, !122}
!166 = !MDSubprogram(name: "count", linkageName: "_ZNKSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE5countERS9_", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 891, type: !167, isLocal: false, isDefinition: false, scopeLine: 891, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!167 = !MDSubroutineType(types: !168)
!168 = !{!112, !81, !122}
!169 = !MDSubprogram(name: "lower_bound", linkageName: "_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE11lower_boundERS9_", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 915, type: !161, isLocal: false, isDefinition: false, scopeLine: 915, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!170 = !MDSubprogram(name: "lower_bound", linkageName: "_ZNKSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE11lower_boundERS9_", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 940, type: !164, isLocal: false, isDefinition: false, scopeLine: 940, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!171 = !MDSubprogram(name: "upper_bound", linkageName: "_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE11upper_boundERS9_", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 960, type: !161, isLocal: false, isDefinition: false, scopeLine: 960, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!172 = !MDSubprogram(name: "upper_bound", linkageName: "_ZNKSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE11upper_boundERS9_", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 980, type: !164, isLocal: false, isDefinition: false, scopeLine: 980, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!173 = !MDSubprogram(name: "equal_range", linkageName: "_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE11equal_rangeERS9_", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 1009, type: !174, isLocal: false, isDefinition: false, scopeLine: 1009, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!174 = !MDSubroutineType(types: !175)
!175 = !{!"_ZTSSt4pairISt17_Rb_tree_iteratorIS_IKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEES9_E", !60, !122}
!176 = !MDSubprogram(name: "equal_range", linkageName: "_ZNKSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE11equal_rangeERS9_", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 1038, type: !177, isLocal: false, isDefinition: false, scopeLine: 1038, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!177 = !MDSubroutineType(types: !178)
!178 = !{!"_ZTSSt4pairISt23_Rb_tree_const_iteratorIS_IKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEES9_E", !81, !122}
!179 = !{!180, !181, !182, !183}
!180 = !MDTemplateTypeParameter(name: "_Key", type: !"_ZTSNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE")
!181 = !MDTemplateTypeParameter(name: "_Tp", type: !15)
!182 = !MDTemplateTypeParameter(name: "_Compare", type: !"_ZTSSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE")
!183 = !MDTemplateTypeParameter(name: "_Alloc", type: !"_ZTSSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE")
!184 = !MDCompositeType(tag: DW_TAG_class_type, name: "basic_string<char, std::char_traits<char>, std::allocator<char> >", scope: !186, file: !185, line: 1577, size: 256, align: 64, flags: DIFlagFwdDecl, identifier: "_ZTSNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE")
!185 = !MDFile(filename: "/usr/lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/bits/basic_string.tcc", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!186 = !MDNamespace(name: "__cxx11", scope: !5, file: !6, line: 218)
!187 = !MDCompositeType(tag: DW_TAG_structure_type, name: "less<std::__cxx11::basic_string<char> >", scope: !5, file: !188, line: 382, size: 8, align: 8, elements: !189, templateParams: !197, identifier: "_ZTSSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE")
!188 = !MDFile(filename: "/usr/lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/bits/stl_function.h", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!189 = !{!190, !191}
!190 = !MDDerivedType(tag: DW_TAG_inheritance, scope: !"_ZTSSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE", baseType: !"_ZTSSt15binary_functionINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES5_bE")
!191 = !MDSubprogram(name: "operator()", linkageName: "_ZNKSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEclERKS5_S8_", scope: !"_ZTSSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE", file: !188, line: 386, type: !192, isLocal: false, isDefinition: false, scopeLine: 386, flags: DIFlagPrototyped, isOptimized: false)
!192 = !MDSubroutineType(types: !193)
!193 = !{!46, !194, !195, !195}
!194 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !65, size: 64, align: 64, flags: DIFlagArtificial | DIFlagObjectPointer)
!195 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !196)
!196 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !"_ZTSNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE")
!197 = !{!198}
!198 = !MDTemplateTypeParameter(name: "_Tp", type: !"_ZTSNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE")
!199 = !MDCompositeType(tag: DW_TAG_structure_type, name: "binary_function<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char>, bool>", scope: !5, file: !188, line: 118, size: 8, align: 8, elements: !200, templateParams: !201, identifier: "_ZTSSt15binary_functionINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES5_bE")
!200 = !{}
!201 = !{!202, !203, !204}
!202 = !MDTemplateTypeParameter(name: "_Arg1", type: !"_ZTSNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE")
!203 = !MDTemplateTypeParameter(name: "_Arg2", type: !"_ZTSNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE")
!204 = !MDTemplateTypeParameter(name: "_Result", type: !46)
!205 = !MDCompositeType(tag: DW_TAG_class_type, name: "allocator<std::pair<const std::__cxx11::basic_string<char>, int> >", scope: !5, file: !206, line: 92, size: 8, align: 8, elements: !207, templateParams: !219, identifier: "_ZTSSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE")
!206 = !MDFile(filename: "/usr/lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/bits/allocator.h", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!207 = !{!208, !209, !213, !218}
!208 = !MDDerivedType(tag: DW_TAG_inheritance, scope: !"_ZTSSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", baseType: !"_ZTSN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", flags: DIFlagPublic)
!209 = !MDSubprogram(name: "allocator", scope: !"_ZTSSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !206, line: 113, type: !210, isLocal: false, isDefinition: false, scopeLine: 113, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!210 = !MDSubroutineType(types: !211)
!211 = !{null, !212}
!212 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", size: 64, align: 64, flags: DIFlagArtificial | DIFlagObjectPointer)
!213 = !MDSubprogram(name: "allocator", scope: !"_ZTSSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !206, line: 115, type: !214, isLocal: false, isDefinition: false, scopeLine: 115, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!214 = !MDSubroutineType(types: !215)
!215 = !{null, !212, !216}
!216 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !217)
!217 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !"_ZTSSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE")
!218 = !MDSubprogram(name: "~allocator", scope: !"_ZTSSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !206, line: 121, type: !210, isLocal: false, isDefinition: false, scopeLine: 121, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!219 = !{!220}
!220 = !MDTemplateTypeParameter(name: "_Tp", type: !"_ZTSSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiE")
!221 = !MDCompositeType(tag: DW_TAG_structure_type, name: "pair<const std::__cxx11::basic_string<char>, int>", scope: !5, file: !222, line: 96, size: 320, align: 64, elements: !223, templateParams: !235, identifier: "_ZTSSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiE")
!222 = !MDFile(filename: "/usr/lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/bits/stl_pair.h", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!223 = !{!224, !225, !226, !230}
!224 = !MDDerivedType(tag: DW_TAG_member, name: "first", scope: !"_ZTSSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiE", file: !222, line: 101, baseType: !196, size: 256, align: 64)
!225 = !MDDerivedType(tag: DW_TAG_member, name: "second", scope: !"_ZTSSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiE", file: !222, line: 102, baseType: !15, size: 32, align: 32, offset: 256)
!226 = !MDSubprogram(name: "pair", scope: !"_ZTSSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiE", file: !222, line: 108, type: !227, isLocal: false, isDefinition: false, scopeLine: 108, flags: DIFlagPrototyped, isOptimized: false)
!227 = !MDSubroutineType(types: !228)
!228 = !{null, !229}
!229 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiE", size: 64, align: 64, flags: DIFlagArtificial | DIFlagObjectPointer)
!230 = !MDSubprogram(name: "pair", scope: !"_ZTSSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiE", file: !222, line: 112, type: !231, isLocal: false, isDefinition: false, scopeLine: 112, flags: DIFlagPrototyped, isOptimized: false)
!231 = !MDSubroutineType(types: !232)
!232 = !{null, !229, !195, !233}
!233 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !234)
!234 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !15)
!235 = !{!236, !237}
!236 = !MDTemplateTypeParameter(name: "_T1", type: !196)
!237 = !MDTemplateTypeParameter(name: "_T2", type: !15)
!238 = !MDCompositeType(tag: DW_TAG_class_type, name: "new_allocator<std::pair<const std::__cxx11::basic_string<char>, int> >", scope: !240, file: !239, line: 58, size: 8, align: 8, elements: !241, templateParams: !219, identifier: "_ZTSN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE")
!239 = !MDFile(filename: "/usr/lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/ext/new_allocator.h", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!240 = !MDNamespace(name: "__gnu_cxx", scope: null, file: !6, line: 220)
!241 = !{!242, !246, !251, !252, !260, !268, !274, !277, !280, !283}
!242 = !MDSubprogram(name: "new_allocator", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", file: !239, line: 79, type: !243, isLocal: false, isDefinition: false, scopeLine: 79, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!243 = !MDSubroutineType(types: !244)
!244 = !{null, !245}
!245 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", size: 64, align: 64, flags: DIFlagArtificial | DIFlagObjectPointer)
!246 = !MDSubprogram(name: "new_allocator", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", file: !239, line: 81, type: !247, isLocal: false, isDefinition: false, scopeLine: 81, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!247 = !MDSubroutineType(types: !248)
!248 = !{null, !245, !249}
!249 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !250)
!250 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !"_ZTSN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE")
!251 = !MDSubprogram(name: "~new_allocator", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", file: !239, line: 86, type: !243, isLocal: false, isDefinition: false, scopeLine: 86, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!252 = !MDSubprogram(name: "address", linkageName: "_ZNK9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE7addressERS9_", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", file: !239, line: 89, type: !253, isLocal: false, isDefinition: false, scopeLine: 89, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!253 = !MDSubroutineType(types: !254)
!254 = !{!255, !257, !258}
!255 = !MDDerivedType(tag: DW_TAG_typedef, name: "pointer", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", file: !239, line: 63, baseType: !256)
!256 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiE", size: 64, align: 64)
!257 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !250, size: 64, align: 64, flags: DIFlagArtificial | DIFlagObjectPointer)
!258 = !MDDerivedType(tag: DW_TAG_typedef, name: "reference", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", file: !239, line: 65, baseType: !259)
!259 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !"_ZTSSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiE")
!260 = !MDSubprogram(name: "address", linkageName: "_ZNK9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE7addressERKS9_", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", file: !239, line: 93, type: !261, isLocal: false, isDefinition: false, scopeLine: 93, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!261 = !MDSubroutineType(types: !262)
!262 = !{!263, !257, !266}
!263 = !MDDerivedType(tag: DW_TAG_typedef, name: "const_pointer", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", file: !239, line: 64, baseType: !264)
!264 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !265, size: 64, align: 64)
!265 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !"_ZTSSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiE")
!266 = !MDDerivedType(tag: DW_TAG_typedef, name: "const_reference", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", file: !239, line: 66, baseType: !267)
!267 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !265)
!268 = !MDSubprogram(name: "allocate", linkageName: "_ZN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE8allocateEmPKv", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", file: !239, line: 99, type: !269, isLocal: false, isDefinition: false, scopeLine: 99, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!269 = !MDSubroutineType(types: !270)
!270 = !{!255, !245, !271, !272}
!271 = !MDDerivedType(tag: DW_TAG_typedef, name: "size_type", file: !239, line: 61, baseType: !114)
!272 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !273, size: 64, align: 64)
!273 = !MDDerivedType(tag: DW_TAG_const_type, baseType: null)
!274 = !MDSubprogram(name: "deallocate", linkageName: "_ZN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE10deallocateEPS9_m", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", file: !239, line: 109, type: !275, isLocal: false, isDefinition: false, scopeLine: 109, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!275 = !MDSubroutineType(types: !276)
!276 = !{null, !245, !255, !271}
!277 = !MDSubprogram(name: "max_size", linkageName: "_ZNK9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE8max_sizeEv", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", file: !239, line: 113, type: !278, isLocal: false, isDefinition: false, scopeLine: 113, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!278 = !MDSubroutineType(types: !279)
!279 = !{!271, !257}
!280 = !MDSubprogram(name: "construct", linkageName: "_ZN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE9constructEPS9_RKS9_", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", file: !239, line: 129, type: !281, isLocal: false, isDefinition: false, scopeLine: 129, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!281 = !MDSubroutineType(types: !282)
!282 = !{null, !245, !255, !267}
!283 = !MDSubprogram(name: "destroy", linkageName: "_ZN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE7destroyEPS9_", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", file: !239, line: 133, type: !284, isLocal: false, isDefinition: false, scopeLine: 133, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!284 = !MDSubroutineType(types: !285)
!285 = !{null, !245, !255}
!286 = !MDCompositeType(tag: DW_TAG_class_type, name: "_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >", scope: !5, file: !4, line: 347, size: 384, align: 64, elements: !287, templateParams: !508, identifier: "_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE")
!287 = !{!288, !289, !298, !305, !309, !314, !317, !323, !326, !327, !328, !334, !340, !341, !342, !343, !344, !345, !351, !352, !353, !357, !360, !363, !366, !367, !368, !371, !374, !377, !380, !381, !382, !388, !389, !392, !393, !396, !399, !402, !403, !406, !409, !410, !411, !414, !419, !423, !424, !428, !431, !434, !437, !438, !439, !442, !445, !446, !447, !450, !454, !455, !458, !461, !462, !465, !466, !469, !472, !475, !476, !479, !482, !483, !487, !488, !491, !494, !497, !498, !499, !500, !501, !504, !507}
!288 = !MDDerivedType(tag: DW_TAG_member, name: "_M_impl", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 623, baseType: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EEE", size: 384, align: 64, flags: DIFlagProtected)
!289 = !MDSubprogram(name: "_M_get_Node_allocator", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE21_M_get_Node_allocatorEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 477, type: !290, isLocal: false, isDefinition: false, scopeLine: 477, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!290 = !MDSubroutineType(types: !291)
!291 = !{!292, !297}
!292 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !293)
!293 = !MDDerivedType(tag: DW_TAG_typedef, name: "_Node_allocator", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 350, baseType: !294)
!294 = !MDDerivedType(tag: DW_TAG_typedef, name: "other", scope: !"_ZTSN9__gnu_cxx14__alloc_traitsISaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE6rebindISt13_Rb_tree_nodeIS9_EEE", file: !295, line: 208, baseType: !296)
!295 = !MDFile(filename: "/usr/lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/ext/alloc_traits.h", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!296 = !MDDerivedType(tag: DW_TAG_typedef, name: "other", scope: !"_ZTSNSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE6rebindISt13_Rb_tree_nodeIS7_EEE", file: !206, line: 105, baseType: !"_ZTSSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE")
!297 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", size: 64, align: 64, flags: DIFlagArtificial | DIFlagObjectPointer)
!298 = !MDSubprogram(name: "_M_get_Node_allocator", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE21_M_get_Node_allocatorEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 481, type: !299, isLocal: false, isDefinition: false, scopeLine: 481, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!299 = !MDSubroutineType(types: !300)
!300 = !{!301, !303}
!301 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !302)
!302 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !293)
!303 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !304, size: 64, align: 64, flags: DIFlagArtificial | DIFlagObjectPointer)
!304 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE")
!305 = !MDSubprogram(name: "get_allocator", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13get_allocatorEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 485, type: !306, isLocal: false, isDefinition: false, scopeLine: 485, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!306 = !MDSubroutineType(types: !307)
!307 = !{!308, !303}
!308 = !MDDerivedType(tag: DW_TAG_typedef, name: "allocator_type", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 474, baseType: !"_ZTSSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE")
!309 = !MDSubprogram(name: "_M_get_node", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_M_get_nodeEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 490, type: !310, isLocal: false, isDefinition: false, scopeLine: 490, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!310 = !MDSubroutineType(types: !311)
!311 = !{!312, !297}
!312 = !MDDerivedType(tag: DW_TAG_typedef, name: "_Link_type", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 357, baseType: !313)
!313 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", size: 64, align: 64)
!314 = !MDSubprogram(name: "_M_put_node", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS8_E", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 494, type: !315, isLocal: false, isDefinition: false, scopeLine: 494, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!315 = !MDSubroutineType(types: !316)
!316 = !{null, !297, !312}
!317 = !MDSubprogram(name: "_M_construct_node", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE17_M_construct_nodeEPSt13_Rb_tree_nodeIS8_ERKS8_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 499, type: !318, isLocal: false, isDefinition: false, scopeLine: 499, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!318 = !MDSubroutineType(types: !319)
!319 = !{null, !297, !312, !320}
!320 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !321)
!321 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !322)
!322 = !MDDerivedType(tag: DW_TAG_typedef, name: "value_type", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 467, baseType: !"_ZTSSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiE")
!323 = !MDSubprogram(name: "_M_create_node", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE14_M_create_nodeERKS8_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 511, type: !324, isLocal: false, isDefinition: false, scopeLine: 511, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!324 = !MDSubroutineType(types: !325)
!325 = !{!312, !297, !320}
!326 = !MDSubprogram(name: "_M_destroy_node", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS8_E", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 519, type: !315, isLocal: false, isDefinition: false, scopeLine: 519, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!327 = !MDSubprogram(name: "_M_drop_node", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS8_E", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 559, type: !315, isLocal: false, isDefinition: false, scopeLine: 559, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!328 = !MDSubprogram(name: "_M_root", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE7_M_rootEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 627, type: !329, isLocal: false, isDefinition: false, scopeLine: 627, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!329 = !MDSubroutineType(types: !330)
!330 = !{!331, !297}
!331 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !332)
!332 = !MDDerivedType(tag: DW_TAG_typedef, name: "_Base_ptr", file: !4, line: 355, baseType: !333)
!333 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSSt18_Rb_tree_node_base", size: 64, align: 64)
!334 = !MDSubprogram(name: "_M_root", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE7_M_rootEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 631, type: !335, isLocal: false, isDefinition: false, scopeLine: 631, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!335 = !MDSubroutineType(types: !336)
!336 = !{!337, !303}
!337 = !MDDerivedType(tag: DW_TAG_typedef, name: "_Const_Base_ptr", file: !4, line: 356, baseType: !338)
!338 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !339, size: 64, align: 64)
!339 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !"_ZTSSt18_Rb_tree_node_base")
!340 = !MDSubprogram(name: "_M_leftmost", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_M_leftmostEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 635, type: !329, isLocal: false, isDefinition: false, scopeLine: 635, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!341 = !MDSubprogram(name: "_M_leftmost", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_M_leftmostEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 639, type: !335, isLocal: false, isDefinition: false, scopeLine: 639, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!342 = !MDSubprogram(name: "_M_rightmost", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE12_M_rightmostEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 643, type: !329, isLocal: false, isDefinition: false, scopeLine: 643, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!343 = !MDSubprogram(name: "_M_rightmost", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE12_M_rightmostEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 647, type: !335, isLocal: false, isDefinition: false, scopeLine: 647, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!344 = !MDSubprogram(name: "_M_begin", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_M_beginEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 651, type: !310, isLocal: false, isDefinition: false, scopeLine: 651, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!345 = !MDSubprogram(name: "_M_begin", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_M_beginEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 655, type: !346, isLocal: false, isDefinition: false, scopeLine: 655, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!346 = !MDSubroutineType(types: !347)
!347 = !{!348, !303}
!348 = !MDDerivedType(tag: DW_TAG_typedef, name: "_Const_Link_type", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 358, baseType: !349)
!349 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !350, size: 64, align: 64)
!350 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !"_ZTSSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE")
!351 = !MDSubprogram(name: "_M_end", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_M_endEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 662, type: !310, isLocal: false, isDefinition: false, scopeLine: 662, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!352 = !MDSubprogram(name: "_M_end", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_M_endEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 666, type: !346, isLocal: false, isDefinition: false, scopeLine: 666, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!353 = !MDSubprogram(name: "_S_value", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_S_valueEPKSt13_Rb_tree_nodeIS8_E", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 670, type: !354, isLocal: false, isDefinition: false, scopeLine: 670, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!354 = !MDSubroutineType(types: !355)
!355 = !{!356, !348}
!356 = !MDDerivedType(tag: DW_TAG_typedef, name: "const_reference", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 471, baseType: !320)
!357 = !MDSubprogram(name: "_S_key", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_S_keyEPKSt13_Rb_tree_nodeIS8_E", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 674, type: !358, isLocal: false, isDefinition: false, scopeLine: 674, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!358 = !MDSubroutineType(types: !359)
!359 = !{!195, !348}
!360 = !MDSubprogram(name: "_S_left", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE7_S_leftEPSt18_Rb_tree_node_base", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 678, type: !361, isLocal: false, isDefinition: false, scopeLine: 678, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!361 = !MDSubroutineType(types: !362)
!362 = !{!312, !332}
!363 = !MDSubprogram(name: "_S_left", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE7_S_leftEPKSt18_Rb_tree_node_base", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 682, type: !364, isLocal: false, isDefinition: false, scopeLine: 682, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!364 = !MDSubroutineType(types: !365)
!365 = !{!348, !337}
!366 = !MDSubprogram(name: "_S_right", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_S_rightEPSt18_Rb_tree_node_base", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 686, type: !361, isLocal: false, isDefinition: false, scopeLine: 686, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!367 = !MDSubprogram(name: "_S_right", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_S_rightEPKSt18_Rb_tree_node_base", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 690, type: !364, isLocal: false, isDefinition: false, scopeLine: 690, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!368 = !MDSubprogram(name: "_S_value", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_S_valueEPKSt18_Rb_tree_node_base", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 694, type: !369, isLocal: false, isDefinition: false, scopeLine: 694, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!369 = !MDSubroutineType(types: !370)
!370 = !{!356, !337}
!371 = !MDSubprogram(name: "_S_key", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_S_keyEPKSt18_Rb_tree_node_base", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 698, type: !372, isLocal: false, isDefinition: false, scopeLine: 698, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!372 = !MDSubroutineType(types: !373)
!373 = !{!195, !337}
!374 = !MDSubprogram(name: "_S_minimum", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE10_S_minimumEPSt18_Rb_tree_node_base", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 702, type: !375, isLocal: false, isDefinition: false, scopeLine: 702, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!375 = !MDSubroutineType(types: !376)
!376 = !{!332, !332}
!377 = !MDSubprogram(name: "_S_minimum", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE10_S_minimumEPKSt18_Rb_tree_node_base", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 706, type: !378, isLocal: false, isDefinition: false, scopeLine: 706, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!378 = !MDSubroutineType(types: !379)
!379 = !{!337, !337}
!380 = !MDSubprogram(name: "_S_maximum", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE10_S_maximumEPSt18_Rb_tree_node_base", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 710, type: !375, isLocal: false, isDefinition: false, scopeLine: 710, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!381 = !MDSubprogram(name: "_S_maximum", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE10_S_maximumEPKSt18_Rb_tree_node_base", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 714, type: !378, isLocal: false, isDefinition: false, scopeLine: 714, flags: DIFlagProtected | DIFlagPrototyped, isOptimized: false)
!382 = !MDSubprogram(name: "_M_get_insert_unique_pos", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE24_M_get_insert_unique_posERS7_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 726, type: !383, isLocal: false, isDefinition: false, scopeLine: 726, flags: DIFlagPrototyped, isOptimized: false)
!383 = !MDSubroutineType(types: !384)
!384 = !{!"_ZTSSt4pairIPSt18_Rb_tree_node_baseS1_E", !297, !385}
!385 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !386)
!386 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !387)
!387 = !MDDerivedType(tag: DW_TAG_typedef, name: "key_type", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 466, baseType: !"_ZTSNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE")
!388 = !MDSubprogram(name: "_M_get_insert_equal_pos", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE23_M_get_insert_equal_posERS7_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 729, type: !383, isLocal: false, isDefinition: false, scopeLine: 729, flags: DIFlagPrototyped, isOptimized: false)
!389 = !MDSubprogram(name: "_M_get_insert_hint_unique_pos", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS8_ERS7_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 732, type: !390, isLocal: false, isDefinition: false, scopeLine: 732, flags: DIFlagPrototyped, isOptimized: false)
!390 = !MDSubroutineType(types: !391)
!391 = !{!"_ZTSSt4pairIPSt18_Rb_tree_node_baseS1_E", !297, !91, !385}
!392 = !MDSubprogram(name: "_M_get_insert_hint_equal_pos", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE28_M_get_insert_hint_equal_posESt23_Rb_tree_const_iteratorIS8_ERS7_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 736, type: !390, isLocal: false, isDefinition: false, scopeLine: 736, flags: DIFlagPrototyped, isOptimized: false)
!393 = !MDSubprogram(name: "_M_insert_lower", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE15_M_insert_lowerEPSt18_Rb_tree_node_baseRKS8_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 769, type: !394, isLocal: false, isDefinition: false, scopeLine: 769, flags: DIFlagPrototyped, isOptimized: false)
!394 = !MDSubroutineType(types: !395)
!395 = !{!86, !297, !332, !320}
!396 = !MDSubprogram(name: "_M_insert_equal_lower", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE21_M_insert_equal_lowerERKS8_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 772, type: !397, isLocal: false, isDefinition: false, scopeLine: 772, flags: DIFlagPrototyped, isOptimized: false)
!397 = !MDSubroutineType(types: !398)
!398 = !{!86, !297, !320}
!399 = !MDSubprogram(name: "_M_copy", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE7_M_copyEPKSt13_Rb_tree_nodeIS8_EPSG_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 780, type: !400, isLocal: false, isDefinition: false, scopeLine: 780, flags: DIFlagPrototyped, isOptimized: false)
!400 = !MDSubroutineType(types: !401)
!401 = !{!312, !297, !348, !312}
!402 = !MDSubprogram(name: "_M_erase", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_M_eraseEPSt13_Rb_tree_nodeIS8_E", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 787, type: !315, isLocal: false, isDefinition: false, scopeLine: 787, flags: DIFlagPrototyped, isOptimized: false)
!403 = !MDSubprogram(name: "_M_lower_bound", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE14_M_lower_boundEPSt13_Rb_tree_nodeIS8_ESH_RS7_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 790, type: !404, isLocal: false, isDefinition: false, scopeLine: 790, flags: DIFlagPrototyped, isOptimized: false)
!404 = !MDSubroutineType(types: !405)
!405 = !{!86, !297, !312, !312, !195}
!406 = !MDSubprogram(name: "_M_lower_bound", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE14_M_lower_boundEPKSt13_Rb_tree_nodeIS8_ESI_RS7_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 794, type: !407, isLocal: false, isDefinition: false, scopeLine: 794, flags: DIFlagPrototyped, isOptimized: false)
!407 = !MDSubroutineType(types: !408)
!408 = !{!91, !303, !348, !348, !195}
!409 = !MDSubprogram(name: "_M_upper_bound", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE14_M_upper_boundEPSt13_Rb_tree_nodeIS8_ESH_RS7_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 798, type: !404, isLocal: false, isDefinition: false, scopeLine: 798, flags: DIFlagPrototyped, isOptimized: false)
!410 = !MDSubprogram(name: "_M_upper_bound", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE14_M_upper_boundEPKSt13_Rb_tree_nodeIS8_ESI_RS7_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 802, type: !407, isLocal: false, isDefinition: false, scopeLine: 802, flags: DIFlagPrototyped, isOptimized: false)
!411 = !MDSubprogram(name: "_Rb_tree", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 807, type: !412, isLocal: false, isDefinition: false, scopeLine: 807, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!412 = !MDSubroutineType(types: !413)
!413 = !{null, !297}
!414 = !MDSubprogram(name: "_Rb_tree", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 809, type: !415, isLocal: false, isDefinition: false, scopeLine: 809, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!415 = !MDSubroutineType(types: !416)
!416 = !{null, !297, !64, !417}
!417 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !418)
!418 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !308)
!419 = !MDSubprogram(name: "_Rb_tree", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 813, type: !420, isLocal: false, isDefinition: false, scopeLine: 813, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!420 = !MDSubroutineType(types: !421)
!421 = !{null, !297, !422}
!422 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !304)
!423 = !MDSubprogram(name: "~_Rb_tree", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 857, type: !412, isLocal: false, isDefinition: false, scopeLine: 857, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!424 = !MDSubprogram(name: "operator=", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EEaSERKSE_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 861, type: !425, isLocal: false, isDefinition: false, scopeLine: 861, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!425 = !MDSubroutineType(types: !426)
!426 = !{!427, !297, !422}
!427 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE")
!428 = !MDSubprogram(name: "key_comp", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8key_compEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 865, type: !429, isLocal: false, isDefinition: false, scopeLine: 865, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!429 = !MDSubroutineType(types: !430)
!430 = !{!"_ZTSSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE", !303}
!431 = !MDSubprogram(name: "begin", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE5beginEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 869, type: !432, isLocal: false, isDefinition: false, scopeLine: 869, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!432 = !MDSubroutineType(types: !433)
!433 = !{!86, !297}
!434 = !MDSubprogram(name: "begin", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE5beginEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 873, type: !435, isLocal: false, isDefinition: false, scopeLine: 873, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!435 = !MDSubroutineType(types: !436)
!436 = !{!91, !303}
!437 = !MDSubprogram(name: "end", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE3endEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 877, type: !432, isLocal: false, isDefinition: false, scopeLine: 877, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!438 = !MDSubprogram(name: "end", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE3endEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 881, type: !435, isLocal: false, isDefinition: false, scopeLine: 881, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!439 = !MDSubprogram(name: "rbegin", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6rbeginEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 885, type: !440, isLocal: false, isDefinition: false, scopeLine: 885, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!440 = !MDSubroutineType(types: !441)
!441 = !{!98, !297}
!442 = !MDSubprogram(name: "rbegin", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6rbeginEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 889, type: !443, isLocal: false, isDefinition: false, scopeLine: 889, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!443 = !MDSubroutineType(types: !444)
!444 = !{!103, !303}
!445 = !MDSubprogram(name: "rend", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE4rendEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 893, type: !440, isLocal: false, isDefinition: false, scopeLine: 893, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!446 = !MDSubprogram(name: "rend", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE4rendEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 897, type: !443, isLocal: false, isDefinition: false, scopeLine: 897, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!447 = !MDSubprogram(name: "empty", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE5emptyEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 901, type: !448, isLocal: false, isDefinition: false, scopeLine: 901, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!448 = !MDSubroutineType(types: !449)
!449 = !{!46, !303}
!450 = !MDSubprogram(name: "size", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE4sizeEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 905, type: !451, isLocal: false, isDefinition: false, scopeLine: 905, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!451 = !MDSubroutineType(types: !452)
!452 = !{!453, !303}
!453 = !MDDerivedType(tag: DW_TAG_typedef, name: "size_type", file: !4, line: 472, baseType: !114)
!454 = !MDSubprogram(name: "max_size", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8max_sizeEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 909, type: !451, isLocal: false, isDefinition: false, scopeLine: 909, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!455 = !MDSubprogram(name: "swap", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE4swapERSE_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 916, type: !456, isLocal: false, isDefinition: false, scopeLine: 916, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!456 = !MDSubroutineType(types: !457)
!457 = !{null, !297, !427}
!458 = !MDSubprogram(name: "_M_insert_unique", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE16_M_insert_uniqueERKS8_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 970, type: !459, isLocal: false, isDefinition: false, scopeLine: 970, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!459 = !MDSubroutineType(types: !460)
!460 = !{!"_ZTSSt4pairISt17_Rb_tree_iteratorIS_IKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEbE", !297, !320}
!461 = !MDSubprogram(name: "_M_insert_equal", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE15_M_insert_equalERKS8_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 973, type: !397, isLocal: false, isDefinition: false, scopeLine: 973, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!462 = !MDSubprogram(name: "_M_insert_unique_", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE17_M_insert_unique_ESt23_Rb_tree_const_iteratorIS8_ERKS8_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 981, type: !463, isLocal: false, isDefinition: false, scopeLine: 981, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!463 = !MDSubroutineType(types: !464)
!464 = !{!86, !297, !91, !320}
!465 = !MDSubprogram(name: "_M_insert_equal_", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE16_M_insert_equal_ESt23_Rb_tree_const_iteratorIS8_ERKS8_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 992, type: !463, isLocal: false, isDefinition: false, scopeLine: 992, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!466 = !MDSubprogram(name: "_M_erase_aux", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE12_M_erase_auxESt23_Rb_tree_const_iteratorIS8_E", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1009, type: !467, isLocal: false, isDefinition: false, scopeLine: 1009, flags: DIFlagPrototyped, isOptimized: false)
!467 = !MDSubroutineType(types: !468)
!468 = !{null, !297, !91}
!469 = !MDSubprogram(name: "_M_erase_aux", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE12_M_erase_auxESt23_Rb_tree_const_iteratorIS8_ESG_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1012, type: !470, isLocal: false, isDefinition: false, scopeLine: 1012, flags: DIFlagPrototyped, isOptimized: false)
!470 = !MDSubroutineType(types: !471)
!471 = !{null, !297, !91, !91}
!472 = !MDSubprogram(name: "erase", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE5eraseESt17_Rb_tree_iteratorIS8_E", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1040, type: !473, isLocal: false, isDefinition: false, scopeLine: 1040, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!473 = !MDSubroutineType(types: !474)
!474 = !{null, !297, !86}
!475 = !MDSubprogram(name: "erase", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE5eraseESt23_Rb_tree_const_iteratorIS8_E", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1044, type: !467, isLocal: false, isDefinition: false, scopeLine: 1044, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!476 = !MDSubprogram(name: "erase", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE5eraseERS7_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1048, type: !477, isLocal: false, isDefinition: false, scopeLine: 1048, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!477 = !MDSubroutineType(types: !478)
!478 = !{!113, !297, !385}
!479 = !MDSubprogram(name: "erase", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE5eraseESt17_Rb_tree_iteratorIS8_ESG_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1062, type: !480, isLocal: false, isDefinition: false, scopeLine: 1062, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!480 = !MDSubroutineType(types: !481)
!481 = !{null, !297, !86, !86}
!482 = !MDSubprogram(name: "erase", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE5eraseESt23_Rb_tree_const_iteratorIS8_ESG_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1066, type: !470, isLocal: false, isDefinition: false, scopeLine: 1066, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!483 = !MDSubprogram(name: "erase", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE5eraseEPS7_SF_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1070, type: !484, isLocal: false, isDefinition: false, scopeLine: 1070, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!484 = !MDSubroutineType(types: !485)
!485 = !{null, !297, !486, !486}
!486 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !386, size: 64, align: 64)
!487 = !MDSubprogram(name: "clear", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE5clearEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1073, type: !412, isLocal: false, isDefinition: false, scopeLine: 1073, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!488 = !MDSubprogram(name: "find", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE4findERS7_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1081, type: !489, isLocal: false, isDefinition: false, scopeLine: 1081, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!489 = !MDSubroutineType(types: !490)
!490 = !{!86, !297, !385}
!491 = !MDSubprogram(name: "find", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE4findERS7_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1084, type: !492, isLocal: false, isDefinition: false, scopeLine: 1084, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!492 = !MDSubroutineType(types: !493)
!493 = !{!91, !303, !385}
!494 = !MDSubprogram(name: "count", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE5countERS7_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1087, type: !495, isLocal: false, isDefinition: false, scopeLine: 1087, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!495 = !MDSubroutineType(types: !496)
!496 = !{!113, !303, !385}
!497 = !MDSubprogram(name: "lower_bound", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11lower_boundERS7_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1090, type: !489, isLocal: false, isDefinition: false, scopeLine: 1090, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!498 = !MDSubprogram(name: "lower_bound", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11lower_boundERS7_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1094, type: !492, isLocal: false, isDefinition: false, scopeLine: 1094, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!499 = !MDSubprogram(name: "upper_bound", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11upper_boundERS7_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1098, type: !489, isLocal: false, isDefinition: false, scopeLine: 1098, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!500 = !MDSubprogram(name: "upper_bound", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11upper_boundERS7_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1102, type: !492, isLocal: false, isDefinition: false, scopeLine: 1102, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!501 = !MDSubprogram(name: "equal_range", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11equal_rangeERS7_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1106, type: !502, isLocal: false, isDefinition: false, scopeLine: 1106, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!502 = !MDSubroutineType(types: !503)
!503 = !{!"_ZTSSt4pairISt17_Rb_tree_iteratorIS_IKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEES9_E", !297, !385}
!504 = !MDSubprogram(name: "equal_range", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11equal_rangeERS7_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1109, type: !505, isLocal: false, isDefinition: false, scopeLine: 1109, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!505 = !MDSubroutineType(types: !506)
!506 = !{!"_ZTSSt4pairISt23_Rb_tree_const_iteratorIS_IKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEES9_E", !303, !385}
!507 = !MDSubprogram(name: "__rb_verify", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11__rb_verifyEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1244, type: !448, isLocal: false, isDefinition: false, scopeLine: 1244, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!508 = !{!180, !509, !510, !182, !183}
!509 = !MDTemplateTypeParameter(name: "_Val", type: !"_ZTSSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiE")
!510 = !MDTemplateTypeParameter(name: "_KeyOfValue", type: !"_ZTSSt10_Select1stISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE")
!511 = !MDCompositeType(tag: DW_TAG_structure_type, name: "_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >", scope: !5, file: !188, line: 883, size: 8, align: 8, elements: !512, templateParams: !526, identifier: "_ZTSSt10_Select1stISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE")
!512 = !{!513, !514, !521}
!513 = !MDDerivedType(tag: DW_TAG_inheritance, scope: !"_ZTSSt10_Select1stISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", baseType: !"_ZTSSt14unary_functionISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiES7_E")
!514 = !MDSubprogram(name: "operator()", linkageName: "_ZNKSt10_Select1stISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEclERS8_", scope: !"_ZTSSt10_Select1stISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !188, line: 887, type: !515, isLocal: false, isDefinition: false, scopeLine: 887, flags: DIFlagPrototyped, isOptimized: false)
!515 = !MDSubroutineType(types: !516)
!516 = !{!517, !519, !259}
!517 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !518)
!518 = !MDDerivedType(tag: DW_TAG_typedef, name: "first_type", scope: !"_ZTSSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiE", file: !222, line: 98, baseType: !196)
!519 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !520, size: 64, align: 64, flags: DIFlagArtificial | DIFlagObjectPointer)
!520 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !"_ZTSSt10_Select1stISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE")
!521 = !MDSubprogram(name: "operator()", linkageName: "_ZNKSt10_Select1stISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEclERKS8_", scope: !"_ZTSSt10_Select1stISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !188, line: 891, type: !522, isLocal: false, isDefinition: false, scopeLine: 891, flags: DIFlagPrototyped, isOptimized: false)
!522 = !MDSubroutineType(types: !523)
!523 = !{!524, !519, !267}
!524 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !525)
!525 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !518)
!526 = !{!527}
!527 = !MDTemplateTypeParameter(name: "_Pair", type: !"_ZTSSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiE")
!528 = !MDCompositeType(tag: DW_TAG_structure_type, name: "_Rb_tree_impl<std::less<std::__cxx11::basic_string<char> >, false>", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 580, size: 384, align: 64, elements: !529, templateParams: !543, identifier: "_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EEE")
!529 = !{!530, !531, !532, !533, !534, !538, !541, !542}
!530 = !MDDerivedType(tag: DW_TAG_inheritance, scope: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EEE", baseType: !293)
!531 = !MDDerivedType(tag: DW_TAG_member, name: "_M_key_compare", scope: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EEE", file: !4, line: 582, baseType: !"_ZTSSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE", size: 8, align: 8)
!532 = !MDDerivedType(tag: DW_TAG_member, name: "_M_header", scope: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EEE", file: !4, line: 583, baseType: !"_ZTSSt18_Rb_tree_node_base", size: 256, align: 64, offset: 64)
!533 = !MDDerivedType(tag: DW_TAG_member, name: "_M_node_count", scope: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EEE", file: !4, line: 584, baseType: !453, size: 64, align: 64, offset: 320)
!534 = !MDSubprogram(name: "_Rb_tree_impl", scope: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EEE", file: !4, line: 586, type: !535, isLocal: false, isDefinition: false, scopeLine: 586, flags: DIFlagPrototyped, isOptimized: false)
!535 = !MDSubroutineType(types: !536)
!536 = !{null, !537}
!537 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EEE", size: 64, align: 64, flags: DIFlagArtificial | DIFlagObjectPointer)
!538 = !MDSubprogram(name: "_Rb_tree_impl", scope: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EEE", file: !4, line: 591, type: !539, isLocal: false, isDefinition: false, scopeLine: 591, flags: DIFlagPrototyped, isOptimized: false)
!539 = !MDSubroutineType(types: !540)
!540 = !{null, !537, !64, !301}
!541 = !MDSubprogram(name: "_M_reset", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EE8_M_resetEv", scope: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EEE", file: !4, line: 604, type: !535, isLocal: false, isDefinition: false, scopeLine: 604, flags: DIFlagPrototyped, isOptimized: false)
!542 = !MDSubprogram(name: "_M_initialize", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EE13_M_initializeEv", scope: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EEE", file: !4, line: 614, type: !535, isLocal: false, isDefinition: false, scopeLine: 614, flags: DIFlagPrivate | DIFlagPrototyped, isOptimized: false)
!543 = !{!544, !545}
!544 = !MDTemplateTypeParameter(name: "_Key_compare", type: !"_ZTSSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE")
!545 = !MDTemplateValueParameter(type: !46, value: i8 0)
!546 = !MDCompositeType(tag: DW_TAG_structure_type, name: "__alloc_traits<std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >", scope: !240, file: !295, line: 95, size: 8, align: 8, elements: !547, templateParams: !571, identifier: "_ZTSN9__gnu_cxx14__alloc_traitsISaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE")
!547 = !{!548, !556, !559, !562, !565, !568}
!548 = !MDSubprogram(name: "allocate", linkageName: "_ZN9__gnu_cxx14__alloc_traitsISaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE8allocateERSA_m", scope: !"_ZTSN9__gnu_cxx14__alloc_traitsISaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !295, line: 181, type: !549, isLocal: false, isDefinition: false, scopeLine: 181, flags: DIFlagPrototyped, isOptimized: false)
!549 = !MDSubroutineType(types: !550)
!550 = !{!551, !553, !554}
!551 = !MDDerivedType(tag: DW_TAG_typedef, name: "pointer", scope: !"_ZTSN9__gnu_cxx14__alloc_traitsISaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !295, line: 172, baseType: !552)
!552 = !MDDerivedType(tag: DW_TAG_typedef, name: "pointer", scope: !"_ZTSSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !206, line: 97, baseType: !256)
!553 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !"_ZTSSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE")
!554 = !MDDerivedType(tag: DW_TAG_typedef, name: "size_type", scope: !"_ZTSN9__gnu_cxx14__alloc_traitsISaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !295, line: 177, baseType: !555)
!555 = !MDDerivedType(tag: DW_TAG_typedef, name: "size_type", scope: !"_ZTSSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !206, line: 95, baseType: !114)
!556 = !MDSubprogram(name: "deallocate", linkageName: "_ZN9__gnu_cxx14__alloc_traitsISaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE10deallocateERSA_PS9_m", scope: !"_ZTSN9__gnu_cxx14__alloc_traitsISaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !295, line: 184, type: !557, isLocal: false, isDefinition: false, scopeLine: 184, flags: DIFlagPrototyped, isOptimized: false)
!557 = !MDSubroutineType(types: !558)
!558 = !{null, !553, !551, !554}
!559 = !MDSubprogram(name: "destroy", linkageName: "_ZN9__gnu_cxx14__alloc_traitsISaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE7destroyERSA_PS9_", scope: !"_ZTSN9__gnu_cxx14__alloc_traitsISaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !295, line: 191, type: !560, isLocal: false, isDefinition: false, scopeLine: 191, flags: DIFlagPrototyped, isOptimized: false)
!560 = !MDSubroutineType(types: !561)
!561 = !{null, !553, !551}
!562 = !MDSubprogram(name: "max_size", linkageName: "_ZN9__gnu_cxx14__alloc_traitsISaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE8max_sizeERKSA_", scope: !"_ZTSN9__gnu_cxx14__alloc_traitsISaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !295, line: 194, type: !563, isLocal: false, isDefinition: false, scopeLine: 194, flags: DIFlagPrototyped, isOptimized: false)
!563 = !MDSubroutineType(types: !564)
!564 = !{!554, !216}
!565 = !MDSubprogram(name: "_S_select_on_copy", linkageName: "_ZN9__gnu_cxx14__alloc_traitsISaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE17_S_select_on_copyERKSA_", scope: !"_ZTSN9__gnu_cxx14__alloc_traitsISaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !295, line: 197, type: !566, isLocal: false, isDefinition: false, scopeLine: 197, flags: DIFlagPrototyped, isOptimized: false)
!566 = !MDSubroutineType(types: !567)
!567 = !{!216, !216}
!568 = !MDSubprogram(name: "_S_on_swap", linkageName: "_ZN9__gnu_cxx14__alloc_traitsISaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE10_S_on_swapERSA_SC_", scope: !"_ZTSN9__gnu_cxx14__alloc_traitsISaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !295, line: 199, type: !569, isLocal: false, isDefinition: false, scopeLine: 199, flags: DIFlagPrototyped, isOptimized: false)
!569 = !MDSubroutineType(types: !570)
!570 = !{null, !553, !553}
!571 = !{!183}
!572 = !MDCompositeType(tag: DW_TAG_structure_type, name: "rebind<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > >", scope: !"_ZTSN9__gnu_cxx14__alloc_traitsISaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !295, line: 207, size: 8, align: 8, elements: !200, templateParams: !573, identifier: "_ZTSN9__gnu_cxx14__alloc_traitsISaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE6rebindISt13_Rb_tree_nodeIS9_EEE")
!573 = !{!574}
!574 = !MDTemplateTypeParameter(name: "_Tp", type: !"_ZTSSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE")
!575 = !MDCompositeType(tag: DW_TAG_structure_type, name: "_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> >", scope: !5, file: !4, line: 134, size: 576, align: 64, elements: !576, templateParams: !587, identifier: "_ZTSSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE")
!576 = !{!577, !578, !579, !583}
!577 = !MDDerivedType(tag: DW_TAG_inheritance, scope: !"_ZTSSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", baseType: !"_ZTSSt18_Rb_tree_node_base")
!578 = !MDDerivedType(tag: DW_TAG_member, name: "_M_value_field", scope: !"_ZTSSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 139, baseType: !"_ZTSSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiE", size: 320, align: 64, offset: 256)
!579 = !MDSubprogram(name: "_M_valptr", linkageName: "_ZNSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE9_M_valptrEv", scope: !"_ZTSSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 142, type: !580, isLocal: false, isDefinition: false, scopeLine: 142, flags: DIFlagPrototyped, isOptimized: false)
!580 = !MDSubroutineType(types: !581)
!581 = !{!256, !582}
!582 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", size: 64, align: 64, flags: DIFlagArtificial | DIFlagObjectPointer)
!583 = !MDSubprogram(name: "_M_valptr", linkageName: "_ZNKSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE9_M_valptrEv", scope: !"_ZTSSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 146, type: !584, isLocal: false, isDefinition: false, scopeLine: 146, flags: DIFlagPrototyped, isOptimized: false)
!584 = !MDSubroutineType(types: !585)
!585 = !{!264, !586}
!586 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !350, size: 64, align: 64, flags: DIFlagArtificial | DIFlagObjectPointer)
!587 = !{!509}
!588 = !MDCompositeType(tag: DW_TAG_structure_type, name: "rebind<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > >", scope: !"_ZTSSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !206, line: 104, size: 8, align: 8, elements: !200, templateParams: !589, identifier: "_ZTSNSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE6rebindISt13_Rb_tree_nodeIS7_EEE")
!589 = !{!590}
!590 = !MDTemplateTypeParameter(name: "_Tp1", type: !"_ZTSSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE")
!591 = !MDCompositeType(tag: DW_TAG_class_type, name: "allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > >", scope: !5, file: !206, line: 92, size: 8, align: 8, elements: !592, templateParams: !573, identifier: "_ZTSSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE")
!592 = !{!593, !594, !598, !603}
!593 = !MDDerivedType(tag: DW_TAG_inheritance, scope: !"_ZTSSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", baseType: !"_ZTSN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", flags: DIFlagPublic)
!594 = !MDSubprogram(name: "allocator", scope: !"_ZTSSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", file: !206, line: 113, type: !595, isLocal: false, isDefinition: false, scopeLine: 113, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!595 = !MDSubroutineType(types: !596)
!596 = !{null, !597}
!597 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", size: 64, align: 64, flags: DIFlagArtificial | DIFlagObjectPointer)
!598 = !MDSubprogram(name: "allocator", scope: !"_ZTSSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", file: !206, line: 115, type: !599, isLocal: false, isDefinition: false, scopeLine: 115, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!599 = !MDSubroutineType(types: !600)
!600 = !{null, !597, !601}
!601 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !602)
!602 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !"_ZTSSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE")
!603 = !MDSubprogram(name: "~allocator", scope: !"_ZTSSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", file: !206, line: 121, type: !595, isLocal: false, isDefinition: false, scopeLine: 121, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!604 = !MDCompositeType(tag: DW_TAG_class_type, name: "new_allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > >", scope: !240, file: !239, line: 58, size: 8, align: 8, elements: !605, templateParams: !573, identifier: "_ZTSN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE")
!605 = !{!606, !610, !615, !616, !623, !629, !632, !635, !638, !641}
!606 = !MDSubprogram(name: "new_allocator", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !239, line: 79, type: !607, isLocal: false, isDefinition: false, scopeLine: 79, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!607 = !MDSubroutineType(types: !608)
!608 = !{null, !609}
!609 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", size: 64, align: 64, flags: DIFlagArtificial | DIFlagObjectPointer)
!610 = !MDSubprogram(name: "new_allocator", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !239, line: 81, type: !611, isLocal: false, isDefinition: false, scopeLine: 81, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!611 = !MDSubroutineType(types: !612)
!612 = !{null, !609, !613}
!613 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !614)
!614 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !"_ZTSN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE")
!615 = !MDSubprogram(name: "~new_allocator", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !239, line: 86, type: !607, isLocal: false, isDefinition: false, scopeLine: 86, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!616 = !MDSubprogram(name: "address", linkageName: "_ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE7addressERSB_", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !239, line: 89, type: !617, isLocal: false, isDefinition: false, scopeLine: 89, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!617 = !MDSubroutineType(types: !618)
!618 = !{!619, !620, !621}
!619 = !MDDerivedType(tag: DW_TAG_typedef, name: "pointer", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !239, line: 63, baseType: !313)
!620 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !614, size: 64, align: 64, flags: DIFlagArtificial | DIFlagObjectPointer)
!621 = !MDDerivedType(tag: DW_TAG_typedef, name: "reference", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !239, line: 65, baseType: !622)
!622 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !"_ZTSSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE")
!623 = !MDSubprogram(name: "address", linkageName: "_ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE7addressERKSB_", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !239, line: 93, type: !624, isLocal: false, isDefinition: false, scopeLine: 93, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!624 = !MDSubroutineType(types: !625)
!625 = !{!626, !620, !627}
!626 = !MDDerivedType(tag: DW_TAG_typedef, name: "const_pointer", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !239, line: 64, baseType: !349)
!627 = !MDDerivedType(tag: DW_TAG_typedef, name: "const_reference", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !239, line: 66, baseType: !628)
!628 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !350)
!629 = !MDSubprogram(name: "allocate", linkageName: "_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE8allocateEmPKv", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !239, line: 99, type: !630, isLocal: false, isDefinition: false, scopeLine: 99, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!630 = !MDSubroutineType(types: !631)
!631 = !{!619, !609, !271, !272}
!632 = !MDSubprogram(name: "deallocate", linkageName: "_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE10deallocateEPSB_m", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !239, line: 109, type: !633, isLocal: false, isDefinition: false, scopeLine: 109, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!633 = !MDSubroutineType(types: !634)
!634 = !{null, !609, !619, !271}
!635 = !MDSubprogram(name: "max_size", linkageName: "_ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE8max_sizeEv", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !239, line: 113, type: !636, isLocal: false, isDefinition: false, scopeLine: 113, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!636 = !MDSubroutineType(types: !637)
!637 = !{!271, !620}
!638 = !MDSubprogram(name: "construct", linkageName: "_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE9constructEPSB_RKSB_", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !239, line: 129, type: !639, isLocal: false, isDefinition: false, scopeLine: 129, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!639 = !MDSubroutineType(types: !640)
!640 = !{null, !609, !619, !628}
!641 = !MDSubprogram(name: "destroy", linkageName: "_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE7destroyEPSB_", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !239, line: 133, type: !642, isLocal: false, isDefinition: false, scopeLine: 133, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false)
!642 = !MDSubroutineType(types: !643)
!643 = !{null, !609, !619}
!644 = !MDCompositeType(tag: DW_TAG_structure_type, name: "_Rb_tree_node_base", scope: !5, file: !4, line: 94, size: 256, align: 64, elements: !645, identifier: "_ZTSSt18_Rb_tree_node_base")
!645 = !{!646, !647, !649, !650, !651, !654, !658, !659}
!646 = !MDDerivedType(tag: DW_TAG_member, name: "_M_color", scope: !"_ZTSSt18_Rb_tree_node_base", file: !4, line: 99, baseType: !"_ZTSSt14_Rb_tree_color", size: 32, align: 32)
!647 = !MDDerivedType(tag: DW_TAG_member, name: "_M_parent", scope: !"_ZTSSt18_Rb_tree_node_base", file: !4, line: 100, baseType: !648, size: 64, align: 64, offset: 64)
!648 = !MDDerivedType(tag: DW_TAG_typedef, name: "_Base_ptr", scope: !"_ZTSSt18_Rb_tree_node_base", file: !4, line: 96, baseType: !333)
!649 = !MDDerivedType(tag: DW_TAG_member, name: "_M_left", scope: !"_ZTSSt18_Rb_tree_node_base", file: !4, line: 101, baseType: !648, size: 64, align: 64, offset: 128)
!650 = !MDDerivedType(tag: DW_TAG_member, name: "_M_right", scope: !"_ZTSSt18_Rb_tree_node_base", file: !4, line: 102, baseType: !648, size: 64, align: 64, offset: 192)
!651 = !MDSubprogram(name: "_S_minimum", linkageName: "_ZNSt18_Rb_tree_node_base10_S_minimumEPS_", scope: !"_ZTSSt18_Rb_tree_node_base", file: !4, line: 105, type: !652, isLocal: false, isDefinition: false, scopeLine: 105, flags: DIFlagPrototyped, isOptimized: false)
!652 = !MDSubroutineType(types: !653)
!653 = !{!648, !648}
!654 = !MDSubprogram(name: "_S_minimum", linkageName: "_ZNSt18_Rb_tree_node_base10_S_minimumEPKS_", scope: !"_ZTSSt18_Rb_tree_node_base", file: !4, line: 112, type: !655, isLocal: false, isDefinition: false, scopeLine: 112, flags: DIFlagPrototyped, isOptimized: false)
!655 = !MDSubroutineType(types: !656)
!656 = !{!657, !657}
!657 = !MDDerivedType(tag: DW_TAG_typedef, name: "_Const_Base_ptr", scope: !"_ZTSSt18_Rb_tree_node_base", file: !4, line: 97, baseType: !338)
!658 = !MDSubprogram(name: "_S_maximum", linkageName: "_ZNSt18_Rb_tree_node_base10_S_maximumEPS_", scope: !"_ZTSSt18_Rb_tree_node_base", file: !4, line: 119, type: !652, isLocal: false, isDefinition: false, scopeLine: 119, flags: DIFlagPrototyped, isOptimized: false)
!659 = !MDSubprogram(name: "_S_maximum", linkageName: "_ZNSt18_Rb_tree_node_base10_S_maximumEPKS_", scope: !"_ZTSSt18_Rb_tree_node_base", file: !4, line: 126, type: !655, isLocal: false, isDefinition: false, scopeLine: 126, flags: DIFlagPrototyped, isOptimized: false)
!660 = !MDCompositeType(tag: DW_TAG_structure_type, name: "pair<std::_Rb_tree_node_base *, std::_Rb_tree_node_base *>", scope: !5, file: !222, line: 96, size: 128, align: 64, elements: !661, templateParams: !673, identifier: "_ZTSSt4pairIPSt18_Rb_tree_node_baseS1_E")
!661 = !{!662, !663, !664, !668}
!662 = !MDDerivedType(tag: DW_TAG_member, name: "first", scope: !"_ZTSSt4pairIPSt18_Rb_tree_node_baseS1_E", file: !222, line: 101, baseType: !333, size: 64, align: 64)
!663 = !MDDerivedType(tag: DW_TAG_member, name: "second", scope: !"_ZTSSt4pairIPSt18_Rb_tree_node_baseS1_E", file: !222, line: 102, baseType: !333, size: 64, align: 64, offset: 64)
!664 = !MDSubprogram(name: "pair", scope: !"_ZTSSt4pairIPSt18_Rb_tree_node_baseS1_E", file: !222, line: 108, type: !665, isLocal: false, isDefinition: false, scopeLine: 108, flags: DIFlagPrototyped, isOptimized: false)
!665 = !MDSubroutineType(types: !666)
!666 = !{null, !667}
!667 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSSt4pairIPSt18_Rb_tree_node_baseS1_E", size: 64, align: 64, flags: DIFlagArtificial | DIFlagObjectPointer)
!668 = !MDSubprogram(name: "pair", scope: !"_ZTSSt4pairIPSt18_Rb_tree_node_baseS1_E", file: !222, line: 112, type: !669, isLocal: false, isDefinition: false, scopeLine: 112, flags: DIFlagPrototyped, isOptimized: false)
!669 = !MDSubroutineType(types: !670)
!670 = !{null, !667, !671, !671}
!671 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !672)
!672 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !333)
!673 = !{!674, !675}
!674 = !MDTemplateTypeParameter(name: "_T1", type: !333)
!675 = !MDTemplateTypeParameter(name: "_T2", type: !333)
!676 = !MDCompositeType(tag: DW_TAG_structure_type, name: "_Rb_tree_const_iterator<std::pair<const std::__cxx11::basic_string<char>, int> >", scope: !5, file: !4, line: 244, size: 64, align: 64, elements: !677, templateParams: !219, identifier: "_ZTSSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE")
!677 = !{!678, !680, !684, !687, !693, !698, !702, !706, !711, !714, !715, !716, !721}
!678 = !MDDerivedType(tag: DW_TAG_member, name: "_M_node", scope: !"_ZTSSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 319, baseType: !679, size: 64, align: 64)
!679 = !MDDerivedType(tag: DW_TAG_typedef, name: "_Base_ptr", file: !4, line: 256, baseType: !657)
!680 = !MDSubprogram(name: "_Rb_tree_const_iterator", scope: !"_ZTSSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 259, type: !681, isLocal: false, isDefinition: false, scopeLine: 259, flags: DIFlagPrototyped, isOptimized: false)
!681 = !MDSubroutineType(types: !682)
!682 = !{null, !683}
!683 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", size: 64, align: 64, flags: DIFlagArtificial | DIFlagObjectPointer)
!684 = !MDSubprogram(name: "_Rb_tree_const_iterator", scope: !"_ZTSSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 263, type: !685, isLocal: false, isDefinition: false, scopeLine: 263, flags: DIFlagExplicit | DIFlagPrototyped, isOptimized: false)
!685 = !MDSubroutineType(types: !686)
!686 = !{null, !683, !679}
!687 = !MDSubprogram(name: "_Rb_tree_const_iterator", scope: !"_ZTSSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 266, type: !688, isLocal: false, isDefinition: false, scopeLine: 266, flags: DIFlagPrototyped, isOptimized: false)
!688 = !MDSubroutineType(types: !689)
!689 = !{null, !683, !690}
!690 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !691)
!691 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !692)
!692 = !MDDerivedType(tag: DW_TAG_typedef, name: "iterator", scope: !"_ZTSSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 250, baseType: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE")
!693 = !MDSubprogram(name: "_M_const_cast", linkageName: "_ZNKSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE13_M_const_castEv", scope: !"_ZTSSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 270, type: !694, isLocal: false, isDefinition: false, scopeLine: 270, flags: DIFlagPrototyped, isOptimized: false)
!694 = !MDSubroutineType(types: !695)
!695 = !{!692, !696}
!696 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !697, size: 64, align: 64, flags: DIFlagArtificial | DIFlagObjectPointer)
!697 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !"_ZTSSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE")
!698 = !MDSubprogram(name: "operator*", linkageName: "_ZNKSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEdeEv", scope: !"_ZTSSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 274, type: !699, isLocal: false, isDefinition: false, scopeLine: 274, flags: DIFlagPrototyped, isOptimized: false)
!699 = !MDSubroutineType(types: !700)
!700 = !{!701, !696}
!701 = !MDDerivedType(tag: DW_TAG_typedef, name: "reference", scope: !"_ZTSSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 247, baseType: !267)
!702 = !MDSubprogram(name: "operator->", linkageName: "_ZNKSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEptEv", scope: !"_ZTSSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 278, type: !703, isLocal: false, isDefinition: false, scopeLine: 278, flags: DIFlagPrototyped, isOptimized: false)
!703 = !MDSubroutineType(types: !704)
!704 = !{!705, !696}
!705 = !MDDerivedType(tag: DW_TAG_typedef, name: "pointer", scope: !"_ZTSSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 248, baseType: !264)
!706 = !MDSubprogram(name: "operator++", linkageName: "_ZNSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEppEv", scope: !"_ZTSSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 282, type: !707, isLocal: false, isDefinition: false, scopeLine: 282, flags: DIFlagPrototyped, isOptimized: false)
!707 = !MDSubroutineType(types: !708)
!708 = !{!709, !683}
!709 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !710)
!710 = !MDDerivedType(tag: DW_TAG_typedef, name: "_Self", scope: !"_ZTSSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 255, baseType: !"_ZTSSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE")
!711 = !MDSubprogram(name: "operator++", linkageName: "_ZNSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEppEi", scope: !"_ZTSSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 289, type: !712, isLocal: false, isDefinition: false, scopeLine: 289, flags: DIFlagPrototyped, isOptimized: false)
!712 = !MDSubroutineType(types: !713)
!713 = !{!710, !683, !15}
!714 = !MDSubprogram(name: "operator--", linkageName: "_ZNSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEmmEv", scope: !"_ZTSSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 297, type: !707, isLocal: false, isDefinition: false, scopeLine: 297, flags: DIFlagPrototyped, isOptimized: false)
!715 = !MDSubprogram(name: "operator--", linkageName: "_ZNSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEmmEi", scope: !"_ZTSSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 304, type: !712, isLocal: false, isDefinition: false, scopeLine: 304, flags: DIFlagPrototyped, isOptimized: false)
!716 = !MDSubprogram(name: "operator==", linkageName: "_ZNKSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEeqERKS9_", scope: !"_ZTSSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 312, type: !717, isLocal: false, isDefinition: false, scopeLine: 312, flags: DIFlagPrototyped, isOptimized: false)
!717 = !MDSubroutineType(types: !718)
!718 = !{!46, !696, !719}
!719 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !720)
!720 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !710)
!721 = !MDSubprogram(name: "operator!=", linkageName: "_ZNKSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEneERKS9_", scope: !"_ZTSSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 316, type: !717, isLocal: false, isDefinition: false, scopeLine: 316, flags: DIFlagPrototyped, isOptimized: false)
!722 = !MDCompositeType(tag: DW_TAG_structure_type, name: "_Rb_tree_iterator<std::pair<const std::__cxx11::basic_string<char>, int> >", scope: !5, file: !4, line: 174, size: 64, align: 64, elements: !723, templateParams: !219, identifier: "_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE")
!723 = !{!724, !726, !730, !733, !739, !743, !748, !751, !752, !753, !758}
!724 = !MDDerivedType(tag: DW_TAG_member, name: "_M_node", scope: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 240, baseType: !725, size: 64, align: 64)
!725 = !MDDerivedType(tag: DW_TAG_typedef, name: "_Base_ptr", file: !4, line: 184, baseType: !648)
!726 = !MDSubprogram(name: "_Rb_tree_iterator", scope: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 187, type: !727, isLocal: false, isDefinition: false, scopeLine: 187, flags: DIFlagPrototyped, isOptimized: false)
!727 = !MDSubroutineType(types: !728)
!728 = !{null, !729}
!729 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", size: 64, align: 64, flags: DIFlagArtificial | DIFlagObjectPointer)
!730 = !MDSubprogram(name: "_Rb_tree_iterator", scope: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 191, type: !731, isLocal: false, isDefinition: false, scopeLine: 191, flags: DIFlagExplicit | DIFlagPrototyped, isOptimized: false)
!731 = !MDSubroutineType(types: !732)
!732 = !{null, !729, !725}
!733 = !MDSubprogram(name: "operator*", linkageName: "_ZNKSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEdeEv", scope: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 195, type: !734, isLocal: false, isDefinition: false, scopeLine: 195, flags: DIFlagPrototyped, isOptimized: false)
!734 = !MDSubroutineType(types: !735)
!735 = !{!736, !737}
!736 = !MDDerivedType(tag: DW_TAG_typedef, name: "reference", scope: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 177, baseType: !259)
!737 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !738, size: 64, align: 64, flags: DIFlagArtificial | DIFlagObjectPointer)
!738 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE")
!739 = !MDSubprogram(name: "operator->", linkageName: "_ZNKSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEptEv", scope: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 199, type: !740, isLocal: false, isDefinition: false, scopeLine: 199, flags: DIFlagPrototyped, isOptimized: false)
!740 = !MDSubroutineType(types: !741)
!741 = !{!742, !737}
!742 = !MDDerivedType(tag: DW_TAG_typedef, name: "pointer", scope: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 178, baseType: !256)
!743 = !MDSubprogram(name: "operator++", linkageName: "_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEppEv", scope: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 203, type: !744, isLocal: false, isDefinition: false, scopeLine: 203, flags: DIFlagPrototyped, isOptimized: false)
!744 = !MDSubroutineType(types: !745)
!745 = !{!746, !729}
!746 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !747)
!747 = !MDDerivedType(tag: DW_TAG_typedef, name: "_Self", scope: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 183, baseType: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE")
!748 = !MDSubprogram(name: "operator++", linkageName: "_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEppEi", scope: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 210, type: !749, isLocal: false, isDefinition: false, scopeLine: 210, flags: DIFlagPrototyped, isOptimized: false)
!749 = !MDSubroutineType(types: !750)
!750 = !{!747, !729, !15}
!751 = !MDSubprogram(name: "operator--", linkageName: "_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEmmEv", scope: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 218, type: !744, isLocal: false, isDefinition: false, scopeLine: 218, flags: DIFlagPrototyped, isOptimized: false)
!752 = !MDSubprogram(name: "operator--", linkageName: "_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEmmEi", scope: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 225, type: !749, isLocal: false, isDefinition: false, scopeLine: 225, flags: DIFlagPrototyped, isOptimized: false)
!753 = !MDSubprogram(name: "operator==", linkageName: "_ZNKSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEeqERKS9_", scope: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 233, type: !754, isLocal: false, isDefinition: false, scopeLine: 233, flags: DIFlagPrototyped, isOptimized: false)
!754 = !MDSubroutineType(types: !755)
!755 = !{!46, !737, !756}
!756 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !757)
!757 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !747)
!758 = !MDSubprogram(name: "operator!=", linkageName: "_ZNKSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEneERKS9_", scope: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 237, type: !754, isLocal: false, isDefinition: false, scopeLine: 237, flags: DIFlagPrototyped, isOptimized: false)
!759 = !MDCompositeType(tag: DW_TAG_class_type, name: "reverse_iterator<std::_Rb_tree_iterator<std::pair<const std::__cxx11::basic_string<char>, int> > >", scope: !5, file: !760, line: 97, flags: DIFlagFwdDecl, identifier: "_ZTSSt16reverse_iteratorISt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE")
!760 = !MDFile(filename: "/usr/lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/bits/stl_iterator.h", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!761 = !MDCompositeType(tag: DW_TAG_class_type, name: "reverse_iterator<std::_Rb_tree_const_iterator<std::pair<const std::__cxx11::basic_string<char>, int> > >", scope: !5, file: !760, line: 97, flags: DIFlagFwdDecl, identifier: "_ZTSSt16reverse_iteratorISt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE")
!762 = !MDCompositeType(tag: DW_TAG_structure_type, name: "pair<std::_Rb_tree_iterator<std::pair<const std::__cxx11::basic_string<char>, int> >, bool>", scope: !5, file: !222, line: 96, flags: DIFlagFwdDecl, identifier: "_ZTSSt4pairISt17_Rb_tree_iteratorIS_IKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEbE")
!763 = !MDCompositeType(tag: DW_TAG_structure_type, name: "pair<std::_Rb_tree_iterator<std::pair<const std::__cxx11::basic_string<char>, int> >, std::_Rb_tree_iterator<std::pair<const std::__cxx11::basic_string<char>, int> > >", scope: !5, file: !222, line: 96, flags: DIFlagFwdDecl, identifier: "_ZTSSt4pairISt17_Rb_tree_iteratorIS_IKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEES9_E")
!764 = !MDCompositeType(tag: DW_TAG_structure_type, name: "pair<std::_Rb_tree_const_iterator<std::pair<const std::__cxx11::basic_string<char>, int> >, std::_Rb_tree_const_iterator<std::pair<const std::__cxx11::basic_string<char>, int> > >", scope: !5, file: !222, line: 96, flags: DIFlagFwdDecl, identifier: "_ZTSSt4pairISt23_Rb_tree_const_iteratorIS_IKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEES9_E")
!765 = !MDCompositeType(tag: DW_TAG_class_type, name: "value_compare", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 114, flags: DIFlagFwdDecl, identifier: "_ZTSNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE13value_compareE")
!766 = !MDCompositeType(tag: DW_TAG_structure_type, name: "unary_function<std::pair<const std::__cxx11::basic_string<char>, int>, const std::__cxx11::basic_string<char> >", scope: !5, file: !188, line: 105, size: 8, align: 8, elements: !200, templateParams: !767, identifier: "_ZTSSt14unary_functionISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiES7_E")
!767 = !{!768, !769}
!768 = !MDTemplateTypeParameter(name: "_Arg", type: !"_ZTSSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiE")
!769 = !MDTemplateTypeParameter(name: "_Result", type: !196)
!770 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !302, size: 64, align: 64)
!771 = !MDCompositeType(tag: DW_TAG_structure_type, name: "__alloc_traits<std::allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > > >", scope: !240, file: !295, line: 95, size: 8, align: 8, elements: !772, templateParams: !796, identifier: "_ZTSN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEEE")
!772 = !{!773, !781, !784, !787, !790, !793}
!773 = !MDSubprogram(name: "allocate", linkageName: "_ZN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE8allocateERSC_m", scope: !"_ZTSN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEEE", file: !295, line: 181, type: !774, isLocal: false, isDefinition: false, scopeLine: 181, flags: DIFlagPrototyped, isOptimized: false)
!774 = !MDSubroutineType(types: !775)
!775 = !{!776, !778, !779}
!776 = !MDDerivedType(tag: DW_TAG_typedef, name: "pointer", scope: !"_ZTSN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEEE", file: !295, line: 172, baseType: !777)
!777 = !MDDerivedType(tag: DW_TAG_typedef, name: "pointer", scope: !"_ZTSSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", file: !206, line: 97, baseType: !313)
!778 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !"_ZTSSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE")
!779 = !MDDerivedType(tag: DW_TAG_typedef, name: "size_type", scope: !"_ZTSN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEEE", file: !295, line: 177, baseType: !780)
!780 = !MDDerivedType(tag: DW_TAG_typedef, name: "size_type", scope: !"_ZTSSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", file: !206, line: 95, baseType: !114)
!781 = !MDSubprogram(name: "deallocate", linkageName: "_ZN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE10deallocateERSC_PSB_m", scope: !"_ZTSN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEEE", file: !295, line: 184, type: !782, isLocal: false, isDefinition: false, scopeLine: 184, flags: DIFlagPrototyped, isOptimized: false)
!782 = !MDSubroutineType(types: !783)
!783 = !{null, !778, !776, !779}
!784 = !MDSubprogram(name: "destroy", linkageName: "_ZN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE7destroyERSC_PSB_", scope: !"_ZTSN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEEE", file: !295, line: 191, type: !785, isLocal: false, isDefinition: false, scopeLine: 191, flags: DIFlagPrototyped, isOptimized: false)
!785 = !MDSubroutineType(types: !786)
!786 = !{null, !778, !776}
!787 = !MDSubprogram(name: "max_size", linkageName: "_ZN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE8max_sizeERKSC_", scope: !"_ZTSN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEEE", file: !295, line: 194, type: !788, isLocal: false, isDefinition: false, scopeLine: 194, flags: DIFlagPrototyped, isOptimized: false)
!788 = !MDSubroutineType(types: !789)
!789 = !{!779, !601}
!790 = !MDSubprogram(name: "_S_select_on_copy", linkageName: "_ZN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE17_S_select_on_copyERKSC_", scope: !"_ZTSN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEEE", file: !295, line: 197, type: !791, isLocal: false, isDefinition: false, scopeLine: 197, flags: DIFlagPrototyped, isOptimized: false)
!791 = !MDSubroutineType(types: !792)
!792 = !{!601, !601}
!793 = !MDSubprogram(name: "_S_on_swap", linkageName: "_ZN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE10_S_on_swapERSC_SE_", scope: !"_ZTSN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEEE", file: !295, line: 199, type: !794, isLocal: false, isDefinition: false, scopeLine: 199, flags: DIFlagPrototyped, isOptimized: false)
!794 = !MDSubroutineType(types: !795)
!795 = !{null, !778, !778}
!796 = !{!797}
!797 = !MDTemplateTypeParameter(name: "_Alloc", type: !"_ZTSSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE")
!798 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !293, size: 64, align: 64)
!799 = !MDCompositeType(tag: DW_TAG_structure_type, name: "char_traits<char>", scope: !5, file: !800, line: 233, size: 8, align: 8, elements: !801, templateParams: !849, identifier: "_ZTSSt11char_traitsIcE")
!800 = !MDFile(filename: "/usr/lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/bits/char_traits.h", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!801 = !{!802, !809, !812, !813, !817, !820, !823, !827, !828, !831, !837, !840, !843, !846}
!802 = !MDSubprogram(name: "assign", linkageName: "_ZNSt11char_traitsIcE6assignERcRKc", scope: !"_ZTSSt11char_traitsIcE", file: !800, line: 242, type: !803, isLocal: false, isDefinition: false, scopeLine: 242, flags: DIFlagPrototyped, isOptimized: false)
!803 = !MDSubroutineType(types: !804)
!804 = !{null, !805, !807}
!805 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !806)
!806 = !MDDerivedType(tag: DW_TAG_typedef, name: "char_type", scope: !"_ZTSSt11char_traitsIcE", file: !800, line: 235, baseType: !23)
!807 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !808)
!808 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !806)
!809 = !MDSubprogram(name: "eq", linkageName: "_ZNSt11char_traitsIcE2eqERKcS2_", scope: !"_ZTSSt11char_traitsIcE", file: !800, line: 246, type: !810, isLocal: false, isDefinition: false, scopeLine: 246, flags: DIFlagPrototyped, isOptimized: false)
!810 = !MDSubroutineType(types: !811)
!811 = !{!46, !807, !807}
!812 = !MDSubprogram(name: "lt", linkageName: "_ZNSt11char_traitsIcE2ltERKcS2_", scope: !"_ZTSSt11char_traitsIcE", file: !800, line: 250, type: !810, isLocal: false, isDefinition: false, scopeLine: 250, flags: DIFlagPrototyped, isOptimized: false)
!813 = !MDSubprogram(name: "compare", linkageName: "_ZNSt11char_traitsIcE7compareEPKcS2_m", scope: !"_ZTSSt11char_traitsIcE", file: !800, line: 258, type: !814, isLocal: false, isDefinition: false, scopeLine: 258, flags: DIFlagPrototyped, isOptimized: false)
!814 = !MDSubroutineType(types: !815)
!815 = !{!15, !816, !816, !114}
!816 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !808, size: 64, align: 64)
!817 = !MDSubprogram(name: "length", linkageName: "_ZNSt11char_traitsIcE6lengthEPKc", scope: !"_ZTSSt11char_traitsIcE", file: !800, line: 266, type: !818, isLocal: false, isDefinition: false, scopeLine: 266, flags: DIFlagPrototyped, isOptimized: false)
!818 = !MDSubroutineType(types: !819)
!819 = !{!114, !816}
!820 = !MDSubprogram(name: "find", linkageName: "_ZNSt11char_traitsIcE4findEPKcmRS1_", scope: !"_ZTSSt11char_traitsIcE", file: !800, line: 270, type: !821, isLocal: false, isDefinition: false, scopeLine: 270, flags: DIFlagPrototyped, isOptimized: false)
!821 = !MDSubroutineType(types: !822)
!822 = !{!816, !816, !114, !807}
!823 = !MDSubprogram(name: "move", linkageName: "_ZNSt11char_traitsIcE4moveEPcPKcm", scope: !"_ZTSSt11char_traitsIcE", file: !800, line: 278, type: !824, isLocal: false, isDefinition: false, scopeLine: 278, flags: DIFlagPrototyped, isOptimized: false)
!824 = !MDSubroutineType(types: !825)
!825 = !{!826, !826, !816, !114}
!826 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !806, size: 64, align: 64)
!827 = !MDSubprogram(name: "copy", linkageName: "_ZNSt11char_traitsIcE4copyEPcPKcm", scope: !"_ZTSSt11char_traitsIcE", file: !800, line: 286, type: !824, isLocal: false, isDefinition: false, scopeLine: 286, flags: DIFlagPrototyped, isOptimized: false)
!828 = !MDSubprogram(name: "assign", linkageName: "_ZNSt11char_traitsIcE6assignEPcmc", scope: !"_ZTSSt11char_traitsIcE", file: !800, line: 294, type: !829, isLocal: false, isDefinition: false, scopeLine: 294, flags: DIFlagPrototyped, isOptimized: false)
!829 = !MDSubroutineType(types: !830)
!830 = !{!826, !826, !114, !806}
!831 = !MDSubprogram(name: "to_char_type", linkageName: "_ZNSt11char_traitsIcE12to_char_typeERKi", scope: !"_ZTSSt11char_traitsIcE", file: !800, line: 302, type: !832, isLocal: false, isDefinition: false, scopeLine: 302, flags: DIFlagPrototyped, isOptimized: false)
!832 = !MDSubroutineType(types: !833)
!833 = !{!806, !834}
!834 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !835)
!835 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !836)
!836 = !MDDerivedType(tag: DW_TAG_typedef, name: "int_type", scope: !"_ZTSSt11char_traitsIcE", file: !800, line: 236, baseType: !15)
!837 = !MDSubprogram(name: "to_int_type", linkageName: "_ZNSt11char_traitsIcE11to_int_typeERKc", scope: !"_ZTSSt11char_traitsIcE", file: !800, line: 308, type: !838, isLocal: false, isDefinition: false, scopeLine: 308, flags: DIFlagPrototyped, isOptimized: false)
!838 = !MDSubroutineType(types: !839)
!839 = !{!836, !807}
!840 = !MDSubprogram(name: "eq_int_type", linkageName: "_ZNSt11char_traitsIcE11eq_int_typeERKiS2_", scope: !"_ZTSSt11char_traitsIcE", file: !800, line: 312, type: !841, isLocal: false, isDefinition: false, scopeLine: 312, flags: DIFlagPrototyped, isOptimized: false)
!841 = !MDSubroutineType(types: !842)
!842 = !{!46, !834, !834}
!843 = !MDSubprogram(name: "eof", linkageName: "_ZNSt11char_traitsIcE3eofEv", scope: !"_ZTSSt11char_traitsIcE", file: !800, line: 316, type: !844, isLocal: false, isDefinition: false, scopeLine: 316, flags: DIFlagPrototyped, isOptimized: false)
!844 = !MDSubroutineType(types: !845)
!845 = !{!836}
!846 = !MDSubprogram(name: "not_eof", linkageName: "_ZNSt11char_traitsIcE7not_eofERKi", scope: !"_ZTSSt11char_traitsIcE", file: !800, line: 320, type: !847, isLocal: false, isDefinition: false, scopeLine: 320, flags: DIFlagPrototyped, isOptimized: false)
!847 = !MDSubroutineType(types: !848)
!848 = !{!836, !834}
!849 = !{!850}
!850 = !MDTemplateTypeParameter(name: "_CharT", type: !23)
!851 = !MDCompositeType(tag: DW_TAG_class_type, name: "allocator<char>", scope: !5, file: !206, line: 155, size: 8, align: 8, flags: DIFlagFwdDecl, identifier: "_ZTSSaIcE")
!852 = !MDDerivedType(tag: DW_TAG_typedef, name: "_Link_type", scope: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 185, baseType: !313)
!853 = !MDCompositeType(tag: DW_TAG_structure_type, name: "_Alloc_node", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 447, size: 64, align: 64, elements: !854, identifier: "_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_Alloc_nodeE")
!854 = !{!855, !856}
!855 = !MDDerivedType(tag: DW_TAG_member, name: "_M_t", scope: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_Alloc_nodeE", file: !4, line: 462, baseType: !427, size: 64, align: 64, flags: DIFlagPrivate)
!856 = !MDSubprogram(name: "_Alloc_node", scope: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_Alloc_nodeE", file: !4, line: 449, type: !857, isLocal: false, isDefinition: false, scopeLine: 449, flags: DIFlagPrototyped, isOptimized: false)
!857 = !MDSubroutineType(types: !858)
!858 = !{null, !859, !427}
!859 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_Alloc_nodeE", size: 64, align: 64, flags: DIFlagArtificial | DIFlagObjectPointer)
!860 = !MDDerivedType(tag: DW_TAG_typedef, name: "_Base_ptr", scope: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 184, baseType: !648)
!861 = !{!862, !866, !867, !871, !874, !877, !880, !881, !883, !884, !885, !886, !887, !888, !889, !890, !891, !895, !896, !897, !899, !900, !904, !905, !906, !907, !908, !909, !910, !911, !913, !914, !915, !916, !917, !918, !919, !920, !921, !922, !923, !924, !925, !926, !927, !928, !933, !934, !935, !936, !937, !944, !945, !946, !947, !948, !949, !950, !951, !952, !953, !954, !955, !956, !957, !964, !965, !966, !967, !968, !969, !970, !971, !972, !973, !974, !978, !985, !986, !987, !988, !989, !990, !991, !992, !996, !997, !998}
!862 = !MDSubprogram(name: "__cxx_global_var_init", scope: !863, file: !863, line: 74, type: !864, isLocal: true, isDefinition: true, scopeLine: 74, flags: DIFlagPrototyped, isOptimized: false, function: void ()* @__cxx_global_var_init, variables: !200)
!863 = !MDFile(filename: "/usr/lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/iostream", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!864 = !MDSubroutineType(types: !865)
!865 = !{null}
!866 = !MDSubprogram(name: "__cxx_global_var_init1", scope: !1, file: !1, line: 11, type: !864, isLocal: true, isDefinition: true, scopeLine: 11, flags: DIFlagPrototyped, isOptimized: false, function: void ()* @__cxx_global_var_init1, variables: !200)
!867 = !MDSubprogram(name: "printBBTrace", linkageName: "_Z12printBBTracePcii", scope: !1, file: !1, line: 13, type: !868, isLocal: false, isDefinition: true, scopeLine: 13, flags: DIFlagPrototyped, isOptimized: false, function: void (i8*, i32, i32)* @_Z12printBBTracePcii, variables: !200)
!868 = !MDSubroutineType(types: !869)
!869 = !{null, !870, !15, !15}
!870 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !23, size: 64, align: 64)
!871 = !MDSubprogram(name: "printLnTrace", linkageName: "_Z12printLnTracePci", scope: !1, file: !1, line: 23, type: !872, isLocal: false, isDefinition: true, scopeLine: 23, flags: DIFlagPrototyped, isOptimized: false, function: void (i8*, i32)* @_Z12printLnTracePci, variables: !200)
!872 = !MDSubroutineType(types: !873)
!873 = !{null, !870, !15}
!874 = !MDSubprogram(name: "printTrace", linkageName: "_Z10printTracei", scope: !1, file: !1, line: 33, type: !875, isLocal: false, isDefinition: true, scopeLine: 33, flags: DIFlagPrototyped, isOptimized: false, function: void (i32)* @_Z10printTracei, variables: !200)
!875 = !MDSubroutineType(types: !876)
!876 = !{null, !15}
!877 = !MDSubprogram(name: "printBBEntry", linkageName: "_Z12printBBEntryiPc", scope: !1, file: !1, line: 38, type: !878, isLocal: false, isDefinition: true, scopeLine: 38, flags: DIFlagPrototyped, isOptimized: false, function: void (i32, i8*)* @_Z12printBBEntryiPc, variables: !200)
!878 = !MDSubroutineType(types: !879)
!879 = !{null, !15, !870}
!880 = !MDSubprogram(name: "printBBExit", linkageName: "_Z11printBBExitiPc", scope: !1, file: !1, line: 45, type: !878, isLocal: false, isDefinition: true, scopeLine: 45, flags: DIFlagPrototyped, isOptimized: false, function: void (i32, i8*)* @_Z11printBBExitiPc, variables: !200)
!881 = !MDSubprogram(name: "~map", linkageName: "_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEED2Ev", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 96, type: !58, isLocal: false, isDefinition: true, scopeLine: 96, flags: DIFlagArtificial | DIFlagPrototyped, isOptimized: false, function: void (%"class.std::map"*)* @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEED2Ev, declaration: !882, variables: !200)
!882 = !MDSubprogram(name: "~map", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", type: !58, isLocal: false, isDefinition: false, flags: DIFlagPublic | DIFlagArtificial | DIFlagPrototyped, isOptimized: false)
!883 = !MDSubprogram(name: "~_Rb_tree", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EED2Ev", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 857, type: !412, isLocal: false, isDefinition: true, scopeLine: 858, flags: DIFlagPrototyped, isOptimized: false, function: void (%"class.std::_Rb_tree"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EED2Ev, declaration: !423, variables: !200)
!884 = !MDSubprogram(name: "_M_erase", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_M_eraseEPSt13_Rb_tree_nodeIS8_E", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1607, type: !315, isLocal: false, isDefinition: true, scopeLine: 1608, flags: DIFlagPrototyped, isOptimized: false, function: void (%"class.std::_Rb_tree"*, %"struct.std::_Rb_tree_node"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_M_eraseEPSt13_Rb_tree_nodeIS8_E, declaration: !402, variables: !200)
!885 = !MDSubprogram(name: "_S_right", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_S_rightEPSt18_Rb_tree_node_base", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 686, type: !361, isLocal: false, isDefinition: true, scopeLine: 687, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_node"* (%"struct.std::_Rb_tree_node_base"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_S_rightEPSt18_Rb_tree_node_base, declaration: !366, variables: !200)
!886 = !MDSubprogram(name: "_S_left", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE7_S_leftEPSt18_Rb_tree_node_base", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 678, type: !361, isLocal: false, isDefinition: true, scopeLine: 679, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_node"* (%"struct.std::_Rb_tree_node_base"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE7_S_leftEPSt18_Rb_tree_node_base, declaration: !360, variables: !200)
!887 = !MDSubprogram(name: "_M_drop_node", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS8_E", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 559, type: !315, isLocal: false, isDefinition: true, scopeLine: 560, flags: DIFlagPrototyped, isOptimized: false, function: void (%"class.std::_Rb_tree"*, %"struct.std::_Rb_tree_node"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE12_M_drop_nodeEPSt13_Rb_tree_nodeIS8_E, declaration: !327, variables: !200)
!888 = !MDSubprogram(name: "_M_destroy_node", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS8_E", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 519, type: !315, isLocal: false, isDefinition: true, scopeLine: 520, flags: DIFlagPrototyped, isOptimized: false, function: void (%"class.std::_Rb_tree"*, %"struct.std::_Rb_tree_node"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE15_M_destroy_nodeEPSt13_Rb_tree_nodeIS8_E, declaration: !326, variables: !200)
!889 = !MDSubprogram(name: "get_allocator", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13get_allocatorEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 485, type: !306, isLocal: false, isDefinition: true, scopeLine: 486, flags: DIFlagPrototyped, isOptimized: false, function: void (%"class.std::allocator.3"*, %"class.std::_Rb_tree"*)* @_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13get_allocatorEv, declaration: !305, variables: !200)
!890 = !MDSubprogram(name: "_M_get_Node_allocator", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE21_M_get_Node_allocatorEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 481, type: !299, isLocal: false, isDefinition: true, scopeLine: 482, flags: DIFlagPrototyped, isOptimized: false, function: %"class.std::allocator"* (%"class.std::_Rb_tree"*)* @_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE21_M_get_Node_allocatorEv, declaration: !298, variables: !200)
!891 = !MDSubprogram(name: "allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > >", linkageName: "_ZNSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2ISt13_Rb_tree_nodeIS7_EEERKSaIT_E", scope: !"_ZTSSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !206, line: 119, type: !892, isLocal: false, isDefinition: true, scopeLine: 119, flags: DIFlagPrototyped, isOptimized: false, function: void (%"class.std::allocator.3"*, %"class.std::allocator"*)* @_ZNSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2ISt13_Rb_tree_nodeIS7_EEERKSaIT_E, templateParams: !589, declaration: !894, variables: !200)
!892 = !MDSubroutineType(types: !893)
!893 = !{null, !212, !601}
!894 = !MDSubprogram(name: "allocator<std::_Rb_tree_node<std::pair<const std::__cxx11::basic_string<char>, int> > >", scope: !"_ZTSSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !206, line: 119, type: !892, isLocal: false, isDefinition: false, scopeLine: 119, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false, templateParams: !589)
!895 = !MDSubprogram(name: "new_allocator", linkageName: "_ZN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2Ev", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", file: !239, line: 79, type: !243, isLocal: false, isDefinition: true, scopeLine: 79, flags: DIFlagPrototyped, isOptimized: false, function: void (%"class.__gnu_cxx::new_allocator.4"*)* @_ZN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2Ev, declaration: !242, variables: !200)
!896 = !MDSubprogram(name: "destroy", linkageName: "_ZN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE7destroyEPS9_", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", file: !239, line: 133, type: !284, isLocal: false, isDefinition: true, scopeLine: 133, flags: DIFlagPrototyped, isOptimized: false, function: void (%"class.__gnu_cxx::new_allocator.4"*, %"struct.std::pair"*)* @_ZN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE7destroyEPS9_, declaration: !283, variables: !200)
!897 = !MDSubprogram(name: "~pair", linkageName: "_ZNSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiED2Ev", scope: !"_ZTSSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiE", file: !222, line: 96, type: !227, isLocal: false, isDefinition: true, scopeLine: 96, flags: DIFlagArtificial | DIFlagPrototyped, isOptimized: false, function: void (%"struct.std::pair"*)* @_ZNSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiED2Ev, declaration: !898, variables: !200)
!898 = !MDSubprogram(name: "~pair", scope: !"_ZTSSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiE", type: !227, isLocal: false, isDefinition: false, flags: DIFlagArtificial | DIFlagPrototyped, isOptimized: false)
!899 = !MDSubprogram(name: "_M_valptr", linkageName: "_ZNSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE9_M_valptrEv", scope: !"_ZTSSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 142, type: !580, isLocal: false, isDefinition: true, scopeLine: 143, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::pair"* (%"struct.std::_Rb_tree_node"*)* @_ZNSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE9_M_valptrEv, declaration: !579, variables: !200)
!900 = !MDSubprogram(name: "__addressof<std::pair<const std::__cxx11::basic_string<char>, int> >", linkageName: "_ZSt11__addressofISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEPT_RS9_", scope: !5, file: !901, line: 47, type: !902, isLocal: false, isDefinition: true, scopeLine: 48, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::pair"* (%"struct.std::pair"*)* @_ZSt11__addressofISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEPT_RS9_, templateParams: !219, variables: !200)
!901 = !MDFile(filename: "/usr/lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/bits/move.h", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!902 = !MDSubroutineType(types: !903)
!903 = !{!256, !259}
!904 = !MDSubprogram(name: "~allocator", linkageName: "_ZNSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEED2Ev", scope: !"_ZTSSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !206, line: 121, type: !210, isLocal: false, isDefinition: true, scopeLine: 121, flags: DIFlagPrototyped, isOptimized: false, function: void (%"class.std::allocator.3"*)* @_ZNSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEED2Ev, declaration: !218, variables: !200)
!905 = !MDSubprogram(name: "~new_allocator", linkageName: "_ZN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEED2Ev", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", file: !239, line: 86, type: !243, isLocal: false, isDefinition: true, scopeLine: 86, flags: DIFlagPrototyped, isOptimized: false, function: void (%"class.__gnu_cxx::new_allocator.4"*)* @_ZN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEED2Ev, declaration: !251, variables: !200)
!906 = !MDSubprogram(name: "_M_put_node", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS8_E", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 494, type: !315, isLocal: false, isDefinition: true, scopeLine: 495, flags: DIFlagPrototyped, isOptimized: false, function: void (%"class.std::_Rb_tree"*, %"struct.std::_Rb_tree_node"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_M_put_nodeEPSt13_Rb_tree_nodeIS8_E, declaration: !314, variables: !200)
!907 = !MDSubprogram(name: "deallocate", linkageName: "_ZN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE10deallocateERSC_PSB_m", scope: !"_ZTSN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEEE", file: !295, line: 184, type: !782, isLocal: false, isDefinition: true, scopeLine: 185, flags: DIFlagPrototyped, isOptimized: false, function: void (%"class.std::allocator"*, %"struct.std::_Rb_tree_node"*, i64)* @_ZN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE10deallocateERSC_PSB_m, declaration: !781, variables: !200)
!908 = !MDSubprogram(name: "deallocate", linkageName: "_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE10deallocateEPSB_m", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !239, line: 109, type: !633, isLocal: false, isDefinition: true, scopeLine: 110, flags: DIFlagPrototyped, isOptimized: false, function: void (%"class.__gnu_cxx::new_allocator"*, %"struct.std::_Rb_tree_node"*, i64)* @_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE10deallocateEPSB_m, declaration: !632, variables: !200)
!909 = !MDSubprogram(name: "_M_get_Node_allocator", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE21_M_get_Node_allocatorEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 477, type: !290, isLocal: false, isDefinition: true, scopeLine: 478, flags: DIFlagPrototyped, isOptimized: false, function: %"class.std::allocator"* (%"class.std::_Rb_tree"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE21_M_get_Node_allocatorEv, declaration: !289, variables: !200)
!910 = !MDSubprogram(name: "_M_begin", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_M_beginEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 651, type: !310, isLocal: false, isDefinition: true, scopeLine: 652, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_node"* (%"class.std::_Rb_tree"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_M_beginEv, declaration: !344, variables: !200)
!911 = !MDSubprogram(name: "~_Rb_tree_impl", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EED2Ev", scope: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EEE", file: !4, line: 580, type: !535, isLocal: false, isDefinition: true, scopeLine: 580, flags: DIFlagArtificial | DIFlagPrototyped, isOptimized: false, function: void (%"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EED2Ev, declaration: !912, variables: !200)
!912 = !MDSubprogram(name: "~_Rb_tree_impl", scope: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EEE", type: !535, isLocal: false, isDefinition: false, flags: DIFlagArtificial | DIFlagPrototyped, isOptimized: false)
!913 = !MDSubprogram(name: "~allocator", linkageName: "_ZNSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEED2Ev", scope: !"_ZTSSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", file: !206, line: 121, type: !595, isLocal: false, isDefinition: true, scopeLine: 121, flags: DIFlagPrototyped, isOptimized: false, function: void (%"class.std::allocator"*)* @_ZNSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEED2Ev, declaration: !603, variables: !200)
!914 = !MDSubprogram(name: "~new_allocator", linkageName: "_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEED2Ev", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !239, line: 86, type: !607, isLocal: false, isDefinition: true, scopeLine: 86, flags: DIFlagPrototyped, isOptimized: false, function: void (%"class.__gnu_cxx::new_allocator"*)* @_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEED2Ev, declaration: !615, variables: !200)
!915 = !MDSubprogram(name: "map", linkageName: "_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEEC2Ev", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 162, type: !58, isLocal: false, isDefinition: true, scopeLine: 166, flags: DIFlagPrototyped, isOptimized: false, function: void (%"class.std::map"*)* @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEEC2Ev, declaration: !57, variables: !200)
!916 = !MDSubprogram(name: "_Rb_tree", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EEC2Ev", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 807, type: !412, isLocal: false, isDefinition: true, scopeLine: 807, flags: DIFlagPrototyped, isOptimized: false, function: void (%"class.std::_Rb_tree"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EEC2Ev, declaration: !411, variables: !200)
!917 = !MDSubprogram(name: "_Rb_tree_impl", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EEC2Ev", scope: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EEE", file: !4, line: 586, type: !535, isLocal: false, isDefinition: true, scopeLine: 589, flags: DIFlagPrototyped, isOptimized: false, function: void (%"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EEC2Ev, declaration: !534, variables: !200)
!918 = !MDSubprogram(name: "allocator", linkageName: "_ZNSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEC2Ev", scope: !"_ZTSSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", file: !206, line: 113, type: !595, isLocal: false, isDefinition: true, scopeLine: 113, flags: DIFlagPrototyped, isOptimized: false, function: void (%"class.std::allocator"*)* @_ZNSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEC2Ev, declaration: !594, variables: !200)
!919 = !MDSubprogram(name: "new_allocator", linkageName: "_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEC2Ev", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !239, line: 79, type: !607, isLocal: false, isDefinition: true, scopeLine: 79, flags: DIFlagPrototyped, isOptimized: false, function: void (%"class.__gnu_cxx::new_allocator"*)* @_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEC2Ev, declaration: !606, variables: !200)
!920 = !MDSubprogram(name: "_M_initialize", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EE13_M_initializeEv", scope: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EEE", file: !4, line: 614, type: !535, isLocal: false, isDefinition: true, scopeLine: 615, flags: DIFlagPrototyped, isOptimized: false, function: void (%"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Rb_tree_impl"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EE13_M_initializeEv, declaration: !542, variables: !200)
!921 = !MDSubprogram(name: "find", linkageName: "_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE4findERS9_", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 845, type: !161, isLocal: false, isDefinition: true, scopeLine: 846, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_node_base"* (%"class.std::map"*, %"class.std::__cxx11::basic_string"*)* @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE4findERS9_, declaration: !160, variables: !200)
!922 = !MDSubprogram(name: "find", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE4findERS7_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 2293, type: !489, isLocal: false, isDefinition: true, scopeLine: 2294, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_node_base"* (%"class.std::_Rb_tree"*, %"class.std::__cxx11::basic_string"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE4findERS7_, declaration: !488, variables: !200)
!923 = !MDSubprogram(name: "_M_lower_bound", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE14_M_lower_boundEPSt13_Rb_tree_nodeIS8_ESH_RS7_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1624, type: !404, isLocal: false, isDefinition: true, scopeLine: 1626, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_node_base"* (%"class.std::_Rb_tree"*, %"struct.std::_Rb_tree_node"*, %"struct.std::_Rb_tree_node"*, %"class.std::__cxx11::basic_string"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE14_M_lower_boundEPSt13_Rb_tree_nodeIS8_ESH_RS7_, declaration: !403, variables: !200)
!924 = !MDSubprogram(name: "_S_key", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_S_keyEPKSt13_Rb_tree_nodeIS8_E", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 674, type: !358, isLocal: false, isDefinition: true, scopeLine: 675, flags: DIFlagPrototyped, isOptimized: false, function: %"class.std::__cxx11::basic_string"* (%"struct.std::_Rb_tree_node"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_S_keyEPKSt13_Rb_tree_nodeIS8_E, declaration: !357, variables: !200)
!925 = !MDSubprogram(name: "operator()", linkageName: "_ZNKSt10_Select1stISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEclERKS8_", scope: !"_ZTSSt10_Select1stISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !188, line: 891, type: !522, isLocal: false, isDefinition: true, scopeLine: 892, flags: DIFlagPrototyped, isOptimized: false, function: %"class.std::__cxx11::basic_string"* (%"struct.std::_Select1st"*, %"struct.std::pair"*)* @_ZNKSt10_Select1stISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEclERKS8_, declaration: !521, variables: !200)
!926 = !MDSubprogram(name: "_S_value", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_S_valueEPKSt13_Rb_tree_nodeIS8_E", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 670, type: !354, isLocal: false, isDefinition: true, scopeLine: 671, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::pair"* (%"struct.std::_Rb_tree_node"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_S_valueEPKSt13_Rb_tree_nodeIS8_E, declaration: !353, variables: !200)
!927 = !MDSubprogram(name: "_M_valptr", linkageName: "_ZNKSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE9_M_valptrEv", scope: !"_ZTSSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 146, type: !584, isLocal: false, isDefinition: true, scopeLine: 147, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::pair"* (%"struct.std::_Rb_tree_node"*)* @_ZNKSt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE9_M_valptrEv, declaration: !583, variables: !200)
!928 = !MDSubprogram(name: "__addressof<const std::pair<const std::__cxx11::basic_string<char>, int> >", linkageName: "_ZSt11__addressofIKSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEPT_RSA_", scope: !5, file: !901, line: 47, type: !929, isLocal: false, isDefinition: true, scopeLine: 48, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::pair"* (%"struct.std::pair"*)* @_ZSt11__addressofIKSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEPT_RSA_, templateParams: !931, variables: !200)
!929 = !MDSubroutineType(types: !930)
!930 = !{!264, !267}
!931 = !{!932}
!932 = !MDTemplateTypeParameter(name: "_Tp", type: !265)
!933 = !MDSubprogram(name: "_Rb_tree_iterator", linkageName: "_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2EPSt18_Rb_tree_node_base", scope: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 191, type: !731, isLocal: false, isDefinition: true, scopeLine: 192, flags: DIFlagPrototyped, isOptimized: false, function: void (%"struct.std::_Rb_tree_iterator"*, %"struct.std::_Rb_tree_node_base"*)* @_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2EPSt18_Rb_tree_node_base, declaration: !730, variables: !200)
!934 = !MDSubprogram(name: "_M_end", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_M_endEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 662, type: !310, isLocal: false, isDefinition: true, scopeLine: 663, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_node"* (%"class.std::_Rb_tree"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_M_endEv, declaration: !351, variables: !200)
!935 = !MDSubprogram(name: "end", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE3endEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 877, type: !432, isLocal: false, isDefinition: true, scopeLine: 878, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_node_base"* (%"class.std::_Rb_tree"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE3endEv, declaration: !437, variables: !200)
!936 = !MDSubprogram(name: "operator()", linkageName: "_ZNKSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEclERKS5_S8_", scope: !"_ZTSSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEE", file: !188, line: 386, type: !192, isLocal: false, isDefinition: true, scopeLine: 387, flags: DIFlagPrototyped, isOptimized: false, function: i1 (%"struct.std::less"*, %"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"*)* @_ZNKSt4lessINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEclERKS5_S8_, declaration: !191, variables: !200)
!937 = !MDSubprogram(name: "operator<<char, std::char_traits<char>, std::allocator<char> >", linkageName: "_ZStltIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EESA_", scope: !5, file: !938, line: 4987, type: !939, isLocal: false, isDefinition: true, scopeLine: 4989, flags: DIFlagPrototyped, isOptimized: false, function: i1 (%"class.std::__cxx11::basic_string"*, %"class.std::__cxx11::basic_string"*)* @_ZStltIcSt11char_traitsIcESaIcEEbRKNSt7__cxx1112basic_stringIT_T0_T1_EESA_, templateParams: !941, variables: !200)
!938 = !MDFile(filename: "/usr/lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/bits/basic_string.h", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!939 = !MDSubroutineType(types: !940)
!940 = !{!46, !195, !195}
!941 = !{!850, !942, !943}
!942 = !MDTemplateTypeParameter(name: "_Traits", type: !"_ZTSSt11char_traitsIcE")
!943 = !MDTemplateTypeParameter(name: "_Alloc", type: !"_ZTSSaIcE")
!944 = !MDSubprogram(name: "_S_key", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_S_keyEPKSt18_Rb_tree_node_base", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 698, type: !372, isLocal: false, isDefinition: true, scopeLine: 699, flags: DIFlagPrototyped, isOptimized: false, function: %"class.std::__cxx11::basic_string"* (%"struct.std::_Rb_tree_node_base"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE6_S_keyEPKSt18_Rb_tree_node_base, declaration: !371, variables: !200)
!945 = !MDSubprogram(name: "_S_value", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_S_valueEPKSt18_Rb_tree_node_base", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 694, type: !369, isLocal: false, isDefinition: true, scopeLine: 695, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::pair"* (%"struct.std::_Rb_tree_node_base"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8_S_valueEPKSt18_Rb_tree_node_base, declaration: !368, variables: !200)
!946 = !MDSubprogram(name: "end", linkageName: "_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE3endEv", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 356, type: !83, isLocal: false, isDefinition: true, scopeLine: 357, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_node_base"* (%"class.std::map"*)* @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE3endEv, declaration: !92, variables: !200)
!947 = !MDSubprogram(name: "operator==", linkageName: "_ZNKSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEeqERKS9_", scope: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 233, type: !754, isLocal: false, isDefinition: true, scopeLine: 234, flags: DIFlagPrototyped, isOptimized: false, function: i1 (%"struct.std::_Rb_tree_iterator"*, %"struct.std::_Rb_tree_iterator"*)* @_ZNKSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEeqERKS9_, declaration: !753, variables: !200)
!948 = !MDSubprogram(name: "operator[]", linkageName: "_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEEixERS9_", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 474, type: !118, isLocal: false, isDefinition: true, scopeLine: 475, flags: DIFlagPrototyped, isOptimized: false, function: i32* (%"class.std::map"*, %"class.std::__cxx11::basic_string"*)* @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEEixERS9_, declaration: !117, variables: !200)
!949 = !MDSubprogram(name: "lower_bound", linkageName: "_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE11lower_boundERS9_", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 915, type: !161, isLocal: false, isDefinition: true, scopeLine: 916, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_node_base"* (%"class.std::map"*, %"class.std::__cxx11::basic_string"*)* @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE11lower_boundERS9_, declaration: !169, variables: !200)
!950 = !MDSubprogram(name: "lower_bound", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11lower_boundERS7_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1090, type: !489, isLocal: false, isDefinition: true, scopeLine: 1091, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_node_base"* (%"class.std::_Rb_tree"*, %"class.std::__cxx11::basic_string"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11lower_boundERS7_, declaration: !497, variables: !200)
!951 = !MDSubprogram(name: "key_comp", linkageName: "_ZNKSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE8key_compEv", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 818, type: !154, isLocal: false, isDefinition: true, scopeLine: 819, flags: DIFlagPrototyped, isOptimized: false, function: void (%"class.std::map"*)* @_ZNKSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE8key_compEv, declaration: !153, variables: !200)
!952 = !MDSubprogram(name: "key_comp", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8key_compEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 865, type: !429, isLocal: false, isDefinition: true, scopeLine: 866, flags: DIFlagPrototyped, isOptimized: false, function: void (%"class.std::_Rb_tree"*)* @_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE8key_compEv, declaration: !428, variables: !200)
!953 = !MDSubprogram(name: "operator*", linkageName: "_ZNKSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEdeEv", scope: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 195, type: !734, isLocal: false, isDefinition: true, scopeLine: 196, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::pair"* (%"struct.std::_Rb_tree_iterator"*)* @_ZNKSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEdeEv, declaration: !733, variables: !200)
!954 = !MDSubprogram(name: "insert", linkageName: "_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE6insertESt17_Rb_tree_iteratorISA_ERKSA_", scope: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", file: !53, line: 664, type: !138, isLocal: false, isDefinition: true, scopeLine: 666, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_node_base"* (%"class.std::map"*, %"struct.std::_Rb_tree_node_base"*, %"struct.std::pair"*)* @_ZNSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE6insertESt17_Rb_tree_iteratorISA_ERKSA_, declaration: !137, variables: !200)
!955 = !MDSubprogram(name: "_M_insert_unique_", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE17_M_insert_unique_ESt23_Rb_tree_const_iteratorIS8_ERKS8_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 981, type: !463, isLocal: false, isDefinition: true, scopeLine: 982, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_node_base"* (%"class.std::_Rb_tree"*, %"struct.std::_Rb_tree_node_base"*, %"struct.std::pair"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE17_M_insert_unique_ESt23_Rb_tree_const_iteratorIS8_ERKS8_, declaration: !462, variables: !200)
!956 = !MDSubprogram(name: "_Alloc_node", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_Alloc_nodeC2ERSE_", scope: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_Alloc_nodeE", file: !4, line: 449, type: !857, isLocal: false, isDefinition: true, scopeLine: 450, flags: DIFlagPrototyped, isOptimized: false, function: void (%"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"*, %"class.std::_Rb_tree"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_Alloc_nodeC2ERSE_, declaration: !856, variables: !200)
!957 = !MDSubprogram(name: "_M_insert_unique_<std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node>", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE17_M_insert_unique_INSE_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS8_ESt23_Rb_tree_const_iteratorIS8_ERKS8_RT_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1964, type: !958, isLocal: false, isDefinition: true, scopeLine: 1971, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_node_base"* (%"class.std::_Rb_tree"*, %"struct.std::_Rb_tree_node_base"*, %"struct.std::pair"*, %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE17_M_insert_unique_INSE_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS8_ESt23_Rb_tree_const_iteratorIS8_ERKS8_RT_, templateParams: !961, declaration: !963, variables: !200)
!958 = !MDSubroutineType(types: !959)
!959 = !{!86, !297, !91, !320, !960}
!960 = !MDDerivedType(tag: DW_TAG_reference_type, baseType: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_Alloc_nodeE")
!961 = !{!962}
!962 = !MDTemplateTypeParameter(name: "_NodeGen", type: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_Alloc_nodeE")
!963 = !MDSubprogram(name: "_M_insert_unique_<std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node>", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE17_M_insert_unique_INSE_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS8_ESt23_Rb_tree_const_iteratorIS8_ERKS8_RT_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 977, type: !958, isLocal: false, isDefinition: false, scopeLine: 977, flags: DIFlagPublic | DIFlagPrototyped, isOptimized: false, templateParams: !961)
!964 = !MDSubprogram(name: "_M_get_insert_hint_unique_pos", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS8_ERS7_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1903, type: !390, isLocal: false, isDefinition: true, scopeLine: 1905, flags: DIFlagPrototyped, isOptimized: false, function: { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* } (%"class.std::_Rb_tree"*, %"struct.std::_Rb_tree_node_base"*, %"class.std::__cxx11::basic_string"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS8_ERS7_, declaration: !389, variables: !200)
!965 = !MDSubprogram(name: "_M_const_cast", linkageName: "_ZNKSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE13_M_const_castEv", scope: !"_ZTSSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 270, type: !694, isLocal: false, isDefinition: true, scopeLine: 271, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_node_base"* (%"struct.std::_Rb_tree_const_iterator"*)* @_ZNKSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE13_M_const_castEv, declaration: !693, variables: !200)
!966 = !MDSubprogram(name: "size", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE4sizeEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 905, type: !451, isLocal: false, isDefinition: true, scopeLine: 906, flags: DIFlagPrototyped, isOptimized: false, function: i64 (%"class.std::_Rb_tree"*)* @_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE4sizeEv, declaration: !450, variables: !200)
!967 = !MDSubprogram(name: "_M_rightmost", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE12_M_rightmostEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 643, type: !329, isLocal: false, isDefinition: true, scopeLine: 644, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_node_base"** (%"class.std::_Rb_tree"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE12_M_rightmostEv, declaration: !342, variables: !200)
!968 = !MDSubprogram(name: "pair", linkageName: "_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2ERKS1_S4_", scope: !"_ZTSSt4pairIPSt18_Rb_tree_node_baseS1_E", file: !222, line: 112, type: !669, isLocal: false, isDefinition: true, scopeLine: 113, flags: DIFlagPrototyped, isOptimized: false, function: void (%"struct.std::pair.6"*, %"struct.std::_Rb_tree_node_base"**, %"struct.std::_Rb_tree_node_base"**)* @_ZNSt4pairIPSt18_Rb_tree_node_baseS1_EC2ERKS1_S4_, declaration: !668, variables: !200)
!969 = !MDSubprogram(name: "_M_get_insert_unique_pos", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE24_M_get_insert_unique_posERS7_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1801, type: !383, isLocal: false, isDefinition: true, scopeLine: 1802, flags: DIFlagPrototyped, isOptimized: false, function: { %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"* } (%"class.std::_Rb_tree"*, %"class.std::__cxx11::basic_string"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE24_M_get_insert_unique_posERS7_, declaration: !382, variables: !200)
!970 = !MDSubprogram(name: "begin", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE5beginEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 869, type: !432, isLocal: false, isDefinition: true, scopeLine: 870, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_node_base"* (%"class.std::_Rb_tree"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE5beginEv, declaration: !431, variables: !200)
!971 = !MDSubprogram(name: "_M_leftmost", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_M_leftmostEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 635, type: !329, isLocal: false, isDefinition: true, scopeLine: 636, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_node_base"** (%"class.std::_Rb_tree"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_M_leftmostEv, declaration: !340, variables: !200)
!972 = !MDSubprogram(name: "operator--", linkageName: "_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEmmEv", scope: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 218, type: !744, isLocal: false, isDefinition: true, scopeLine: 219, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_iterator"* (%"struct.std::_Rb_tree_iterator"*)* @_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEmmEv, declaration: !751, variables: !200)
!973 = !MDSubprogram(name: "operator++", linkageName: "_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEppEv", scope: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 203, type: !744, isLocal: false, isDefinition: true, scopeLine: 204, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_iterator"* (%"struct.std::_Rb_tree_iterator"*)* @_ZNSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEppEv, declaration: !743, variables: !200)
!974 = !MDSubprogram(name: "_M_insert_<std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node>", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE10_M_insert_INSE_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS8_EPSt18_Rb_tree_node_baseSK_RKS8_RT_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 1497, type: !975, isLocal: false, isDefinition: true, scopeLine: 1504, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_node_base"* (%"class.std::_Rb_tree"*, %"struct.std::_Rb_tree_node_base"*, %"struct.std::_Rb_tree_node_base"*, %"struct.std::pair"*, %"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE10_M_insert_INSE_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS8_EPSt18_Rb_tree_node_baseSK_RKS8_RT_, templateParams: !961, declaration: !977, variables: !200)
!975 = !MDSubroutineType(types: !976)
!976 = !{!86, !297, !332, !332, !320, !960}
!977 = !MDSubprogram(name: "_M_insert_<std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node>", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE10_M_insert_INSE_11_Alloc_nodeEEESt17_Rb_tree_iteratorIS8_EPSt18_Rb_tree_node_baseSK_RKS8_RT_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 763, type: !975, isLocal: false, isDefinition: false, scopeLine: 763, flags: DIFlagPrototyped, isOptimized: false, templateParams: !961)
!978 = !MDSubprogram(name: "operator()<std::pair<const std::__cxx11::basic_string<char>, int> >", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_Alloc_nodeclIS8_EEPSt13_Rb_tree_nodeIS8_ERKT_", scope: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_Alloc_nodeE", file: !4, line: 455, type: !979, isLocal: false, isDefinition: true, scopeLine: 459, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_node"* (%"struct.std::_Rb_tree<std::__cxx11::basic_string<char>, std::pair<const std::__cxx11::basic_string<char>, int>, std::_Select1st<std::pair<const std::__cxx11::basic_string<char>, int> >, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::pair<const std::__cxx11::basic_string<char>, int> > >::_Alloc_node"*, %"struct.std::pair"*)* @_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_Alloc_nodeclIS8_EEPSt13_Rb_tree_nodeIS8_ERKT_, templateParams: !983, declaration: !984, variables: !200)
!979 = !MDSubroutineType(types: !980)
!980 = !{!312, !981, !267}
!981 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !982, size: 64, align: 64, flags: DIFlagArtificial | DIFlagObjectPointer)
!982 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_Alloc_nodeE")
!983 = !{!768}
!984 = !MDSubprogram(name: "operator()<std::pair<const std::__cxx11::basic_string<char>, int> >", linkageName: "_ZNKSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_Alloc_nodeclIS8_EEPSt13_Rb_tree_nodeIS8_ERKT_", scope: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_Alloc_nodeE", file: !4, line: 455, type: !979, isLocal: false, isDefinition: false, scopeLine: 455, flags: DIFlagPrototyped, isOptimized: false, templateParams: !983)
!985 = !MDSubprogram(name: "_M_create_node", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE14_M_create_nodeERKS8_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 511, type: !324, isLocal: false, isDefinition: true, scopeLine: 512, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_node"* (%"class.std::_Rb_tree"*, %"struct.std::pair"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE14_M_create_nodeERKS8_, declaration: !323, variables: !200)
!986 = !MDSubprogram(name: "_M_get_node", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_M_get_nodeEv", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 490, type: !310, isLocal: false, isDefinition: true, scopeLine: 491, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_node"* (%"class.std::_Rb_tree"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_M_get_nodeEv, declaration: !309, variables: !200)
!987 = !MDSubprogram(name: "allocate", linkageName: "_ZN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE8allocateERSC_m", scope: !"_ZTSN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEEE", file: !295, line: 181, type: !774, isLocal: false, isDefinition: true, scopeLine: 182, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_node"* (%"class.std::allocator"*, i64)* @_ZN9__gnu_cxx14__alloc_traitsISaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE8allocateERSC_m, declaration: !773, variables: !200)
!988 = !MDSubprogram(name: "allocate", linkageName: "_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE8allocateEmPKv", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !239, line: 99, type: !630, isLocal: false, isDefinition: true, scopeLine: 100, flags: DIFlagPrototyped, isOptimized: false, function: %"struct.std::_Rb_tree_node"* (%"class.__gnu_cxx::new_allocator"*, i64, i8*)* @_ZN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE8allocateEmPKv, declaration: !629, variables: !200)
!989 = !MDSubprogram(name: "max_size", linkageName: "_ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE8max_sizeEv", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", file: !239, line: 113, type: !636, isLocal: false, isDefinition: true, scopeLine: 114, flags: DIFlagPrototyped, isOptimized: false, function: i64 (%"class.__gnu_cxx::new_allocator"*)* @_ZNK9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE8max_sizeEv, declaration: !635, variables: !200)
!990 = !MDSubprogram(name: "_M_construct_node", linkageName: "_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE17_M_construct_nodeEPSt13_Rb_tree_nodeIS8_ERKS8_", scope: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", file: !4, line: 499, type: !318, isLocal: false, isDefinition: true, scopeLine: 500, flags: DIFlagPrototyped, isOptimized: false, function: void (%"class.std::_Rb_tree"*, %"struct.std::_Rb_tree_node"*, %"struct.std::pair"*)* @_ZNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE17_M_construct_nodeEPSt13_Rb_tree_nodeIS8_ERKS8_, declaration: !317, variables: !200)
!991 = !MDSubprogram(name: "construct", linkageName: "_ZN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE9constructEPS9_RKS9_", scope: !"_ZTSN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", file: !239, line: 129, type: !281, isLocal: false, isDefinition: true, scopeLine: 130, flags: DIFlagPrototyped, isOptimized: false, function: void (%"class.__gnu_cxx::new_allocator.4"*, %"struct.std::pair"*, %"struct.std::pair"*)* @_ZN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE9constructEPS9_RKS9_, declaration: !280, variables: !200)
!992 = !MDSubprogram(name: "pair", linkageName: "_ZNSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEC2ERKS7_", scope: !"_ZTSSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiE", file: !222, line: 96, type: !993, isLocal: false, isDefinition: true, scopeLine: 96, flags: DIFlagArtificial | DIFlagPrototyped, isOptimized: false, function: void (%"struct.std::pair"*, %"struct.std::pair"*)* @_ZNSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEC2ERKS7_, declaration: !995, variables: !200)
!993 = !MDSubroutineType(types: !994)
!994 = !{null, !229, !267}
!995 = !MDSubprogram(name: "pair", scope: !"_ZTSSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiE", type: !993, isLocal: false, isDefinition: false, flags: DIFlagArtificial | DIFlagPrototyped, isOptimized: false)
!996 = !MDSubprogram(name: "_Rb_tree_const_iterator", linkageName: "_ZNSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2ERKSt17_Rb_tree_iteratorIS8_E", scope: !"_ZTSSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", file: !4, line: 266, type: !688, isLocal: false, isDefinition: true, scopeLine: 267, flags: DIFlagPrototyped, isOptimized: false, function: void (%"struct.std::_Rb_tree_const_iterator"*, %"struct.std::_Rb_tree_iterator"*)* @_ZNSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEC2ERKSt17_Rb_tree_iteratorIS8_E, declaration: !687, variables: !200)
!997 = !MDSubprogram(name: "pair", linkageName: "_ZNSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEC2ERS6_RKi", scope: !"_ZTSSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiE", file: !222, line: 112, type: !231, isLocal: false, isDefinition: true, scopeLine: 113, flags: DIFlagPrototyped, isOptimized: false, function: void (%"struct.std::pair"*, %"class.std::__cxx11::basic_string"*, i32*)* @_ZNSt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEC2ERS6_RKi, declaration: !230, variables: !200)
!998 = !MDSubprogram(linkageName: "_GLOBAL__sub_I_printLine.cpp", scope: !1, file: !1, type: !999, isLocal: true, isDefinition: true, flags: DIFlagArtificial, isOptimized: false, function: void ()* @_GLOBAL__sub_I_printLine.cpp, variables: !200)
!999 = !MDSubroutineType(types: !200)
!1000 = !{!1001, !1002, !1003, !1004}
!1001 = !MDGlobalVariable(name: "__ioinit", linkageName: "_ZStL8__ioinit", scope: !5, file: !863, line: 74, type: !"_ZTSNSt8ios_base4InitE", isLocal: true, isDefinition: true, variable: %"class.std::ios_base::Init"* @_ZStL8__ioinit)
!1002 = !MDGlobalVariable(name: "level", scope: !0, file: !1, line: 9, type: !15, isLocal: false, isDefinition: true, variable: i32* @level)
!1003 = !MDGlobalVariable(name: "nodeNumber", scope: !0, file: !1, line: 10, type: !15, isLocal: false, isDefinition: true, variable: i32* @nodeNumber)
!1004 = !MDGlobalVariable(name: "nodes", scope: !0, file: !1, line: 11, type: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", isLocal: false, isDefinition: true, variable: %"class.std::map"* @nodes)
!1005 = !{!1006, !1009, !1012, !1016, !1023, !1031, !1035, !1042, !1046, !1050, !1052, !1054, !1058, !1068, !1072, !1078, !1084, !1086, !1090, !1094, !1098, !1102, !1108, !1110, !1114, !1118, !1122, !1124, !1129, !1133, !1137, !1139, !1141, !1145, !1152, !1156, !1160, !1164, !1166, !1172, !1174, !1181, !1186, !1190, !1195, !1199, !1203, !1207, !1209, !1211, !1215, !1219, !1223, !1225, !1229, !1233, !1235, !1237, !1241, !1246, !1251, !1256, !1257, !1258, !1259, !1263, !1264, !1268, !1273, !1278, !1280, !1282, !1284, !1286, !1288, !1290, !1292, !1294, !1296, !1298, !1300, !1302, !1303, !1305, !1312, !1314, !1315, !1317, !1319, !1321, !1323, !1327, !1329, !1331, !1333, !1335, !1337, !1339, !1341, !1343, !1347, !1351, !1353, !1357, !1361}
!1006 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1007, line: 64)
!1007 = !MDDerivedType(tag: DW_TAG_typedef, name: "mbstate_t", file: !12, line: 106, baseType: !1008)
!1008 = !MDDerivedType(tag: DW_TAG_typedef, name: "__mbstate_t", file: !12, line: 94, baseType: !"_ZTS11__mbstate_t")
!1009 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1010, line: 139)
!1010 = !MDDerivedType(tag: DW_TAG_typedef, name: "wint_t", file: !1011, line: 132, baseType: !20)
!1011 = !MDFile(filename: "/home/troy/llvm-dsa/Debug+Asserts/bin/../lib/clang/3.7.0/include/stddef.h", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!1012 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1013, line: 141)
!1013 = !MDSubprogram(name: "btowc", scope: !12, file: !12, line: 356, type: !1014, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1014 = !MDSubroutineType(types: !1015)
!1015 = !{!1010, !15}
!1016 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1017, line: 142)
!1017 = !MDSubprogram(name: "fgetwc", scope: !12, file: !12, line: 748, type: !1018, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1018 = !MDSubroutineType(types: !1019)
!1019 = !{!1010, !1020}
!1020 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !1021, size: 64, align: 64)
!1021 = !MDDerivedType(tag: DW_TAG_typedef, name: "__FILE", file: !1022, line: 64, baseType: !"_ZTS8_IO_FILE")
!1022 = !MDFile(filename: "/usr/include/stdio.h", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!1023 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1024, line: 143)
!1024 = !MDSubprogram(name: "fgetws", scope: !12, file: !12, line: 777, type: !1025, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1025 = !MDSubroutineType(types: !1026)
!1026 = !{!1027, !1029, !15, !1030}
!1027 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !1028, size: 64, align: 64)
!1028 = !MDBasicType(name: "wchar_t", size: 32, align: 32, encoding: DW_ATE_signed)
!1029 = !MDDerivedType(tag: DW_TAG_restrict_type, baseType: !1027)
!1030 = !MDDerivedType(tag: DW_TAG_restrict_type, baseType: !1020)
!1031 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1032, line: 144)
!1032 = !MDSubprogram(name: "fputwc", scope: !12, file: !12, line: 762, type: !1033, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1033 = !MDSubroutineType(types: !1034)
!1034 = !{!1010, !1028, !1020}
!1035 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1036, line: 145)
!1036 = !MDSubprogram(name: "fputws", scope: !12, file: !12, line: 784, type: !1037, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1037 = !MDSubroutineType(types: !1038)
!1038 = !{!15, !1039, !1030}
!1039 = !MDDerivedType(tag: DW_TAG_restrict_type, baseType: !1040)
!1040 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !1041, size: 64, align: 64)
!1041 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !1028)
!1042 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1043, line: 146)
!1043 = !MDSubprogram(name: "fwide", scope: !12, file: !12, line: 590, type: !1044, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1044 = !MDSubroutineType(types: !1045)
!1045 = !{!15, !1020, !15}
!1046 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1047, line: 147)
!1047 = !MDSubprogram(name: "fwprintf", scope: !12, file: !12, line: 597, type: !1048, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1048 = !MDSubroutineType(types: !1049)
!1049 = !{!15, !1030, !1039, null}
!1050 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1051, line: 148)
!1051 = !MDSubprogram(name: "fwscanf", scope: !12, file: !12, line: 638, type: !1048, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1052 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1053, line: 149)
!1053 = !MDSubprogram(name: "getwc", scope: !12, file: !12, line: 749, type: !1018, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1054 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1055, line: 150)
!1055 = !MDSubprogram(name: "getwchar", scope: !12, file: !12, line: 755, type: !1056, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1056 = !MDSubroutineType(types: !1057)
!1057 = !{!1010}
!1058 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1059, line: 151)
!1059 = !MDSubprogram(name: "mbrlen", scope: !12, file: !12, line: 379, type: !1060, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1060 = !MDSubroutineType(types: !1061)
!1061 = !{!1062, !1063, !1062, !1066}
!1062 = !MDDerivedType(tag: DW_TAG_typedef, name: "size_t", file: !1011, line: 62, baseType: !115)
!1063 = !MDDerivedType(tag: DW_TAG_restrict_type, baseType: !1064)
!1064 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !1065, size: 64, align: 64)
!1065 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !23)
!1066 = !MDDerivedType(tag: DW_TAG_restrict_type, baseType: !1067)
!1067 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !1007, size: 64, align: 64)
!1068 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1069, line: 152)
!1069 = !MDSubprogram(name: "mbrtowc", scope: !12, file: !12, line: 368, type: !1070, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1070 = !MDSubroutineType(types: !1071)
!1071 = !{!1062, !1029, !1063, !1062, !1066}
!1072 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1073, line: 153)
!1073 = !MDSubprogram(name: "mbsinit", scope: !12, file: !12, line: 364, type: !1074, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1074 = !MDSubroutineType(types: !1075)
!1075 = !{!15, !1076}
!1076 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !1077, size: 64, align: 64)
!1077 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !1007)
!1078 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1079, line: 154)
!1079 = !MDSubprogram(name: "mbsrtowcs", scope: !12, file: !12, line: 411, type: !1080, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1080 = !MDSubroutineType(types: !1081)
!1081 = !{!1062, !1029, !1082, !1062, !1066}
!1082 = !MDDerivedType(tag: DW_TAG_restrict_type, baseType: !1083)
!1083 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !1064, size: 64, align: 64)
!1084 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1085, line: 155)
!1085 = !MDSubprogram(name: "putwc", scope: !12, file: !12, line: 763, type: !1033, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1086 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1087, line: 156)
!1087 = !MDSubprogram(name: "putwchar", scope: !12, file: !12, line: 769, type: !1088, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1088 = !MDSubroutineType(types: !1089)
!1089 = !{!1010, !1028}
!1090 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1091, line: 158)
!1091 = !MDSubprogram(name: "swprintf", scope: !12, file: !12, line: 607, type: !1092, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1092 = !MDSubroutineType(types: !1093)
!1093 = !{!15, !1029, !1062, !1039, null}
!1094 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1095, line: 160)
!1095 = !MDSubprogram(name: "swscanf", scope: !12, file: !12, line: 648, type: !1096, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1096 = !MDSubroutineType(types: !1097)
!1097 = !{!15, !1039, !1039, null}
!1098 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1099, line: 161)
!1099 = !MDSubprogram(name: "ungetwc", scope: !12, file: !12, line: 792, type: !1100, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1100 = !MDSubroutineType(types: !1101)
!1101 = !{!1010, !1010, !1020}
!1102 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1103, line: 162)
!1103 = !MDSubprogram(name: "vfwprintf", scope: !12, file: !12, line: 615, type: !1104, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1104 = !MDSubroutineType(types: !1105)
!1105 = !{!15, !1030, !1039, !1106}
!1106 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !1107, size: 64, align: 64)
!1107 = !MDDerivedType(tag: DW_TAG_typedef, name: "__va_list_tag", file: !1, baseType: !"_ZTS13__va_list_tag")
!1108 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1109, line: 164)
!1109 = !MDSubprogram(name: "vfwscanf", scope: !12, file: !12, line: 692, type: !1104, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1110 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1111, line: 167)
!1111 = !MDSubprogram(name: "vswprintf", scope: !12, file: !12, line: 628, type: !1112, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1112 = !MDSubroutineType(types: !1113)
!1113 = !{!15, !1029, !1062, !1039, !1106}
!1114 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1115, line: 170)
!1115 = !MDSubprogram(name: "vswscanf", scope: !12, file: !12, line: 704, type: !1116, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1116 = !MDSubroutineType(types: !1117)
!1117 = !{!15, !1039, !1039, !1106}
!1118 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1119, line: 172)
!1119 = !MDSubprogram(name: "vwprintf", scope: !12, file: !12, line: 623, type: !1120, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1120 = !MDSubroutineType(types: !1121)
!1121 = !{!15, !1039, !1106}
!1122 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1123, line: 174)
!1123 = !MDSubprogram(name: "vwscanf", scope: !12, file: !12, line: 700, type: !1120, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1124 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1125, line: 176)
!1125 = !MDSubprogram(name: "wcrtomb", scope: !12, file: !12, line: 373, type: !1126, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1126 = !MDSubroutineType(types: !1127)
!1127 = !{!1062, !1128, !1028, !1066}
!1128 = !MDDerivedType(tag: DW_TAG_restrict_type, baseType: !870)
!1129 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1130, line: 177)
!1130 = !MDSubprogram(name: "wcscat", scope: !12, file: !12, line: 157, type: !1131, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1131 = !MDSubroutineType(types: !1132)
!1132 = !{!1027, !1029, !1039}
!1133 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1134, line: 178)
!1134 = !MDSubprogram(name: "wcscmp", scope: !12, file: !12, line: 166, type: !1135, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1135 = !MDSubroutineType(types: !1136)
!1136 = !{!15, !1040, !1040}
!1137 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1138, line: 179)
!1138 = !MDSubprogram(name: "wcscoll", scope: !12, file: !12, line: 195, type: !1135, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1139 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1140, line: 180)
!1140 = !MDSubprogram(name: "wcscpy", scope: !12, file: !12, line: 147, type: !1131, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1141 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1142, line: 181)
!1142 = !MDSubprogram(name: "wcscspn", scope: !12, file: !12, line: 255, type: !1143, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1143 = !MDSubroutineType(types: !1144)
!1144 = !{!1062, !1040, !1040}
!1145 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1146, line: 182)
!1146 = !MDSubprogram(name: "wcsftime", scope: !12, file: !12, line: 858, type: !1147, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1147 = !MDSubroutineType(types: !1148)
!1148 = !{!1062, !1029, !1062, !1039, !1149}
!1149 = !MDDerivedType(tag: DW_TAG_restrict_type, baseType: !1150)
!1150 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !1151, size: 64, align: 64)
!1151 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !"_ZTS2tm")
!1152 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1153, line: 183)
!1153 = !MDSubprogram(name: "wcslen", scope: !12, file: !12, line: 290, type: !1154, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1154 = !MDSubroutineType(types: !1155)
!1155 = !{!1062, !1040}
!1156 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1157, line: 184)
!1157 = !MDSubprogram(name: "wcsncat", scope: !12, file: !12, line: 161, type: !1158, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1158 = !MDSubroutineType(types: !1159)
!1159 = !{!1027, !1029, !1039, !1062}
!1160 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1161, line: 185)
!1161 = !MDSubprogram(name: "wcsncmp", scope: !12, file: !12, line: 169, type: !1162, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1162 = !MDSubroutineType(types: !1163)
!1163 = !{!15, !1040, !1040, !1062}
!1164 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1165, line: 186)
!1165 = !MDSubprogram(name: "wcsncpy", scope: !12, file: !12, line: 152, type: !1158, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1166 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1167, line: 187)
!1167 = !MDSubprogram(name: "wcsrtombs", scope: !12, file: !12, line: 417, type: !1168, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1168 = !MDSubroutineType(types: !1169)
!1169 = !{!1062, !1128, !1170, !1062, !1066}
!1170 = !MDDerivedType(tag: DW_TAG_restrict_type, baseType: !1171)
!1171 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !1040, size: 64, align: 64)
!1172 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1173, line: 188)
!1173 = !MDSubprogram(name: "wcsspn", scope: !12, file: !12, line: 259, type: !1143, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1174 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1175, line: 189)
!1175 = !MDSubprogram(name: "wcstod", scope: !12, file: !12, line: 453, type: !1176, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1176 = !MDSubroutineType(types: !1177)
!1177 = !{!1178, !1039, !1179}
!1178 = !MDBasicType(name: "double", size: 64, align: 64, encoding: DW_ATE_float)
!1179 = !MDDerivedType(tag: DW_TAG_restrict_type, baseType: !1180)
!1180 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !1027, size: 64, align: 64)
!1181 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1182, line: 191)
!1182 = !MDSubprogram(name: "wcstof", scope: !12, file: !12, line: 460, type: !1183, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1183 = !MDSubroutineType(types: !1184)
!1184 = !{!1185, !1039, !1179}
!1185 = !MDBasicType(name: "float", size: 32, align: 32, encoding: DW_ATE_float)
!1186 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1187, line: 193)
!1187 = !MDSubprogram(name: "wcstok", scope: !12, file: !12, line: 285, type: !1188, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1188 = !MDSubroutineType(types: !1189)
!1189 = !{!1027, !1029, !1039, !1179}
!1190 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1191, line: 194)
!1191 = !MDSubprogram(name: "wcstol", scope: !12, file: !12, line: 471, type: !1192, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1192 = !MDSubroutineType(types: !1193)
!1193 = !{!1194, !1039, !1179, !15}
!1194 = !MDBasicType(name: "long int", size: 64, align: 64, encoding: DW_ATE_signed)
!1195 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1196, line: 195)
!1196 = !MDSubprogram(name: "wcstoul", scope: !12, file: !12, line: 476, type: !1197, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1197 = !MDSubroutineType(types: !1198)
!1198 = !{!115, !1039, !1179, !15}
!1199 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1200, line: 196)
!1200 = !MDSubprogram(name: "wcsxfrm", scope: !12, file: !12, line: 199, type: !1201, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1201 = !MDSubroutineType(types: !1202)
!1202 = !{!1062, !1029, !1039, !1062}
!1203 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1204, line: 197)
!1204 = !MDSubprogram(name: "wctob", scope: !12, file: !12, line: 360, type: !1205, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1205 = !MDSubroutineType(types: !1206)
!1206 = !{!15, !1010}
!1207 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1208, line: 198)
!1208 = !MDSubprogram(name: "wmemcmp", scope: !12, file: !12, line: 328, type: !1162, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1209 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1210, line: 199)
!1210 = !MDSubprogram(name: "wmemcpy", scope: !12, file: !12, line: 332, type: !1158, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1211 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1212, line: 200)
!1212 = !MDSubprogram(name: "wmemmove", scope: !12, file: !12, line: 337, type: !1213, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1213 = !MDSubroutineType(types: !1214)
!1214 = !{!1027, !1027, !1040, !1062}
!1215 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1216, line: 201)
!1216 = !MDSubprogram(name: "wmemset", scope: !12, file: !12, line: 341, type: !1217, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1217 = !MDSubroutineType(types: !1218)
!1218 = !{!1027, !1027, !1028, !1062}
!1219 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1220, line: 202)
!1220 = !MDSubprogram(name: "wprintf", scope: !12, file: !12, line: 604, type: !1221, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1221 = !MDSubroutineType(types: !1222)
!1222 = !{!15, !1039, null}
!1223 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1224, line: 203)
!1224 = !MDSubprogram(name: "wscanf", scope: !12, file: !12, line: 645, type: !1221, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1225 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1226, line: 204)
!1226 = !MDSubprogram(name: "wcschr", scope: !12, file: !12, line: 230, type: !1227, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1227 = !MDSubroutineType(types: !1228)
!1228 = !{!1027, !1040, !1028}
!1229 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1230, line: 205)
!1230 = !MDSubprogram(name: "wcspbrk", scope: !12, file: !12, line: 269, type: !1231, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1231 = !MDSubroutineType(types: !1232)
!1232 = !{!1027, !1040, !1040}
!1233 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1234, line: 206)
!1234 = !MDSubprogram(name: "wcsrchr", scope: !12, file: !12, line: 240, type: !1227, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1235 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1236, line: 207)
!1236 = !MDSubprogram(name: "wcsstr", scope: !12, file: !12, line: 280, type: !1231, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1237 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1238, line: 208)
!1238 = !MDSubprogram(name: "wmemchr", scope: !12, file: !12, line: 323, type: !1239, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1239 = !MDSubroutineType(types: !1240)
!1240 = !{!1027, !1040, !1028, !1062}
!1241 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !240, entity: !1242, line: 248)
!1242 = !MDSubprogram(name: "wcstold", scope: !12, file: !12, line: 462, type: !1243, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1243 = !MDSubroutineType(types: !1244)
!1244 = !{!1245, !1039, !1179}
!1245 = !MDBasicType(name: "long double", size: 128, align: 128, encoding: DW_ATE_float)
!1246 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !240, entity: !1247, line: 257)
!1247 = !MDSubprogram(name: "wcstoll", scope: !12, file: !12, line: 486, type: !1248, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1248 = !MDSubroutineType(types: !1249)
!1249 = !{!1250, !1039, !1179, !15}
!1250 = !MDBasicType(name: "long long int", size: 64, align: 64, encoding: DW_ATE_signed)
!1251 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !240, entity: !1252, line: 258)
!1252 = !MDSubprogram(name: "wcstoull", scope: !12, file: !12, line: 493, type: !1253, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1253 = !MDSubroutineType(types: !1254)
!1254 = !{!1255, !1039, !1179, !15}
!1255 = !MDBasicType(name: "long long unsigned int", size: 64, align: 64, encoding: DW_ATE_unsigned)
!1256 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1242, line: 264)
!1257 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1247, line: 265)
!1258 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1252, line: 266)
!1259 = !MDImportedEntity(tag: DW_TAG_imported_module, scope: !1260, entity: !1262, line: 56)
!1260 = !MDNamespace(name: "__gnu_debug", scope: null, file: !1261, line: 54)
!1261 = !MDFile(filename: "/usr/lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/debug/debug.h", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!1262 = !MDNamespace(name: "__debug", scope: !5, file: !1261, line: 48)
!1263 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !"_ZTS5lconv", line: 53)
!1264 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1265, line: 54)
!1265 = !MDSubprogram(name: "setlocale", scope: !37, file: !37, line: 124, type: !1266, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1266 = !MDSubroutineType(types: !1267)
!1267 = !{!870, !15, !1064}
!1268 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1269, line: 55)
!1269 = !MDSubprogram(name: "localeconv", scope: !37, file: !37, line: 127, type: !1270, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1270 = !MDSubroutineType(types: !1271)
!1271 = !{!1272}
!1272 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTS5lconv", size: 64, align: 64)
!1273 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1274, line: 64)
!1274 = !MDSubprogram(name: "isalnum", scope: !1275, file: !1275, line: 110, type: !1276, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1275 = !MDFile(filename: "/usr/include/ctype.h", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!1276 = !MDSubroutineType(types: !1277)
!1277 = !{!15, !15}
!1278 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1279, line: 65)
!1279 = !MDSubprogram(name: "isalpha", scope: !1275, file: !1275, line: 111, type: !1276, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1280 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1281, line: 66)
!1281 = !MDSubprogram(name: "iscntrl", scope: !1275, file: !1275, line: 112, type: !1276, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1282 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1283, line: 67)
!1283 = !MDSubprogram(name: "isdigit", scope: !1275, file: !1275, line: 113, type: !1276, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1284 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1285, line: 68)
!1285 = !MDSubprogram(name: "isgraph", scope: !1275, file: !1275, line: 115, type: !1276, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1286 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1287, line: 69)
!1287 = !MDSubprogram(name: "islower", scope: !1275, file: !1275, line: 114, type: !1276, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1288 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1289, line: 70)
!1289 = !MDSubprogram(name: "isprint", scope: !1275, file: !1275, line: 116, type: !1276, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1290 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1291, line: 71)
!1291 = !MDSubprogram(name: "ispunct", scope: !1275, file: !1275, line: 117, type: !1276, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1292 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1293, line: 72)
!1293 = !MDSubprogram(name: "isspace", scope: !1275, file: !1275, line: 118, type: !1276, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1294 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1295, line: 73)
!1295 = !MDSubprogram(name: "isupper", scope: !1275, file: !1275, line: 119, type: !1276, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1296 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1297, line: 74)
!1297 = !MDSubprogram(name: "isxdigit", scope: !1275, file: !1275, line: 120, type: !1276, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1298 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1299, line: 75)
!1299 = !MDSubprogram(name: "tolower", scope: !1275, file: !1275, line: 124, type: !1276, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1300 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1301, line: 76)
!1301 = !MDSubprogram(name: "toupper", scope: !1275, file: !1275, line: 127, type: !1276, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1302 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !240, entity: !114, line: 44)
!1303 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !240, entity: !1304, line: 45)
!1304 = !MDDerivedType(tag: DW_TAG_typedef, name: "ptrdiff_t", scope: !5, file: !6, line: 197, baseType: !1194)
!1305 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1306, line: 82)
!1306 = !MDDerivedType(tag: DW_TAG_typedef, name: "wctrans_t", file: !1307, line: 186, baseType: !1308)
!1307 = !MDFile(filename: "/usr/include/wctype.h", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!1308 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !1309, size: 64, align: 64)
!1309 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !1310)
!1310 = !MDDerivedType(tag: DW_TAG_typedef, name: "__int32_t", file: !1311, line: 40, baseType: !15)
!1311 = !MDFile(filename: "/usr/include/x86_64-linux-gnu/bits/types.h", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!1312 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1313, line: 83)
!1313 = !MDDerivedType(tag: DW_TAG_typedef, name: "wctype_t", file: !1307, line: 52, baseType: !115)
!1314 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1010, line: 84)
!1315 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1316, line: 86)
!1316 = !MDSubprogram(name: "iswalnum", scope: !1307, file: !1307, line: 111, type: !1205, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1317 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1318, line: 87)
!1318 = !MDSubprogram(name: "iswalpha", scope: !1307, file: !1307, line: 117, type: !1205, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1319 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1320, line: 89)
!1320 = !MDSubprogram(name: "iswblank", scope: !1307, file: !1307, line: 162, type: !1205, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1321 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1322, line: 91)
!1322 = !MDSubprogram(name: "iswcntrl", scope: !1307, file: !1307, line: 120, type: !1205, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1323 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1324, line: 92)
!1324 = !MDSubprogram(name: "iswctype", scope: !1307, file: !1307, line: 175, type: !1325, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1325 = !MDSubroutineType(types: !1326)
!1326 = !{!15, !1010, !1313}
!1327 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1328, line: 93)
!1328 = !MDSubprogram(name: "iswdigit", scope: !1307, file: !1307, line: 124, type: !1205, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1329 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1330, line: 94)
!1330 = !MDSubprogram(name: "iswgraph", scope: !1307, file: !1307, line: 128, type: !1205, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1331 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1332, line: 95)
!1332 = !MDSubprogram(name: "iswlower", scope: !1307, file: !1307, line: 133, type: !1205, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1333 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1334, line: 96)
!1334 = !MDSubprogram(name: "iswprint", scope: !1307, file: !1307, line: 136, type: !1205, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1335 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1336, line: 97)
!1336 = !MDSubprogram(name: "iswpunct", scope: !1307, file: !1307, line: 141, type: !1205, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1337 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1338, line: 98)
!1338 = !MDSubprogram(name: "iswspace", scope: !1307, file: !1307, line: 146, type: !1205, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1339 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1340, line: 99)
!1340 = !MDSubprogram(name: "iswupper", scope: !1307, file: !1307, line: 151, type: !1205, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1341 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1342, line: 100)
!1342 = !MDSubprogram(name: "iswxdigit", scope: !1307, file: !1307, line: 156, type: !1205, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1343 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1344, line: 101)
!1344 = !MDSubprogram(name: "towctrans", scope: !1307, file: !1307, line: 221, type: !1345, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1345 = !MDSubroutineType(types: !1346)
!1346 = !{!1010, !1010, !1306}
!1347 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1348, line: 102)
!1348 = !MDSubprogram(name: "towlower", scope: !1307, file: !1307, line: 194, type: !1349, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1349 = !MDSubroutineType(types: !1350)
!1350 = !{!1010, !1010}
!1351 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1352, line: 103)
!1352 = !MDSubprogram(name: "towupper", scope: !1307, file: !1307, line: 197, type: !1349, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1353 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1354, line: 104)
!1354 = !MDSubprogram(name: "wctrans", scope: !1307, file: !1307, line: 218, type: !1355, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1355 = !MDSubroutineType(types: !1356)
!1356 = !{!1306, !1064}
!1357 = !MDImportedEntity(tag: DW_TAG_imported_declaration, scope: !5, entity: !1358, line: 105)
!1358 = !MDSubprogram(name: "wctype", scope: !1307, file: !1307, line: 171, type: !1359, isLocal: false, isDefinition: false, flags: DIFlagPrototyped, isOptimized: false)
!1359 = !MDSubroutineType(types: !1360)
!1360 = !{!1313, !1064}
!1361 = !MDImportedEntity(tag: DW_TAG_imported_module, scope: !0, entity: !5, line: 7)
!1362 = !{i32 2, !"Dwarf Version", i32 4}
!1363 = !{i32 2, !"Debug Info Version", i32 3}
!1364 = !{!"clang version 3.7.0 (trunk) (https://github.com/C0deZLee/llvm-dsa.git 37744f40c2bfa98b8b4cad0885aeb2cb1f84d8e0)"}
!1365 = !MDLocation(line: 74, column: 25, scope: !862)
!1366 = !MDLocation(line: 11, column: 18, scope: !866)
!1367 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !915, type: !1368, flags: DIFlagArtificial | DIFlagObjectPointer)
!1368 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSSt3mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiSt4lessIS5_ESaISt4pairIKS5_iEEE", size: 64, align: 64)
!1369 = !MDExpression()
!1370 = !MDLocation(line: 0, scope: !915)
!1371 = !MDLocation(line: 166, column: 9, scope: !915)
!1372 = !MDLocation(line: 166, column: 18, scope: !915)
!1373 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !881, type: !1368, flags: DIFlagArtificial | DIFlagObjectPointer)
!1374 = !MDLocation(line: 0, scope: !881)
!1375 = !MDLocation(line: 96, column: 11, scope: !1376)
!1376 = distinct !MDLexicalBlock(scope: !881, file: !53, line: 96, column: 11)
!1377 = !MDLocation(line: 96, column: 11, scope: !881)
!1378 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "filename", arg: 1, scope: !867, file: !1, line: 13, type: !870)
!1379 = !MDLocation(line: 13, column: 25, scope: !867)
!1380 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "start", arg: 2, scope: !867, file: !1, line: 13, type: !15)
!1381 = !MDLocation(line: 13, column: 39, scope: !867)
!1382 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "end", arg: 3, scope: !867, file: !1, line: 13, type: !15)
!1383 = !MDLocation(line: 13, column: 50, scope: !867)
!1384 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "key", scope: !867, file: !1, line: 14, type: !1385)
!1385 = !MDCompositeType(tag: DW_TAG_array_type, baseType: !23, size: 1024, align: 8, elements: !1386)
!1386 = !{!1387}
!1387 = !MDSubrange(count: 128)
!1388 = !MDLocation(line: 14, column: 7, scope: !867)
!1389 = !MDLocation(line: 15, column: 10, scope: !867)
!1390 = !MDLocation(line: 15, column: 27, scope: !867)
!1391 = !MDLocation(line: 15, column: 37, scope: !867)
!1392 = !MDLocation(line: 15, column: 44, scope: !867)
!1393 = !MDLocation(line: 15, column: 2, scope: !867)
!1394 = !MDLocation(line: 16, column: 24, scope: !1395)
!1395 = distinct !MDLexicalBlock(scope: !867, file: !1, line: 16, column: 6)
!1396 = !MDLocation(line: 16, column: 17, scope: !1395)
!1397 = !MDLocation(line: 16, column: 6, scope: !1398)
!1398 = !MDLexicalBlockFile(scope: !1395, file: !1, discriminator: 1)
!1399 = !MDLocation(line: 16, column: 6, scope: !1400)
!1400 = !MDLexicalBlockFile(scope: !1395, file: !1, discriminator: 2)
!1401 = !MDLocation(line: 16, column: 33, scope: !1395)
!1402 = !MDLocation(line: 16, column: 33, scope: !1403)
!1403 = !MDLexicalBlockFile(scope: !1395, file: !1, discriminator: 3)
!1404 = !MDLocation(line: 16, column: 30, scope: !1395)
!1405 = !MDLocation(line: 16, column: 6, scope: !1406)
!1406 = !MDLexicalBlockFile(scope: !1395, file: !1, discriminator: 4)
!1407 = !MDLocation(line: 16, column: 6, scope: !1408)
!1408 = !MDLexicalBlockFile(scope: !1395, file: !1, discriminator: 5)
!1409 = !MDLocation(line: 16, column: 6, scope: !867)
!1410 = !MDLocation(line: 17, column: 24, scope: !1411)
!1411 = distinct !MDLexicalBlock(scope: !1395, file: !1, line: 16, column: 46)
!1412 = !MDLocation(line: 17, column: 16, scope: !1411)
!1413 = !MDLocation(line: 17, column: 9, scope: !1411)
!1414 = !MDLocation(line: 17, column: 3, scope: !1415)
!1415 = !MDLexicalBlockFile(scope: !1411, file: !1, discriminator: 1)
!1416 = !MDLocation(line: 17, column: 22, scope: !1417)
!1417 = !MDLexicalBlockFile(scope: !1411, file: !1, discriminator: 2)
!1418 = !MDLocation(line: 17, column: 3, scope: !1411)
!1419 = !MDLocation(line: 17, column: 3, scope: !1420)
!1420 = !MDLexicalBlockFile(scope: !1411, file: !1, discriminator: 3)
!1421 = !MDLocation(line: 18, column: 8, scope: !1411)
!1422 = !MDLocation(line: 18, column: 29, scope: !1411)
!1423 = !MDLocation(line: 18, column: 16, scope: !1411)
!1424 = !MDLocation(line: 18, column: 32, scope: !1411)
!1425 = !MDLocation(line: 18, column: 45, scope: !1411)
!1426 = !MDLocation(line: 18, column: 42, scope: !1411)
!1427 = !MDLocation(line: 18, column: 49, scope: !1411)
!1428 = !MDLocation(line: 19, column: 2, scope: !1411)
!1429 = !MDLocation(line: 21, column: 1, scope: !1395)
!1430 = !MDLocation(line: 16, column: 6, scope: !1395)
!1431 = !MDLocation(line: 16, column: 6, scope: !1432)
!1432 = !MDLexicalBlockFile(scope: !1395, file: !1, discriminator: 6)
!1433 = !MDLocation(line: 16, column: 6, scope: !1434)
!1434 = !MDLexicalBlockFile(scope: !1395, file: !1, discriminator: 8)
!1435 = !MDLocation(line: 21, column: 1, scope: !1411)
!1436 = !MDLocation(line: 17, column: 3, scope: !1437)
!1437 = !MDLexicalBlockFile(scope: !1411, file: !1, discriminator: 4)
!1438 = !MDLocation(line: 17, column: 3, scope: !1439)
!1439 = !MDLexicalBlockFile(scope: !1411, file: !1, discriminator: 5)
!1440 = !MDLocation(line: 20, column: 7, scope: !867)
!1441 = !MDLocation(line: 20, column: 30, scope: !867)
!1442 = !MDLocation(line: 20, column: 23, scope: !867)
!1443 = !MDLocation(line: 20, column: 17, scope: !1444)
!1444 = !MDLexicalBlockFile(scope: !867, file: !1, discriminator: 1)
!1445 = !MDLocation(line: 20, column: 17, scope: !1446)
!1446 = !MDLexicalBlockFile(scope: !867, file: !1, discriminator: 2)
!1447 = !MDLocation(line: 20, column: 14, scope: !867)
!1448 = !MDLocation(line: 20, column: 2, scope: !1449)
!1449 = !MDLexicalBlockFile(scope: !867, file: !1, discriminator: 3)
!1450 = !MDLocation(line: 20, column: 2, scope: !1451)
!1451 = !MDLexicalBlockFile(scope: !867, file: !1, discriminator: 4)
!1452 = !MDLocation(line: 21, column: 1, scope: !867)
!1453 = !MDLocation(line: 20, column: 2, scope: !867)
!1454 = !MDLocation(line: 20, column: 2, scope: !1455)
!1455 = !MDLexicalBlockFile(scope: !867, file: !1, discriminator: 5)
!1456 = !MDLocation(line: 20, column: 2, scope: !1457)
!1457 = !MDLexicalBlockFile(scope: !867, file: !1, discriminator: 6)
!1458 = !MDLocation(line: 16, column: 6, scope: !1459)
!1459 = !MDLexicalBlockFile(scope: !1395, file: !1, discriminator: 9)
!1460 = !MDLocation(line: 16, column: 6, scope: !1461)
!1461 = !MDLexicalBlockFile(scope: !1395, file: !1, discriminator: 7)
!1462 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !921, type: !1368, flags: DIFlagArtificial | DIFlagObjectPointer)
!1463 = !MDLocation(line: 0, scope: !921)
!1464 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__x", arg: 2, scope: !921, file: !53, line: 845, type: !122)
!1465 = !MDLocation(line: 845, column: 28, scope: !921)
!1466 = !MDLocation(line: 846, column: 16, scope: !921)
!1467 = !MDLocation(line: 846, column: 26, scope: !921)
!1468 = !MDLocation(line: 846, column: 9, scope: !921)
!1469 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !947, type: !1470, flags: DIFlagArtificial | DIFlagObjectPointer)
!1470 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !738, size: 64, align: 64)
!1471 = !MDLocation(line: 0, scope: !947)
!1472 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__x", arg: 2, scope: !947, file: !4, line: 233, type: !756)
!1473 = !MDLocation(line: 233, column: 31, scope: !947)
!1474 = !MDLocation(line: 234, column: 16, scope: !947)
!1475 = !MDLocation(line: 234, column: 27, scope: !947)
!1476 = !MDLocation(line: 234, column: 31, scope: !947)
!1477 = !MDLocation(line: 234, column: 24, scope: !947)
!1478 = !MDLocation(line: 234, column: 9, scope: !947)
!1479 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !946, type: !1368, flags: DIFlagArtificial | DIFlagObjectPointer)
!1480 = !MDLocation(line: 0, scope: !946)
!1481 = !MDLocation(line: 357, column: 16, scope: !946)
!1482 = !MDLocation(line: 357, column: 9, scope: !946)
!1483 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !948, type: !1368, flags: DIFlagArtificial | DIFlagObjectPointer)
!1484 = !MDLocation(line: 0, scope: !948)
!1485 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__k", arg: 2, scope: !948, file: !53, line: 474, type: !122)
!1486 = !MDLocation(line: 474, column: 34, scope: !948)
!1487 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "__i", scope: !948, file: !53, line: 479, type: !85)
!1488 = !MDLocation(line: 479, column: 11, scope: !948)
!1489 = !MDLocation(line: 479, column: 29, scope: !948)
!1490 = !MDLocation(line: 479, column: 17, scope: !948)
!1491 = !MDLocation(line: 481, column: 13, scope: !1492)
!1492 = distinct !MDLexicalBlock(scope: !948, file: !53, line: 481, column: 6)
!1493 = !MDLocation(line: 481, column: 10, scope: !1492)
!1494 = !MDLocation(line: 481, column: 19, scope: !1492)
!1495 = !MDLocation(line: 481, column: 22, scope: !1496)
!1496 = !MDLexicalBlockFile(scope: !1492, file: !53, discriminator: 1)
!1497 = !MDLocation(line: 481, column: 33, scope: !1492)
!1498 = !MDLocation(line: 481, column: 39, scope: !1492)
!1499 = !MDLocation(line: 481, column: 45, scope: !1492)
!1500 = !MDLocation(line: 481, column: 22, scope: !1492)
!1501 = !MDLocation(line: 481, column: 6, scope: !948)
!1502 = !MDLocation(line: 487, column: 24, scope: !1492)
!1503 = !MDLocation(line: 487, column: 40, scope: !1492)
!1504 = !MDLocation(line: 487, column: 45, scope: !1492)
!1505 = !MDLocation(line: 487, column: 29, scope: !1492)
!1506 = !MDLocation(line: 487, column: 17, scope: !1492)
!1507 = !MDLocation(line: 487, column: 17, scope: !1496)
!1508 = !MDLocation(line: 487, column: 15, scope: !1492)
!1509 = !MDLocation(line: 487, column: 11, scope: !1492)
!1510 = !MDLocation(line: 490, column: 7, scope: !1492)
!1511 = !MDLocation(line: 487, column: 11, scope: !1512)
!1512 = !MDLexicalBlockFile(scope: !1492, file: !53, discriminator: 2)
!1513 = !MDLocation(line: 489, column: 10, scope: !948)
!1514 = !MDLocation(line: 489, column: 16, scope: !948)
!1515 = !MDLocation(line: 489, column: 2, scope: !948)
!1516 = !MDLocation(line: 487, column: 11, scope: !1517)
!1517 = !MDLexicalBlockFile(scope: !1492, file: !53, discriminator: 4)
!1518 = !MDLocation(line: 487, column: 11, scope: !1519)
!1519 = !MDLexicalBlockFile(scope: !1492, file: !53, discriminator: 3)
!1520 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "filename", arg: 1, scope: !871, file: !1, line: 23, type: !870)
!1521 = !MDLocation(line: 23, column: 25, scope: !871)
!1522 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "line", arg: 2, scope: !871, file: !1, line: 23, type: !15)
!1523 = !MDLocation(line: 23, column: 39, scope: !871)
!1524 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "key", scope: !871, file: !1, line: 24, type: !1385)
!1525 = !MDLocation(line: 24, column: 7, scope: !871)
!1526 = !MDLocation(line: 25, column: 10, scope: !871)
!1527 = !MDLocation(line: 25, column: 24, scope: !871)
!1528 = !MDLocation(line: 25, column: 34, scope: !871)
!1529 = !MDLocation(line: 25, column: 2, scope: !871)
!1530 = !MDLocation(line: 26, column: 24, scope: !1531)
!1531 = distinct !MDLexicalBlock(scope: !871, file: !1, line: 26, column: 6)
!1532 = !MDLocation(line: 26, column: 17, scope: !1531)
!1533 = !MDLocation(line: 26, column: 6, scope: !1534)
!1534 = !MDLexicalBlockFile(scope: !1531, file: !1, discriminator: 1)
!1535 = !MDLocation(line: 26, column: 6, scope: !1536)
!1536 = !MDLexicalBlockFile(scope: !1531, file: !1, discriminator: 2)
!1537 = !MDLocation(line: 26, column: 33, scope: !1531)
!1538 = !MDLocation(line: 26, column: 33, scope: !1539)
!1539 = !MDLexicalBlockFile(scope: !1531, file: !1, discriminator: 3)
!1540 = !MDLocation(line: 26, column: 30, scope: !1531)
!1541 = !MDLocation(line: 26, column: 6, scope: !1542)
!1542 = !MDLexicalBlockFile(scope: !1531, file: !1, discriminator: 4)
!1543 = !MDLocation(line: 26, column: 6, scope: !1544)
!1544 = !MDLexicalBlockFile(scope: !1531, file: !1, discriminator: 5)
!1545 = !MDLocation(line: 26, column: 6, scope: !871)
!1546 = !MDLocation(line: 27, column: 24, scope: !1547)
!1547 = distinct !MDLexicalBlock(scope: !1531, file: !1, line: 26, column: 46)
!1548 = !MDLocation(line: 27, column: 16, scope: !1547)
!1549 = !MDLocation(line: 27, column: 9, scope: !1547)
!1550 = !MDLocation(line: 27, column: 3, scope: !1551)
!1551 = !MDLexicalBlockFile(scope: !1547, file: !1, discriminator: 1)
!1552 = !MDLocation(line: 27, column: 22, scope: !1553)
!1553 = !MDLexicalBlockFile(scope: !1547, file: !1, discriminator: 2)
!1554 = !MDLocation(line: 27, column: 3, scope: !1547)
!1555 = !MDLocation(line: 27, column: 3, scope: !1556)
!1556 = !MDLexicalBlockFile(scope: !1547, file: !1, discriminator: 3)
!1557 = !MDLocation(line: 28, column: 8, scope: !1547)
!1558 = !MDLocation(line: 28, column: 29, scope: !1547)
!1559 = !MDLocation(line: 28, column: 16, scope: !1547)
!1560 = !MDLocation(line: 28, column: 32, scope: !1547)
!1561 = !MDLocation(line: 28, column: 45, scope: !1547)
!1562 = !MDLocation(line: 28, column: 42, scope: !1547)
!1563 = !MDLocation(line: 28, column: 49, scope: !1547)
!1564 = !MDLocation(line: 29, column: 2, scope: !1547)
!1565 = !MDLocation(line: 31, column: 1, scope: !1531)
!1566 = !MDLocation(line: 26, column: 6, scope: !1531)
!1567 = !MDLocation(line: 26, column: 6, scope: !1568)
!1568 = !MDLexicalBlockFile(scope: !1531, file: !1, discriminator: 6)
!1569 = !MDLocation(line: 26, column: 6, scope: !1570)
!1570 = !MDLexicalBlockFile(scope: !1531, file: !1, discriminator: 8)
!1571 = !MDLocation(line: 31, column: 1, scope: !1547)
!1572 = !MDLocation(line: 27, column: 3, scope: !1573)
!1573 = !MDLexicalBlockFile(scope: !1547, file: !1, discriminator: 4)
!1574 = !MDLocation(line: 27, column: 3, scope: !1575)
!1575 = !MDLexicalBlockFile(scope: !1547, file: !1, discriminator: 5)
!1576 = !MDLocation(line: 30, column: 7, scope: !871)
!1577 = !MDLocation(line: 30, column: 30, scope: !871)
!1578 = !MDLocation(line: 30, column: 23, scope: !871)
!1579 = !MDLocation(line: 30, column: 17, scope: !1580)
!1580 = !MDLexicalBlockFile(scope: !871, file: !1, discriminator: 1)
!1581 = !MDLocation(line: 30, column: 17, scope: !1582)
!1582 = !MDLexicalBlockFile(scope: !871, file: !1, discriminator: 2)
!1583 = !MDLocation(line: 30, column: 14, scope: !871)
!1584 = !MDLocation(line: 30, column: 2, scope: !1585)
!1585 = !MDLexicalBlockFile(scope: !871, file: !1, discriminator: 3)
!1586 = !MDLocation(line: 30, column: 2, scope: !1587)
!1587 = !MDLexicalBlockFile(scope: !871, file: !1, discriminator: 4)
!1588 = !MDLocation(line: 31, column: 1, scope: !871)
!1589 = !MDLocation(line: 30, column: 2, scope: !871)
!1590 = !MDLocation(line: 30, column: 2, scope: !1591)
!1591 = !MDLexicalBlockFile(scope: !871, file: !1, discriminator: 5)
!1592 = !MDLocation(line: 30, column: 2, scope: !1593)
!1593 = !MDLexicalBlockFile(scope: !871, file: !1, discriminator: 6)
!1594 = !MDLocation(line: 26, column: 6, scope: !1595)
!1595 = !MDLexicalBlockFile(scope: !1531, file: !1, discriminator: 9)
!1596 = !MDLocation(line: 26, column: 6, scope: !1597)
!1597 = !MDLexicalBlockFile(scope: !1531, file: !1, discriminator: 7)
!1598 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "node", arg: 1, scope: !874, file: !1, line: 33, type: !15)
!1599 = !MDLocation(line: 33, column: 21, scope: !874)
!1600 = !MDLocation(line: 34, column: 7, scope: !874)
!1601 = !MDLocation(line: 34, column: 17, scope: !874)
!1602 = !MDLocation(line: 34, column: 14, scope: !874)
!1603 = !MDLocation(line: 35, column: 1, scope: !874)
!1604 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ln", arg: 1, scope: !877, file: !1, line: 38, type: !15)
!1605 = !MDLocation(line: 38, column: 23, scope: !877)
!1606 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "filename", arg: 2, scope: !877, file: !1, line: 38, type: !870)
!1607 = !MDLocation(line: 38, column: 33, scope: !877)
!1608 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "i", scope: !1609, file: !1, line: 39, type: !15)
!1609 = distinct !MDLexicalBlock(scope: !877, file: !1, line: 39, column: 2)
!1610 = !MDLocation(line: 39, column: 11, scope: !1609)
!1611 = !MDLocation(line: 39, column: 7, scope: !1609)
!1612 = !MDLocation(line: 39, column: 18, scope: !1613)
!1613 = !MDLexicalBlockFile(scope: !1614, file: !1, discriminator: 2)
!1614 = !MDLexicalBlockFile(scope: !1615, file: !1, discriminator: 1)
!1615 = distinct !MDLexicalBlock(scope: !1609, file: !1, line: 39, column: 2)
!1616 = !MDLocation(line: 39, column: 20, scope: !1615)
!1617 = !MDLocation(line: 39, column: 19, scope: !1615)
!1618 = !MDLocation(line: 39, column: 2, scope: !1609)
!1619 = !MDLocation(line: 40, column: 8, scope: !1615)
!1620 = !MDLocation(line: 40, column: 3, scope: !1615)
!1621 = !MDLocation(line: 39, column: 28, scope: !1615)
!1622 = !MDLocation(line: 39, column: 2, scope: !1615)
!1623 = !MDLocation(line: 41, column: 7, scope: !877)
!1624 = !MDLocation(line: 41, column: 49, scope: !877)
!1625 = !MDLocation(line: 41, column: 41, scope: !877)
!1626 = !MDLocation(line: 41, column: 38, scope: !1627)
!1627 = !MDLexicalBlockFile(scope: !877, file: !1, discriminator: 1)
!1628 = !MDLocation(line: 41, column: 58, scope: !1629)
!1629 = !MDLexicalBlockFile(scope: !877, file: !1, discriminator: 2)
!1630 = !MDLocation(line: 41, column: 78, scope: !1631)
!1631 = !MDLexicalBlockFile(scope: !877, file: !1, discriminator: 3)
!1632 = !MDLocation(line: 41, column: 75, scope: !877)
!1633 = !MDLocation(line: 41, column: 81, scope: !1634)
!1634 = !MDLexicalBlockFile(scope: !877, file: !1, discriminator: 4)
!1635 = !MDLocation(line: 41, column: 2, scope: !1636)
!1636 = !MDLexicalBlockFile(scope: !877, file: !1, discriminator: 5)
!1637 = !MDLocation(line: 41, column: 2, scope: !1638)
!1638 = !MDLexicalBlockFile(scope: !877, file: !1, discriminator: 6)
!1639 = !MDLocation(line: 42, column: 7, scope: !877)
!1640 = !MDLocation(line: 43, column: 1, scope: !877)
!1641 = !MDLocation(line: 41, column: 2, scope: !877)
!1642 = !MDLocation(line: 41, column: 2, scope: !1643)
!1643 = !MDLexicalBlockFile(scope: !877, file: !1, discriminator: 7)
!1644 = !MDLocation(line: 41, column: 2, scope: !1645)
!1645 = !MDLexicalBlockFile(scope: !877, file: !1, discriminator: 9)
!1646 = !MDLocation(line: 41, column: 2, scope: !1647)
!1647 = !MDLexicalBlockFile(scope: !877, file: !1, discriminator: 10)
!1648 = !MDLocation(line: 41, column: 2, scope: !1649)
!1649 = !MDLexicalBlockFile(scope: !877, file: !1, discriminator: 8)
!1650 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ln", arg: 1, scope: !880, file: !1, line: 45, type: !15)
!1651 = !MDLocation(line: 45, column: 22, scope: !880)
!1652 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "filename", arg: 2, scope: !880, file: !1, line: 45, type: !870)
!1653 = !MDLocation(line: 45, column: 32, scope: !880)
!1654 = !MDLocation(line: 46, column: 7, scope: !880)
!1655 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "i", scope: !1656, file: !1, line: 47, type: !15)
!1656 = distinct !MDLexicalBlock(scope: !880, file: !1, line: 47, column: 2)
!1657 = !MDLocation(line: 47, column: 11, scope: !1656)
!1658 = !MDLocation(line: 47, column: 7, scope: !1656)
!1659 = !MDLocation(line: 47, column: 18, scope: !1660)
!1660 = !MDLexicalBlockFile(scope: !1661, file: !1, discriminator: 2)
!1661 = !MDLexicalBlockFile(scope: !1662, file: !1, discriminator: 1)
!1662 = distinct !MDLexicalBlock(scope: !1656, file: !1, line: 47, column: 2)
!1663 = !MDLocation(line: 47, column: 20, scope: !1662)
!1664 = !MDLocation(line: 47, column: 19, scope: !1662)
!1665 = !MDLocation(line: 47, column: 2, scope: !1656)
!1666 = !MDLocation(line: 48, column: 8, scope: !1662)
!1667 = !MDLocation(line: 48, column: 3, scope: !1662)
!1668 = !MDLocation(line: 47, column: 28, scope: !1662)
!1669 = !MDLocation(line: 47, column: 2, scope: !1662)
!1670 = !MDLocation(line: 49, column: 7, scope: !880)
!1671 = !MDLocation(line: 49, column: 28, scope: !880)
!1672 = !MDLocation(line: 51, column: 1, scope: !880)
!1673 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !883, type: !1674, flags: DIFlagArtificial | DIFlagObjectPointer)
!1674 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE", size: 64, align: 64)
!1675 = !MDLocation(line: 0, scope: !883)
!1676 = !MDLocation(line: 858, column: 18, scope: !1677)
!1677 = distinct !MDLexicalBlock(scope: !883, file: !4, line: 858, column: 7)
!1678 = !MDLocation(line: 858, column: 9, scope: !1679)
!1679 = !MDLexicalBlockFile(scope: !1677, file: !4, discriminator: 1)
!1680 = !MDLocation(line: 858, column: 31, scope: !1681)
!1681 = !MDLexicalBlockFile(scope: !1677, file: !4, discriminator: 3)
!1682 = !MDLocation(line: 858, column: 31, scope: !883)
!1683 = !MDLocation(line: 858, column: 31, scope: !1684)
!1684 = !MDLexicalBlockFile(scope: !1685, file: !4, discriminator: 4)
!1685 = !MDLexicalBlockFile(scope: !1677, file: !4, discriminator: 2)
!1686 = !MDLocation(line: 858, column: 31, scope: !1687)
!1687 = !MDLexicalBlockFile(scope: !1677, file: !4, discriminator: 5)
!1688 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !884, type: !1674, flags: DIFlagArtificial | DIFlagObjectPointer)
!1689 = !MDLocation(line: 0, scope: !884)
!1690 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__x", arg: 2, scope: !884, file: !4, line: 787, type: !312)
!1691 = !MDLocation(line: 787, column: 27, scope: !884)
!1692 = !MDLocation(line: 1610, column: 7, scope: !884)
!1693 = !MDLocation(line: 1610, column: 14, scope: !1694)
!1694 = !MDLexicalBlockFile(scope: !1695, file: !4, discriminator: 2)
!1695 = !MDLexicalBlockFile(scope: !884, file: !4, discriminator: 1)
!1696 = !MDLocation(line: 1610, column: 18, scope: !884)
!1697 = !MDLocation(line: 1612, column: 22, scope: !1698)
!1698 = distinct !MDLexicalBlock(scope: !884, file: !4, line: 1611, column: 2)
!1699 = !MDLocation(line: 1612, column: 13, scope: !1698)
!1700 = !MDLocation(line: 1612, column: 4, scope: !1698)
!1701 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "__y", scope: !1698, file: !4, line: 1613, type: !312)
!1702 = !MDLocation(line: 1613, column: 15, scope: !1698)
!1703 = !MDLocation(line: 1613, column: 29, scope: !1698)
!1704 = !MDLocation(line: 1613, column: 21, scope: !1698)
!1705 = !MDLocation(line: 1614, column: 17, scope: !1698)
!1706 = !MDLocation(line: 1614, column: 4, scope: !1698)
!1707 = !MDLocation(line: 1615, column: 10, scope: !1698)
!1708 = !MDLocation(line: 1615, column: 8, scope: !1698)
!1709 = !MDLocation(line: 1617, column: 5, scope: !884)
!1710 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !910, type: !1674, flags: DIFlagArtificial | DIFlagObjectPointer)
!1711 = !MDLocation(line: 0, scope: !910)
!1712 = !MDLocation(line: 652, column: 46, scope: !910)
!1713 = !MDLocation(line: 652, column: 54, scope: !910)
!1714 = !MDLocation(line: 652, column: 64, scope: !910)
!1715 = !MDLocation(line: 652, column: 16, scope: !910)
!1716 = !MDLocation(line: 652, column: 9, scope: !910)
!1717 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !911, type: !1718, flags: DIFlagArtificial | DIFlagObjectPointer)
!1718 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE13_Rb_tree_implISC_Lb0EEE", size: 64, align: 64)
!1719 = !MDLocation(line: 0, scope: !911)
!1720 = !MDLocation(line: 580, column: 16, scope: !1721)
!1721 = distinct !MDLexicalBlock(scope: !911, file: !4, line: 580, column: 16)
!1722 = !MDLocation(line: 580, column: 16, scope: !911)
!1723 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__x", arg: 1, scope: !885, file: !4, line: 686, type: !332)
!1724 = !MDLocation(line: 686, column: 26, scope: !885)
!1725 = !MDLocation(line: 687, column: 40, scope: !885)
!1726 = !MDLocation(line: 687, column: 45, scope: !885)
!1727 = !MDLocation(line: 687, column: 16, scope: !885)
!1728 = !MDLocation(line: 687, column: 9, scope: !885)
!1729 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__x", arg: 1, scope: !886, file: !4, line: 678, type: !332)
!1730 = !MDLocation(line: 678, column: 25, scope: !886)
!1731 = !MDLocation(line: 679, column: 40, scope: !886)
!1732 = !MDLocation(line: 679, column: 45, scope: !886)
!1733 = !MDLocation(line: 679, column: 16, scope: !886)
!1734 = !MDLocation(line: 679, column: 9, scope: !886)
!1735 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !887, type: !1674, flags: DIFlagArtificial | DIFlagObjectPointer)
!1736 = !MDLocation(line: 0, scope: !887)
!1737 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__p", arg: 2, scope: !887, file: !4, line: 559, type: !312)
!1738 = !MDLocation(line: 559, column: 31, scope: !887)
!1739 = !MDLocation(line: 561, column: 18, scope: !887)
!1740 = !MDLocation(line: 561, column: 2, scope: !887)
!1741 = !MDLocation(line: 562, column: 14, scope: !887)
!1742 = !MDLocation(line: 562, column: 2, scope: !887)
!1743 = !MDLocation(line: 563, column: 7, scope: !887)
!1744 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !888, type: !1674, flags: DIFlagArtificial | DIFlagObjectPointer)
!1745 = !MDLocation(line: 0, scope: !888)
!1746 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__p", arg: 2, scope: !888, file: !4, line: 519, type: !312)
!1747 = !MDLocation(line: 519, column: 34, scope: !888)
!1748 = !MDLocation(line: 520, column: 9, scope: !888)
!1749 = !MDLocation(line: 520, column: 33, scope: !888)
!1750 = !MDLocation(line: 520, column: 9, scope: !1751)
!1751 = !MDLexicalBlockFile(scope: !888, file: !4, discriminator: 1)
!1752 = !MDLocation(line: 520, column: 9, scope: !1753)
!1753 = !MDLexicalBlockFile(scope: !888, file: !4, discriminator: 3)
!1754 = !MDLocation(line: 520, column: 52, scope: !888)
!1755 = !MDLocation(line: 520, column: 52, scope: !1756)
!1756 = !MDLexicalBlockFile(scope: !1757, file: !4, discriminator: 4)
!1757 = !MDLexicalBlockFile(scope: !888, file: !4, discriminator: 2)
!1758 = !MDLocation(line: 520, column: 9, scope: !1759)
!1759 = !MDLexicalBlockFile(scope: !888, file: !4, discriminator: 5)
!1760 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !906, type: !1674, flags: DIFlagArtificial | DIFlagObjectPointer)
!1761 = !MDLocation(line: 0, scope: !906)
!1762 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__p", arg: 2, scope: !906, file: !4, line: 494, type: !312)
!1763 = !MDLocation(line: 494, column: 30, scope: !906)
!1764 = !MDLocation(line: 495, column: 35, scope: !906)
!1765 = !MDLocation(line: 495, column: 60, scope: !906)
!1766 = !MDLocation(line: 495, column: 9, scope: !906)
!1767 = !MDLocation(line: 495, column: 69, scope: !906)
!1768 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !889, type: !1769, flags: DIFlagArtificial | DIFlagObjectPointer)
!1769 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !304, size: 64, align: 64)
!1770 = !MDLocation(line: 0, scope: !889)
!1771 = !MDLocation(line: 486, column: 31, scope: !889)
!1772 = !MDLocation(line: 486, column: 16, scope: !889)
!1773 = !MDLocation(line: 486, column: 9, scope: !889)
!1774 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !896, type: !1775, flags: DIFlagArtificial | DIFlagObjectPointer)
!1775 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSN9__gnu_cxx13new_allocatorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", size: 64, align: 64)
!1776 = !MDLocation(line: 0, scope: !896)
!1777 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__p", arg: 2, scope: !896, file: !239, line: 133, type: !255)
!1778 = !MDLocation(line: 133, column: 23, scope: !896)
!1779 = !MDLocation(line: 133, column: 30, scope: !896)
!1780 = !MDLocation(line: 133, column: 43, scope: !896)
!1781 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !899, type: !313, flags: DIFlagArtificial | DIFlagObjectPointer)
!1782 = !MDLocation(line: 0, scope: !899)
!1783 = !MDLocation(line: 143, column: 33, scope: !899)
!1784 = !MDLocation(line: 143, column: 16, scope: !899)
!1785 = !MDLocation(line: 143, column: 9, scope: !899)
!1786 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !904, type: !1787, flags: DIFlagArtificial | DIFlagObjectPointer)
!1787 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSSaISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", size: 64, align: 64)
!1788 = !MDLocation(line: 0, scope: !904)
!1789 = !MDLocation(line: 121, column: 30, scope: !1790)
!1790 = distinct !MDLexicalBlock(scope: !904, file: !206, line: 121, column: 28)
!1791 = !MDLocation(line: 121, column: 30, scope: !904)
!1792 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !890, type: !1769, flags: DIFlagArtificial | DIFlagObjectPointer)
!1793 = !MDLocation(line: 0, scope: !890)
!1794 = !MDLocation(line: 482, column: 60, scope: !890)
!1795 = !MDLocation(line: 482, column: 53, scope: !890)
!1796 = !MDLocation(line: 482, column: 9, scope: !890)
!1797 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !891, type: !1787, flags: DIFlagArtificial | DIFlagObjectPointer)
!1798 = !MDLocation(line: 0, scope: !891)
!1799 = !MDLocalVariable(tag: DW_TAG_arg_variable, arg: 2, scope: !891, file: !206, line: 119, type: !601)
!1800 = !MDLocation(line: 119, column: 41, scope: !891)
!1801 = !MDLocation(line: 119, column: 51, scope: !891)
!1802 = !MDLocation(line: 119, column: 9, scope: !891)
!1803 = !MDLocation(line: 119, column: 53, scope: !891)
!1804 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !895, type: !1775, flags: DIFlagArtificial | DIFlagObjectPointer)
!1805 = !MDLocation(line: 0, scope: !895)
!1806 = !MDLocation(line: 79, column: 47, scope: !895)
!1807 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !897, type: !256, flags: DIFlagArtificial | DIFlagObjectPointer)
!1808 = !MDLocation(line: 0, scope: !897)
!1809 = !MDLocation(line: 96, column: 12, scope: !1810)
!1810 = distinct !MDLexicalBlock(scope: !897, file: !222, line: 96, column: 12)
!1811 = !MDLocation(line: 96, column: 12, scope: !897)
!1812 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__r", arg: 1, scope: !900, file: !901, line: 47, type: !259)
!1813 = !MDLocation(line: 47, column: 22, scope: !900)
!1814 = !MDLocation(line: 50, column: 61, scope: !900)
!1815 = !MDLocation(line: 50, column: 22, scope: !900)
!1816 = !MDLocation(line: 49, column: 14, scope: !900)
!1817 = !MDLocation(line: 49, column: 7, scope: !900)
!1818 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !905, type: !1775, flags: DIFlagArtificial | DIFlagObjectPointer)
!1819 = !MDLocation(line: 0, scope: !905)
!1820 = !MDLocation(line: 86, column: 48, scope: !905)
!1821 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__a", arg: 1, scope: !907, file: !295, line: 184, type: !778)
!1822 = !MDLocation(line: 184, column: 36, scope: !907)
!1823 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__p", arg: 2, scope: !907, file: !295, line: 184, type: !776)
!1824 = !MDLocation(line: 184, column: 49, scope: !907)
!1825 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__n", arg: 3, scope: !907, file: !295, line: 184, type: !779)
!1826 = !MDLocation(line: 184, column: 64, scope: !907)
!1827 = !MDLocation(line: 185, column: 7, scope: !907)
!1828 = !MDLocation(line: 185, column: 22, scope: !907)
!1829 = !MDLocation(line: 185, column: 27, scope: !907)
!1830 = !MDLocation(line: 185, column: 33, scope: !907)
!1831 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !909, type: !1674, flags: DIFlagArtificial | DIFlagObjectPointer)
!1832 = !MDLocation(line: 0, scope: !909)
!1833 = !MDLocation(line: 478, column: 54, scope: !909)
!1834 = !MDLocation(line: 478, column: 47, scope: !909)
!1835 = !MDLocation(line: 478, column: 9, scope: !909)
!1836 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !908, type: !1837, flags: DIFlagArtificial | DIFlagObjectPointer)
!1837 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSN9__gnu_cxx13new_allocatorISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEEE", size: 64, align: 64)
!1838 = !MDLocation(line: 0, scope: !908)
!1839 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__p", arg: 2, scope: !908, file: !239, line: 109, type: !619)
!1840 = !MDLocation(line: 109, column: 26, scope: !908)
!1841 = !MDLocalVariable(tag: DW_TAG_arg_variable, arg: 3, scope: !908, file: !239, line: 109, type: !271)
!1842 = !MDLocation(line: 109, column: 40, scope: !908)
!1843 = !MDLocation(line: 110, column: 27, scope: !908)
!1844 = !MDLocation(line: 110, column: 9, scope: !908)
!1845 = !MDLocation(line: 110, column: 33, scope: !908)
!1846 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !913, type: !1847, flags: DIFlagArtificial | DIFlagObjectPointer)
!1847 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSSaISt13_Rb_tree_nodeISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEEE", size: 64, align: 64)
!1848 = !MDLocation(line: 0, scope: !913)
!1849 = !MDLocation(line: 121, column: 30, scope: !1850)
!1850 = distinct !MDLexicalBlock(scope: !913, file: !206, line: 121, column: 28)
!1851 = !MDLocation(line: 121, column: 30, scope: !913)
!1852 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !914, type: !1837, flags: DIFlagArtificial | DIFlagObjectPointer)
!1853 = !MDLocation(line: 0, scope: !914)
!1854 = !MDLocation(line: 86, column: 48, scope: !914)
!1855 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !916, type: !1674, flags: DIFlagArtificial | DIFlagObjectPointer)
!1856 = !MDLocation(line: 0, scope: !916)
!1857 = !MDLocation(line: 807, column: 7, scope: !916)
!1858 = !MDLocation(line: 807, column: 20, scope: !916)
!1859 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !917, type: !1718, flags: DIFlagArtificial | DIFlagObjectPointer)
!1860 = !MDLocation(line: 0, scope: !917)
!1861 = !MDLocation(line: 589, column: 4, scope: !917)
!1862 = !MDLocation(line: 587, column: 6, scope: !917)
!1863 = !MDLocation(line: 587, column: 25, scope: !917)
!1864 = !MDLocation(line: 587, column: 43, scope: !917)
!1865 = !MDLocation(line: 588, column: 6, scope: !917)
!1866 = !MDLocation(line: 589, column: 6, scope: !1867)
!1867 = distinct !MDLexicalBlock(scope: !917, file: !4, line: 589, column: 4)
!1868 = !MDLocation(line: 589, column: 23, scope: !1869)
!1869 = !MDLexicalBlockFile(scope: !917, file: !4, discriminator: 1)
!1870 = !MDLocation(line: 589, column: 23, scope: !1871)
!1871 = !MDLexicalBlockFile(scope: !1867, file: !4, discriminator: 2)
!1872 = !MDLocation(line: 589, column: 23, scope: !1873)
!1873 = !MDLexicalBlockFile(scope: !1867, file: !4, discriminator: 3)
!1874 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !918, type: !1847, flags: DIFlagArtificial | DIFlagObjectPointer)
!1875 = !MDLocation(line: 0, scope: !918)
!1876 = !MDLocation(line: 113, column: 27, scope: !918)
!1877 = !MDLocation(line: 113, column: 7, scope: !918)
!1878 = !MDLocation(line: 113, column: 29, scope: !918)
!1879 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !920, type: !1718, flags: DIFlagArtificial | DIFlagObjectPointer)
!1880 = !MDLocation(line: 0, scope: !920)
!1881 = !MDLocation(line: 616, column: 12, scope: !920)
!1882 = !MDLocation(line: 616, column: 22, scope: !920)
!1883 = !MDLocation(line: 616, column: 31, scope: !920)
!1884 = !MDLocation(line: 617, column: 12, scope: !920)
!1885 = !MDLocation(line: 617, column: 22, scope: !920)
!1886 = !MDLocation(line: 617, column: 32, scope: !920)
!1887 = !MDLocation(line: 618, column: 39, scope: !920)
!1888 = !MDLocation(line: 618, column: 12, scope: !920)
!1889 = !MDLocation(line: 618, column: 22, scope: !920)
!1890 = !MDLocation(line: 618, column: 30, scope: !920)
!1891 = !MDLocation(line: 619, column: 40, scope: !920)
!1892 = !MDLocation(line: 619, column: 12, scope: !920)
!1893 = !MDLocation(line: 619, column: 22, scope: !920)
!1894 = !MDLocation(line: 619, column: 31, scope: !920)
!1895 = !MDLocation(line: 620, column: 4, scope: !920)
!1896 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !919, type: !1837, flags: DIFlagArtificial | DIFlagObjectPointer)
!1897 = !MDLocation(line: 0, scope: !919)
!1898 = !MDLocation(line: 79, column: 47, scope: !919)
!1899 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !922, type: !1674, flags: DIFlagArtificial | DIFlagObjectPointer)
!1900 = !MDLocation(line: 0, scope: !922)
!1901 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__k", arg: 2, scope: !922, file: !4, line: 1081, type: !385)
!1902 = !MDLocation(line: 1081, column: 28, scope: !922)
!1903 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "__j", scope: !922, file: !4, line: 2295, type: !86)
!1904 = !MDLocation(line: 2295, column: 16, scope: !922)
!1905 = !MDLocation(line: 2295, column: 37, scope: !922)
!1906 = !MDLocation(line: 2295, column: 49, scope: !922)
!1907 = !MDLocation(line: 2295, column: 59, scope: !922)
!1908 = !MDLocation(line: 2295, column: 22, scope: !922)
!1909 = !MDLocation(line: 2296, column: 22, scope: !922)
!1910 = !MDLocation(line: 2296, column: 19, scope: !922)
!1911 = !MDLocation(line: 2297, column: 8, scope: !922)
!1912 = !MDLocation(line: 2297, column: 11, scope: !1913)
!1913 = !MDLexicalBlockFile(scope: !922, file: !4, discriminator: 1)
!1914 = !MDLocation(line: 2297, column: 19, scope: !922)
!1915 = !MDLocation(line: 2297, column: 34, scope: !922)
!1916 = !MDLocation(line: 2298, column: 17, scope: !922)
!1917 = !MDLocation(line: 2298, column: 6, scope: !922)
!1918 = !MDLocation(line: 2297, column: 11, scope: !922)
!1919 = !MDLocation(line: 2296, column: 14, scope: !922)
!1920 = !MDLocation(line: 2298, column: 30, scope: !922)
!1921 = !MDLocation(line: 2298, column: 38, scope: !922)
!1922 = !MDLocation(line: 2296, column: 7, scope: !1923)
!1923 = !MDLexicalBlockFile(scope: !1913, file: !4, discriminator: 2)
!1924 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !923, type: !1674, flags: DIFlagArtificial | DIFlagObjectPointer)
!1925 = !MDLocation(line: 0, scope: !923)
!1926 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__x", arg: 2, scope: !923, file: !4, line: 790, type: !312)
!1927 = !MDLocation(line: 790, column: 33, scope: !923)
!1928 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__y", arg: 3, scope: !923, file: !4, line: 790, type: !312)
!1929 = !MDLocation(line: 790, column: 49, scope: !923)
!1930 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__k", arg: 4, scope: !923, file: !4, line: 791, type: !195)
!1931 = !MDLocation(line: 791, column: 20, scope: !923)
!1932 = !MDLocation(line: 1627, column: 7, scope: !923)
!1933 = !MDLocation(line: 1627, column: 14, scope: !1934)
!1934 = !MDLexicalBlockFile(scope: !1935, file: !4, discriminator: 2)
!1935 = !MDLexicalBlockFile(scope: !923, file: !4, discriminator: 1)
!1936 = !MDLocation(line: 1627, column: 18, scope: !923)
!1937 = !MDLocation(line: 1628, column: 7, scope: !1938)
!1938 = distinct !MDLexicalBlock(scope: !923, file: !4, line: 1628, column: 6)
!1939 = !MDLocation(line: 1628, column: 15, scope: !1938)
!1940 = !MDLocation(line: 1628, column: 37, scope: !1938)
!1941 = !MDLocation(line: 1628, column: 30, scope: !1938)
!1942 = !MDLocation(line: 1628, column: 43, scope: !1938)
!1943 = !MDLocation(line: 1628, column: 6, scope: !923)
!1944 = !MDLocation(line: 1629, column: 10, scope: !1938)
!1945 = !MDLocation(line: 1629, column: 8, scope: !1938)
!1946 = !MDLocation(line: 1629, column: 29, scope: !1938)
!1947 = !MDLocation(line: 1629, column: 21, scope: !1938)
!1948 = !MDLocation(line: 1629, column: 19, scope: !1938)
!1949 = !MDLocation(line: 1629, column: 4, scope: !1938)
!1950 = !MDLocation(line: 1631, column: 19, scope: !1938)
!1951 = !MDLocation(line: 1631, column: 10, scope: !1938)
!1952 = !MDLocation(line: 1631, column: 8, scope: !1938)
!1953 = !MDLocation(line: 1632, column: 23, scope: !923)
!1954 = !MDLocation(line: 1632, column: 14, scope: !923)
!1955 = !MDLocation(line: 1632, column: 7, scope: !923)
!1956 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !934, type: !1674, flags: DIFlagArtificial | DIFlagObjectPointer)
!1957 = !MDLocation(line: 0, scope: !934)
!1958 = !MDLocation(line: 663, column: 52, scope: !934)
!1959 = !MDLocation(line: 663, column: 60, scope: !934)
!1960 = !MDLocation(line: 663, column: 16, scope: !934)
!1961 = !MDLocation(line: 663, column: 9, scope: !934)
!1962 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !935, type: !1674, flags: DIFlagArtificial | DIFlagObjectPointer)
!1963 = !MDLocation(line: 0, scope: !935)
!1964 = !MDLocation(line: 878, column: 32, scope: !935)
!1965 = !MDLocation(line: 878, column: 40, scope: !935)
!1966 = !MDLocation(line: 878, column: 16, scope: !935)
!1967 = !MDLocation(line: 878, column: 9, scope: !935)
!1968 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !936, type: !1969, flags: DIFlagArtificial | DIFlagObjectPointer)
!1969 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !65, size: 64, align: 64)
!1970 = !MDLocation(line: 0, scope: !936)
!1971 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__x", arg: 2, scope: !936, file: !188, line: 386, type: !195)
!1972 = !MDLocation(line: 386, column: 29, scope: !936)
!1973 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__y", arg: 3, scope: !936, file: !188, line: 386, type: !195)
!1974 = !MDLocation(line: 386, column: 45, scope: !936)
!1975 = !MDLocation(line: 387, column: 16, scope: !936)
!1976 = !MDLocation(line: 387, column: 22, scope: !936)
!1977 = !MDLocation(line: 387, column: 20, scope: !936)
!1978 = !MDLocation(line: 387, column: 9, scope: !936)
!1979 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__x", arg: 1, scope: !944, file: !4, line: 698, type: !337)
!1980 = !MDLocation(line: 698, column: 30, scope: !944)
!1981 = !MDLocation(line: 699, column: 39, scope: !944)
!1982 = !MDLocation(line: 699, column: 30, scope: !944)
!1983 = !MDLocation(line: 699, column: 16, scope: !944)
!1984 = !MDLocation(line: 699, column: 9, scope: !944)
!1985 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__x", arg: 1, scope: !924, file: !4, line: 674, type: !348)
!1986 = !MDLocation(line: 674, column: 31, scope: !924)
!1987 = !MDLocation(line: 675, column: 39, scope: !924)
!1988 = !MDLocation(line: 675, column: 30, scope: !924)
!1989 = !MDLocation(line: 675, column: 16, scope: !924)
!1990 = !MDLocation(line: 675, column: 9, scope: !924)
!1991 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !933, type: !1992, flags: DIFlagArtificial | DIFlagObjectPointer)
!1992 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSSt17_Rb_tree_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", size: 64, align: 64)
!1993 = !MDLocation(line: 0, scope: !933)
!1994 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__x", arg: 2, scope: !933, file: !4, line: 191, type: !725)
!1995 = !MDLocation(line: 191, column: 35, scope: !933)
!1996 = !MDLocation(line: 192, column: 9, scope: !933)
!1997 = !MDLocation(line: 192, column: 17, scope: !933)
!1998 = !MDLocation(line: 192, column: 24, scope: !933)
!1999 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !925, type: !2000, flags: DIFlagArtificial | DIFlagObjectPointer)
!2000 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !520, size: 64, align: 64)
!2001 = !MDLocation(line: 0, scope: !925)
!2002 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__x", arg: 2, scope: !925, file: !188, line: 891, type: !267)
!2003 = !MDLocation(line: 891, column: 31, scope: !925)
!2004 = !MDLocation(line: 892, column: 16, scope: !925)
!2005 = !MDLocation(line: 892, column: 20, scope: !925)
!2006 = !MDLocation(line: 892, column: 9, scope: !925)
!2007 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__x", arg: 1, scope: !926, file: !4, line: 670, type: !348)
!2008 = !MDLocation(line: 670, column: 33, scope: !926)
!2009 = !MDLocation(line: 671, column: 17, scope: !926)
!2010 = !MDLocation(line: 671, column: 9, scope: !926)
!2011 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !927, type: !349, flags: DIFlagArtificial | DIFlagObjectPointer)
!2012 = !MDLocation(line: 0, scope: !927)
!2013 = !MDLocation(line: 147, column: 33, scope: !927)
!2014 = !MDLocation(line: 147, column: 16, scope: !927)
!2015 = !MDLocation(line: 147, column: 9, scope: !927)
!2016 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__r", arg: 1, scope: !928, file: !901, line: 47, type: !267)
!2017 = !MDLocation(line: 47, column: 22, scope: !928)
!2018 = !MDLocation(line: 50, column: 61, scope: !928)
!2019 = !MDLocation(line: 50, column: 22, scope: !928)
!2020 = !MDLocation(line: 49, column: 14, scope: !928)
!2021 = !MDLocation(line: 49, column: 7, scope: !928)
!2022 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__lhs", arg: 1, scope: !937, file: !938, line: 4987, type: !195)
!2023 = !MDLocation(line: 4987, column: 60, scope: !937)
!2024 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__rhs", arg: 2, scope: !937, file: !938, line: 4988, type: !195)
!2025 = !MDLocation(line: 4988, column: 53, scope: !937)
!2026 = !MDLocation(line: 4989, column: 14, scope: !937)
!2027 = !MDLocation(line: 4989, column: 28, scope: !937)
!2028 = !MDLocation(line: 4989, column: 35, scope: !937)
!2029 = !MDLocation(line: 4989, column: 7, scope: !937)
!2030 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__x", arg: 1, scope: !945, file: !4, line: 694, type: !337)
!2031 = !MDLocation(line: 694, column: 32, scope: !945)
!2032 = !MDLocation(line: 695, column: 47, scope: !945)
!2033 = !MDLocation(line: 695, column: 17, scope: !945)
!2034 = !MDLocation(line: 695, column: 9, scope: !945)
!2035 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !949, type: !1368, flags: DIFlagArtificial | DIFlagObjectPointer)
!2036 = !MDLocation(line: 0, scope: !949)
!2037 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__x", arg: 2, scope: !949, file: !53, line: 915, type: !122)
!2038 = !MDLocation(line: 915, column: 35, scope: !949)
!2039 = !MDLocation(line: 916, column: 16, scope: !949)
!2040 = !MDLocation(line: 916, column: 33, scope: !949)
!2041 = !MDLocation(line: 916, column: 9, scope: !949)
!2042 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !951, type: !2043, flags: DIFlagArtificial | DIFlagObjectPointer)
!2043 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !73, size: 64, align: 64)
!2044 = !MDLocation(line: 0, scope: !951)
!2045 = !MDLocation(line: 819, column: 16, scope: !951)
!2046 = !MDLocation(line: 819, column: 9, scope: !951)
!2047 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !953, type: !1470, flags: DIFlagArtificial | DIFlagObjectPointer)
!2048 = !MDLocation(line: 0, scope: !953)
!2049 = !MDLocation(line: 196, column: 41, scope: !953)
!2050 = !MDLocation(line: 196, column: 17, scope: !953)
!2051 = !MDLocation(line: 196, column: 9, scope: !953)
!2052 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !954, type: !1368, flags: DIFlagArtificial | DIFlagObjectPointer)
!2053 = !MDLocation(line: 0, scope: !954)
!2054 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__position", arg: 2, scope: !954, file: !53, line: 664, type: !85)
!2055 = !MDLocation(line: 664, column: 23, scope: !954)
!2056 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__x", arg: 3, scope: !954, file: !53, line: 664, type: !134)
!2057 = !MDLocation(line: 664, column: 53, scope: !954)
!2058 = !MDLocation(line: 666, column: 16, scope: !954)
!2059 = !MDLocation(line: 666, column: 39, scope: !954)
!2060 = !MDLocation(line: 666, column: 51, scope: !954)
!2061 = !MDLocation(line: 666, column: 9, scope: !954)
!2062 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !997, type: !256, flags: DIFlagArtificial | DIFlagObjectPointer)
!2063 = !MDLocation(line: 0, scope: !997)
!2064 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__a", arg: 2, scope: !997, file: !222, line: 112, type: !195)
!2065 = !MDLocation(line: 112, column: 42, scope: !997)
!2066 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__b", arg: 3, scope: !997, file: !222, line: 112, type: !233)
!2067 = !MDLocation(line: 112, column: 58, scope: !997)
!2068 = !MDLocation(line: 113, column: 9, scope: !997)
!2069 = !MDLocation(line: 113, column: 15, scope: !997)
!2070 = !MDLocation(line: 113, column: 21, scope: !997)
!2071 = !MDLocation(line: 113, column: 28, scope: !997)
!2072 = !MDLocation(line: 113, column: 35, scope: !997)
!2073 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !950, type: !1674, flags: DIFlagArtificial | DIFlagObjectPointer)
!2074 = !MDLocation(line: 0, scope: !950)
!2075 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__k", arg: 2, scope: !950, file: !4, line: 1090, type: !385)
!2076 = !MDLocation(line: 1090, column: 35, scope: !950)
!2077 = !MDLocation(line: 1091, column: 31, scope: !950)
!2078 = !MDLocation(line: 1091, column: 43, scope: !950)
!2079 = !MDLocation(line: 1091, column: 53, scope: !950)
!2080 = !MDLocation(line: 1091, column: 16, scope: !950)
!2081 = !MDLocation(line: 1091, column: 9, scope: !950)
!2082 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !952, type: !1769, flags: DIFlagArtificial | DIFlagObjectPointer)
!2083 = !MDLocation(line: 0, scope: !952)
!2084 = !MDLocation(line: 866, column: 16, scope: !952)
!2085 = !MDLocation(line: 866, column: 24, scope: !952)
!2086 = !MDLocation(line: 866, column: 9, scope: !952)
!2087 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !955, type: !1674, flags: DIFlagArtificial | DIFlagObjectPointer)
!2088 = !MDLocation(line: 0, scope: !955)
!2089 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__pos", arg: 2, scope: !955, file: !4, line: 981, type: !91)
!2090 = !MDLocation(line: 981, column: 40, scope: !955)
!2091 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__x", arg: 3, scope: !955, file: !4, line: 981, type: !320)
!2092 = !MDLocation(line: 981, column: 65, scope: !955)
!2093 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "__an", scope: !955, file: !4, line: 983, type: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_Alloc_nodeE")
!2094 = !MDLocation(line: 983, column: 14, scope: !955)
!2095 = !MDLocation(line: 984, column: 27, scope: !955)
!2096 = !MDLocation(line: 984, column: 34, scope: !955)
!2097 = !MDLocation(line: 984, column: 9, scope: !955)
!2098 = !MDLocation(line: 984, column: 2, scope: !955)
!2099 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !996, type: !2100, flags: DIFlagArtificial | DIFlagObjectPointer)
!2100 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSSt23_Rb_tree_const_iteratorISt4pairIKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiEE", size: 64, align: 64)
!2101 = !MDLocation(line: 0, scope: !996)
!2102 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__it", arg: 2, scope: !996, file: !4, line: 266, type: !690)
!2103 = !MDLocation(line: 266, column: 47, scope: !996)
!2104 = !MDLocation(line: 267, column: 9, scope: !996)
!2105 = !MDLocation(line: 267, column: 17, scope: !996)
!2106 = !MDLocation(line: 267, column: 22, scope: !996)
!2107 = !MDLocation(line: 267, column: 33, scope: !996)
!2108 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !956, type: !2109, flags: DIFlagArtificial | DIFlagObjectPointer)
!2109 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSNSt8_Rb_treeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIKS5_iESt10_Select1stIS8_ESt4lessIS5_ESaIS8_EE11_Alloc_nodeE", size: 64, align: 64)
!2110 = !MDLocation(line: 0, scope: !956)
!2111 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__t", arg: 2, scope: !956, file: !4, line: 449, type: !427)
!2112 = !MDLocation(line: 449, column: 24, scope: !956)
!2113 = !MDLocation(line: 450, column: 6, scope: !956)
!2114 = !MDLocation(line: 450, column: 11, scope: !956)
!2115 = !MDLocation(line: 450, column: 18, scope: !956)
!2116 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !957, type: !1674, flags: DIFlagArtificial | DIFlagObjectPointer)
!2117 = !MDLocation(line: 0, scope: !957)
!2118 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__position", arg: 2, scope: !957, file: !4, line: 977, type: !91)
!2119 = !MDLocation(line: 977, column: 35, scope: !957)
!2120 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__v", arg: 3, scope: !957, file: !4, line: 977, type: !320)
!2121 = !MDLocation(line: 977, column: 60, scope: !957)
!2122 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__node_gen", arg: 4, scope: !957, file: !4, line: 978, type: !960)
!2123 = !MDLocation(line: 978, column: 15, scope: !957)
!2124 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "__res", scope: !957, file: !4, line: 1972, type: !"_ZTSSt4pairIPSt18_Rb_tree_node_baseS1_E")
!2125 = !MDLocation(line: 1972, column: 34, scope: !957)
!2126 = !MDLocation(line: 1973, column: 34, scope: !957)
!2127 = !MDLocation(line: 1973, column: 60, scope: !957)
!2128 = !MDLocation(line: 1973, column: 46, scope: !957)
!2129 = !MDLocation(line: 1973, column: 4, scope: !957)
!2130 = !MDLocation(line: 1975, column: 17, scope: !2131)
!2131 = distinct !MDLexicalBlock(scope: !957, file: !4, line: 1975, column: 11)
!2132 = !MDLocation(line: 1975, column: 11, scope: !2131)
!2133 = !MDLocation(line: 1975, column: 11, scope: !957)
!2134 = !MDLocation(line: 1976, column: 26, scope: !2131)
!2135 = !MDLocation(line: 1976, column: 39, scope: !2131)
!2136 = !MDLocation(line: 1977, column: 6, scope: !2131)
!2137 = !MDLocation(line: 1978, column: 6, scope: !2131)
!2138 = !MDLocation(line: 1976, column: 9, scope: !2131)
!2139 = !MDLocation(line: 1976, column: 2, scope: !2131)
!2140 = !MDLocation(line: 1979, column: 53, scope: !957)
!2141 = !MDLocation(line: 1979, column: 23, scope: !957)
!2142 = !MDLocation(line: 1979, column: 14, scope: !957)
!2143 = !MDLocation(line: 1979, column: 7, scope: !957)
!2144 = !MDLocation(line: 1980, column: 5, scope: !957)
!2145 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !964, type: !1674, flags: DIFlagArtificial | DIFlagObjectPointer)
!2146 = !MDLocation(line: 0, scope: !964)
!2147 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__position", arg: 2, scope: !964, file: !4, line: 732, type: !91)
!2148 = !MDLocation(line: 732, column: 52, scope: !964)
!2149 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__k", arg: 3, scope: !964, file: !4, line: 733, type: !385)
!2150 = !MDLocation(line: 733, column: 25, scope: !964)
!2151 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "__pos", scope: !964, file: !4, line: 1906, type: !86)
!2152 = !MDLocation(line: 1906, column: 16, scope: !964)
!2153 = !MDLocation(line: 1906, column: 24, scope: !964)
!2154 = !MDLocation(line: 1910, column: 17, scope: !2155)
!2155 = distinct !MDLexicalBlock(scope: !964, file: !4, line: 1910, column: 11)
!2156 = !MDLocation(line: 1910, column: 28, scope: !2155)
!2157 = !MDLocation(line: 1910, column: 25, scope: !2155)
!2158 = !MDLocation(line: 1910, column: 11, scope: !964)
!2159 = !MDLocation(line: 1912, column: 8, scope: !2160)
!2160 = distinct !MDLexicalBlock(scope: !2161, file: !4, line: 1912, column: 8)
!2161 = distinct !MDLexicalBlock(scope: !2155, file: !4, line: 1911, column: 2)
!2162 = !MDLocation(line: 1912, column: 15, scope: !2160)
!2163 = !MDLocation(line: 1913, column: 8, scope: !2160)
!2164 = !MDLocation(line: 1913, column: 11, scope: !2165)
!2165 = !MDLexicalBlockFile(scope: !2160, file: !4, discriminator: 1)
!2166 = !MDLocation(line: 1913, column: 19, scope: !2160)
!2167 = !MDLocation(line: 1913, column: 41, scope: !2160)
!2168 = !MDLocation(line: 1913, column: 34, scope: !2160)
!2169 = !MDLocation(line: 1913, column: 58, scope: !2160)
!2170 = !MDLocation(line: 1913, column: 11, scope: !2160)
!2171 = !MDLocation(line: 1912, column: 8, scope: !2161)
!2172 = !MDLocation(line: 1914, column: 18, scope: !2160)
!2173 = !MDLocation(line: 1914, column: 21, scope: !2160)
!2174 = !MDLocation(line: 1914, column: 13, scope: !2160)
!2175 = !MDLocation(line: 1914, column: 6, scope: !2160)
!2176 = !MDLocation(line: 1916, column: 38, scope: !2160)
!2177 = !MDLocation(line: 1916, column: 13, scope: !2160)
!2178 = !MDLocation(line: 1916, column: 6, scope: !2160)
!2179 = !MDLocation(line: 1918, column: 16, scope: !2180)
!2180 = distinct !MDLexicalBlock(scope: !2155, file: !4, line: 1918, column: 16)
!2181 = !MDLocation(line: 1918, column: 24, scope: !2180)
!2182 = !MDLocation(line: 1918, column: 39, scope: !2180)
!2183 = !MDLocation(line: 1918, column: 57, scope: !2180)
!2184 = !MDLocation(line: 1918, column: 44, scope: !2180)
!2185 = !MDLocation(line: 1918, column: 16, scope: !2155)
!2186 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "__before", scope: !2187, file: !4, line: 1921, type: !86)
!2187 = distinct !MDLexicalBlock(scope: !2180, file: !4, line: 1919, column: 2)
!2188 = !MDLocation(line: 1921, column: 13, scope: !2187)
!2189 = !MDLocation(line: 1921, column: 24, scope: !2187)
!2190 = !MDLocation(line: 1922, column: 14, scope: !2191)
!2191 = distinct !MDLexicalBlock(scope: !2187, file: !4, line: 1922, column: 8)
!2192 = !MDLocation(line: 1922, column: 25, scope: !2191)
!2193 = !MDLocation(line: 1922, column: 22, scope: !2191)
!2194 = !MDLocation(line: 1922, column: 8, scope: !2187)
!2195 = !MDLocation(line: 1923, column: 18, scope: !2191)
!2196 = !MDLocation(line: 1923, column: 33, scope: !2191)
!2197 = !MDLocation(line: 1923, column: 13, scope: !2191)
!2198 = !MDLocation(line: 1923, column: 6, scope: !2191)
!2199 = !MDLocation(line: 1924, column: 13, scope: !2200)
!2200 = distinct !MDLexicalBlock(scope: !2191, file: !4, line: 1924, column: 13)
!2201 = !MDLocation(line: 1924, column: 21, scope: !2200)
!2202 = !MDLocation(line: 1924, column: 44, scope: !2200)
!2203 = !MDLocation(line: 1924, column: 56, scope: !2200)
!2204 = !MDLocation(line: 1924, column: 36, scope: !2200)
!2205 = !MDLocation(line: 1924, column: 66, scope: !2200)
!2206 = !MDLocation(line: 1924, column: 13, scope: !2191)
!2207 = !MDLocation(line: 1926, column: 30, scope: !2208)
!2208 = distinct !MDLexicalBlock(scope: !2209, file: !4, line: 1926, column: 12)
!2209 = distinct !MDLexicalBlock(scope: !2200, file: !4, line: 1925, column: 6)
!2210 = !MDLocation(line: 1926, column: 12, scope: !2208)
!2211 = !MDLocation(line: 1926, column: 39, scope: !2208)
!2212 = !MDLocation(line: 1926, column: 12, scope: !2209)
!2213 = !MDLocation(line: 1927, column: 15, scope: !2208)
!2214 = !MDLocation(line: 1927, column: 27, scope: !2208)
!2215 = !MDLocation(line: 1927, column: 10, scope: !2208)
!2216 = !MDLocation(line: 1927, column: 3, scope: !2208)
!2217 = !MDLocation(line: 1929, column: 21, scope: !2208)
!2218 = !MDLocation(line: 1929, column: 36, scope: !2208)
!2219 = !MDLocation(line: 1929, column: 10, scope: !2208)
!2220 = !MDLocation(line: 1929, column: 3, scope: !2208)
!2221 = !MDLocation(line: 1932, column: 38, scope: !2200)
!2222 = !MDLocation(line: 1932, column: 13, scope: !2200)
!2223 = !MDLocation(line: 1932, column: 6, scope: !2200)
!2224 = !MDLocation(line: 1934, column: 16, scope: !2225)
!2225 = distinct !MDLexicalBlock(scope: !2180, file: !4, line: 1934, column: 16)
!2226 = !MDLocation(line: 1934, column: 24, scope: !2225)
!2227 = !MDLocation(line: 1934, column: 52, scope: !2225)
!2228 = !MDLocation(line: 1934, column: 39, scope: !2225)
!2229 = !MDLocation(line: 1934, column: 62, scope: !2225)
!2230 = !MDLocation(line: 1934, column: 16, scope: !2180)
!2231 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "__after", scope: !2232, file: !4, line: 1937, type: !86)
!2232 = distinct !MDLexicalBlock(scope: !2225, file: !4, line: 1935, column: 2)
!2233 = !MDLocation(line: 1937, column: 13, scope: !2232)
!2234 = !MDLocation(line: 1937, column: 23, scope: !2232)
!2235 = !MDLocation(line: 1938, column: 14, scope: !2236)
!2236 = distinct !MDLexicalBlock(scope: !2232, file: !4, line: 1938, column: 8)
!2237 = !MDLocation(line: 1938, column: 25, scope: !2236)
!2238 = !MDLocation(line: 1938, column: 22, scope: !2236)
!2239 = !MDLocation(line: 1938, column: 8, scope: !2232)
!2240 = !MDLocation(line: 1939, column: 18, scope: !2236)
!2241 = !MDLocation(line: 1939, column: 21, scope: !2236)
!2242 = !MDLocation(line: 1939, column: 13, scope: !2236)
!2243 = !MDLocation(line: 1939, column: 6, scope: !2236)
!2244 = !MDLocation(line: 1940, column: 13, scope: !2245)
!2245 = distinct !MDLexicalBlock(scope: !2236, file: !4, line: 1940, column: 13)
!2246 = !MDLocation(line: 1940, column: 21, scope: !2245)
!2247 = !MDLocation(line: 1940, column: 36, scope: !2245)
!2248 = !MDLocation(line: 1940, column: 49, scope: !2245)
!2249 = !MDLocation(line: 1940, column: 60, scope: !2245)
!2250 = !MDLocation(line: 1940, column: 41, scope: !2245)
!2251 = !MDLocation(line: 1940, column: 13, scope: !2236)
!2252 = !MDLocation(line: 1942, column: 27, scope: !2253)
!2253 = distinct !MDLexicalBlock(scope: !2254, file: !4, line: 1942, column: 12)
!2254 = distinct !MDLexicalBlock(scope: !2245, file: !4, line: 1941, column: 6)
!2255 = !MDLocation(line: 1942, column: 12, scope: !2253)
!2256 = !MDLocation(line: 1942, column: 36, scope: !2253)
!2257 = !MDLocation(line: 1942, column: 12, scope: !2254)
!2258 = !MDLocation(line: 1943, column: 15, scope: !2253)
!2259 = !MDLocation(line: 1943, column: 24, scope: !2253)
!2260 = !MDLocation(line: 1943, column: 10, scope: !2253)
!2261 = !MDLocation(line: 1943, column: 3, scope: !2253)
!2262 = !MDLocation(line: 1945, column: 23, scope: !2253)
!2263 = !MDLocation(line: 1945, column: 40, scope: !2253)
!2264 = !MDLocation(line: 1945, column: 10, scope: !2253)
!2265 = !MDLocation(line: 1945, column: 3, scope: !2253)
!2266 = !MDLocation(line: 1948, column: 38, scope: !2245)
!2267 = !MDLocation(line: 1948, column: 13, scope: !2245)
!2268 = !MDLocation(line: 1948, column: 6, scope: !2245)
!2269 = !MDLocation(line: 1952, column: 20, scope: !2225)
!2270 = !MDLocation(line: 1952, column: 29, scope: !2225)
!2271 = !MDLocation(line: 1952, column: 9, scope: !2225)
!2272 = !MDLocation(line: 1952, column: 2, scope: !2225)
!2273 = !MDLocation(line: 1953, column: 5, scope: !964)
!2274 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !974, type: !1674, flags: DIFlagArtificial | DIFlagObjectPointer)
!2275 = !MDLocation(line: 0, scope: !974)
!2276 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__x", arg: 2, scope: !974, file: !4, line: 763, type: !332)
!2277 = !MDLocation(line: 763, column: 23, scope: !974)
!2278 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__p", arg: 3, scope: !974, file: !4, line: 763, type: !332)
!2279 = !MDLocation(line: 763, column: 38, scope: !974)
!2280 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__v", arg: 4, scope: !974, file: !4, line: 764, type: !320)
!2281 = !MDLocation(line: 764, column: 24, scope: !974)
!2282 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__node_gen", arg: 5, scope: !974, file: !4, line: 764, type: !960)
!2283 = !MDLocation(line: 764, column: 38, scope: !974)
!2284 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "__insert_left", scope: !974, file: !4, line: 1505, type: !46)
!2285 = !MDLocation(line: 1505, column: 7, scope: !974)
!2286 = !MDLocation(line: 1505, column: 24, scope: !974)
!2287 = !MDLocation(line: 1505, column: 28, scope: !974)
!2288 = !MDLocation(line: 1505, column: 33, scope: !974)
!2289 = !MDLocation(line: 1505, column: 36, scope: !2290)
!2290 = !MDLexicalBlockFile(scope: !974, file: !4, discriminator: 2)
!2291 = !MDLocation(line: 1505, column: 43, scope: !974)
!2292 = !MDLocation(line: 1505, column: 40, scope: !974)
!2293 = !MDLocation(line: 1506, column: 10, scope: !974)
!2294 = !MDLocation(line: 1506, column: 13, scope: !2295)
!2295 = !MDLexicalBlockFile(scope: !974, file: !4, discriminator: 1)
!2296 = !MDLocation(line: 1506, column: 21, scope: !974)
!2297 = !MDLocation(line: 1506, column: 50, scope: !974)
!2298 = !MDLocation(line: 1506, column: 36, scope: !974)
!2299 = !MDLocation(line: 1507, column: 15, scope: !974)
!2300 = !MDLocation(line: 1507, column: 8, scope: !974)
!2301 = !MDLocation(line: 1506, column: 13, scope: !974)
!2302 = !MDLocation(line: 1505, column: 7, scope: !2295)
!2303 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "__z", scope: !974, file: !4, line: 1509, type: !312)
!2304 = !MDLocation(line: 1509, column: 13, scope: !974)
!2305 = !MDLocation(line: 1509, column: 19, scope: !974)
!2306 = !MDLocation(line: 1509, column: 30, scope: !974)
!2307 = !MDLocation(line: 1511, column: 32, scope: !974)
!2308 = !MDLocation(line: 1511, column: 47, scope: !974)
!2309 = !MDLocation(line: 1511, column: 52, scope: !974)
!2310 = !MDLocation(line: 1512, column: 17, scope: !974)
!2311 = !MDLocation(line: 1512, column: 25, scope: !974)
!2312 = !MDLocation(line: 1511, column: 2, scope: !974)
!2313 = !MDLocation(line: 1513, column: 4, scope: !974)
!2314 = !MDLocation(line: 1513, column: 12, scope: !974)
!2315 = !MDLocation(line: 1513, column: 2, scope: !974)
!2316 = !MDLocation(line: 1514, column: 18, scope: !974)
!2317 = !MDLocation(line: 1514, column: 9, scope: !974)
!2318 = !MDLocation(line: 1514, column: 2, scope: !974)
!2319 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !965, type: !2320, flags: DIFlagArtificial | DIFlagObjectPointer)
!2320 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !697, size: 64, align: 64)
!2321 = !MDLocation(line: 0, scope: !965)
!2322 = !MDLocation(line: 271, column: 66, scope: !965)
!2323 = !MDLocation(line: 271, column: 16, scope: !965)
!2324 = !MDLocation(line: 271, column: 9, scope: !965)
!2325 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !966, type: !1769, flags: DIFlagArtificial | DIFlagObjectPointer)
!2326 = !MDLocation(line: 0, scope: !966)
!2327 = !MDLocation(line: 906, column: 16, scope: !966)
!2328 = !MDLocation(line: 906, column: 24, scope: !966)
!2329 = !MDLocation(line: 906, column: 9, scope: !966)
!2330 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !967, type: !1674, flags: DIFlagArtificial | DIFlagObjectPointer)
!2331 = !MDLocation(line: 0, scope: !967)
!2332 = !MDLocation(line: 644, column: 22, scope: !967)
!2333 = !MDLocation(line: 644, column: 30, scope: !967)
!2334 = !MDLocation(line: 644, column: 40, scope: !967)
!2335 = !MDLocation(line: 644, column: 9, scope: !967)
!2336 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !968, type: !2337, flags: DIFlagArtificial | DIFlagObjectPointer)
!2337 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !"_ZTSSt4pairIPSt18_Rb_tree_node_baseS1_E", size: 64, align: 64)
!2338 = !MDLocation(line: 0, scope: !968)
!2339 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__a", arg: 2, scope: !968, file: !222, line: 112, type: !671)
!2340 = !MDLocation(line: 112, column: 42, scope: !968)
!2341 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__b", arg: 3, scope: !968, file: !222, line: 112, type: !671)
!2342 = !MDLocation(line: 112, column: 58, scope: !968)
!2343 = !MDLocation(line: 113, column: 9, scope: !968)
!2344 = !MDLocation(line: 113, column: 15, scope: !968)
!2345 = !MDLocation(line: 113, column: 21, scope: !968)
!2346 = !MDLocation(line: 113, column: 28, scope: !968)
!2347 = !MDLocation(line: 113, column: 35, scope: !968)
!2348 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !969, type: !1674, flags: DIFlagArtificial | DIFlagObjectPointer)
!2349 = !MDLocation(line: 0, scope: !969)
!2350 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__k", arg: 2, scope: !969, file: !4, line: 726, type: !385)
!2351 = !MDLocation(line: 726, column: 48, scope: !969)
!2352 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "__x", scope: !969, file: !4, line: 1804, type: !312)
!2353 = !MDLocation(line: 1804, column: 18, scope: !969)
!2354 = !MDLocation(line: 1804, column: 24, scope: !969)
!2355 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "__y", scope: !969, file: !4, line: 1805, type: !312)
!2356 = !MDLocation(line: 1805, column: 18, scope: !969)
!2357 = !MDLocation(line: 1805, column: 24, scope: !969)
!2358 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "__comp", scope: !969, file: !4, line: 1806, type: !46)
!2359 = !MDLocation(line: 1806, column: 12, scope: !969)
!2360 = !MDLocation(line: 1807, column: 7, scope: !969)
!2361 = !MDLocation(line: 1807, column: 14, scope: !2362)
!2362 = !MDLexicalBlockFile(scope: !2363, file: !4, discriminator: 2)
!2363 = !MDLexicalBlockFile(scope: !969, file: !4, discriminator: 1)
!2364 = !MDLocation(line: 1807, column: 18, scope: !969)
!2365 = !MDLocation(line: 1809, column: 10, scope: !2366)
!2366 = distinct !MDLexicalBlock(scope: !969, file: !4, line: 1808, column: 2)
!2367 = !MDLocation(line: 1809, column: 8, scope: !2366)
!2368 = !MDLocation(line: 1810, column: 13, scope: !2366)
!2369 = !MDLocation(line: 1810, column: 21, scope: !2366)
!2370 = !MDLocation(line: 1810, column: 36, scope: !2366)
!2371 = !MDLocation(line: 1810, column: 48, scope: !2366)
!2372 = !MDLocation(line: 1810, column: 41, scope: !2366)
!2373 = !MDLocation(line: 1810, column: 11, scope: !2366)
!2374 = !MDLocation(line: 1811, column: 10, scope: !2366)
!2375 = !MDLocation(line: 1811, column: 27, scope: !2376)
!2376 = !MDLexicalBlockFile(scope: !2366, file: !4, discriminator: 1)
!2377 = !MDLocation(line: 1811, column: 19, scope: !2366)
!2378 = !MDLocation(line: 1811, column: 43, scope: !2379)
!2379 = !MDLexicalBlockFile(scope: !2366, file: !4, discriminator: 2)
!2380 = !MDLocation(line: 1811, column: 34, scope: !2366)
!2381 = !MDLocation(line: 1811, column: 8, scope: !2382)
!2382 = !MDLexicalBlockFile(scope: !2383, file: !4, discriminator: 4)
!2383 = !MDLexicalBlockFile(scope: !2366, file: !4, discriminator: 3)
!2384 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "__j", scope: !969, file: !4, line: 1813, type: !86)
!2385 = !MDLocation(line: 1813, column: 16, scope: !969)
!2386 = !MDLocation(line: 1813, column: 31, scope: !969)
!2387 = !MDLocation(line: 1813, column: 22, scope: !969)
!2388 = !MDLocation(line: 1814, column: 11, scope: !2389)
!2389 = distinct !MDLexicalBlock(scope: !969, file: !4, line: 1814, column: 11)
!2390 = !MDLocation(line: 1814, column: 11, scope: !969)
!2391 = !MDLocation(line: 1816, column: 15, scope: !2392)
!2392 = distinct !MDLexicalBlock(scope: !2393, file: !4, line: 1816, column: 8)
!2393 = distinct !MDLexicalBlock(scope: !2389, file: !4, line: 1815, column: 2)
!2394 = !MDLocation(line: 1816, column: 12, scope: !2392)
!2395 = !MDLocation(line: 1816, column: 8, scope: !2393)
!2396 = !MDLocation(line: 1817, column: 18, scope: !2392)
!2397 = !MDLocation(line: 1817, column: 23, scope: !2392)
!2398 = !MDLocation(line: 1817, column: 13, scope: !2392)
!2399 = !MDLocation(line: 1817, column: 6, scope: !2392)
!2400 = !MDLocation(line: 1819, column: 6, scope: !2392)
!2401 = !MDLocation(line: 1820, column: 2, scope: !2393)
!2402 = !MDLocation(line: 1821, column: 11, scope: !2403)
!2403 = distinct !MDLexicalBlock(scope: !969, file: !4, line: 1821, column: 11)
!2404 = !MDLocation(line: 1821, column: 19, scope: !2403)
!2405 = !MDLocation(line: 1821, column: 45, scope: !2403)
!2406 = !MDLocation(line: 1821, column: 34, scope: !2403)
!2407 = !MDLocation(line: 1821, column: 55, scope: !2403)
!2408 = !MDLocation(line: 1821, column: 11, scope: !969)
!2409 = !MDLocation(line: 1822, column: 14, scope: !2403)
!2410 = !MDLocation(line: 1822, column: 19, scope: !2403)
!2411 = !MDLocation(line: 1822, column: 9, scope: !2403)
!2412 = !MDLocation(line: 1822, column: 2, scope: !2403)
!2413 = !MDLocation(line: 1823, column: 23, scope: !969)
!2414 = !MDLocation(line: 1823, column: 32, scope: !969)
!2415 = !MDLocation(line: 1823, column: 14, scope: !969)
!2416 = !MDLocation(line: 1823, column: 7, scope: !969)
!2417 = !MDLocation(line: 1824, column: 5, scope: !969)
!2418 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !971, type: !1674, flags: DIFlagArtificial | DIFlagObjectPointer)
!2419 = !MDLocation(line: 0, scope: !971)
!2420 = !MDLocation(line: 636, column: 22, scope: !971)
!2421 = !MDLocation(line: 636, column: 30, scope: !971)
!2422 = !MDLocation(line: 636, column: 40, scope: !971)
!2423 = !MDLocation(line: 636, column: 9, scope: !971)
!2424 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !972, type: !1992, flags: DIFlagArtificial | DIFlagObjectPointer)
!2425 = !MDLocation(line: 0, scope: !972)
!2426 = !MDLocation(line: 220, column: 31, scope: !972)
!2427 = !MDLocation(line: 220, column: 12, scope: !972)
!2428 = !MDLocation(line: 220, column: 2, scope: !972)
!2429 = !MDLocation(line: 220, column: 10, scope: !972)
!2430 = !MDLocation(line: 221, column: 2, scope: !972)
!2431 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !973, type: !1992, flags: DIFlagArtificial | DIFlagObjectPointer)
!2432 = !MDLocation(line: 0, scope: !973)
!2433 = !MDLocation(line: 205, column: 31, scope: !973)
!2434 = !MDLocation(line: 205, column: 12, scope: !973)
!2435 = !MDLocation(line: 205, column: 2, scope: !973)
!2436 = !MDLocation(line: 205, column: 10, scope: !973)
!2437 = !MDLocation(line: 206, column: 2, scope: !973)
!2438 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !970, type: !1674, flags: DIFlagArtificial | DIFlagObjectPointer)
!2439 = !MDLocation(line: 0, scope: !970)
!2440 = !MDLocation(line: 870, column: 31, scope: !970)
!2441 = !MDLocation(line: 870, column: 39, scope: !970)
!2442 = !MDLocation(line: 870, column: 49, scope: !970)
!2443 = !MDLocation(line: 870, column: 16, scope: !970)
!2444 = !MDLocation(line: 870, column: 9, scope: !970)
!2445 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !978, type: !2446, flags: DIFlagArtificial | DIFlagObjectPointer)
!2446 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !982, size: 64, align: 64)
!2447 = !MDLocation(line: 0, scope: !978)
!2448 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__arg", arg: 2, scope: !978, file: !4, line: 455, type: !267)
!2449 = !MDLocation(line: 455, column: 27, scope: !978)
!2450 = !MDLocation(line: 459, column: 13, scope: !978)
!2451 = !MDLocation(line: 459, column: 33, scope: !978)
!2452 = !MDLocation(line: 459, column: 6, scope: !978)
!2453 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !985, type: !1674, flags: DIFlagArtificial | DIFlagObjectPointer)
!2454 = !MDLocation(line: 0, scope: !985)
!2455 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__x", arg: 2, scope: !985, file: !4, line: 511, type: !320)
!2456 = !MDLocation(line: 511, column: 40, scope: !985)
!2457 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "__tmp", scope: !985, file: !4, line: 513, type: !312)
!2458 = !MDLocation(line: 513, column: 13, scope: !985)
!2459 = !MDLocation(line: 513, column: 21, scope: !985)
!2460 = !MDLocation(line: 514, column: 20, scope: !985)
!2461 = !MDLocation(line: 514, column: 27, scope: !985)
!2462 = !MDLocation(line: 514, column: 2, scope: !985)
!2463 = !MDLocation(line: 515, column: 9, scope: !985)
!2464 = !MDLocation(line: 515, column: 2, scope: !985)
!2465 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !986, type: !1674, flags: DIFlagArtificial | DIFlagObjectPointer)
!2466 = !MDLocation(line: 0, scope: !986)
!2467 = !MDLocation(line: 491, column: 40, scope: !986)
!2468 = !MDLocation(line: 491, column: 16, scope: !986)
!2469 = !MDLocation(line: 491, column: 9, scope: !986)
!2470 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !990, type: !1674, flags: DIFlagArtificial | DIFlagObjectPointer)
!2471 = !MDLocation(line: 0, scope: !990)
!2472 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__node", arg: 2, scope: !990, file: !4, line: 499, type: !312)
!2473 = !MDLocation(line: 499, column: 36, scope: !990)
!2474 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__x", arg: 3, scope: !990, file: !4, line: 499, type: !320)
!2475 = !MDLocation(line: 499, column: 62, scope: !990)
!2476 = !MDLocation(line: 502, column: 6, scope: !2477)
!2477 = distinct !MDLexicalBlock(scope: !990, file: !4, line: 502, column: 4)
!2478 = !MDLocation(line: 502, column: 6, scope: !2479)
!2479 = !MDLexicalBlockFile(scope: !2477, file: !4, discriminator: 1)
!2480 = !MDLocation(line: 502, column: 32, scope: !2477)
!2481 = !MDLocation(line: 502, column: 53, scope: !2482)
!2482 = !MDLexicalBlockFile(scope: !2477, file: !4, discriminator: 2)
!2483 = !MDLocation(line: 502, column: 6, scope: !2484)
!2484 = !MDLexicalBlockFile(scope: !2477, file: !4, discriminator: 3)
!2485 = !MDLocation(line: 502, column: 59, scope: !2477)
!2486 = !MDLocation(line: 508, column: 7, scope: !2477)
!2487 = !MDLocation(line: 502, column: 59, scope: !2488)
!2488 = !MDLexicalBlockFile(scope: !2477, file: !4, discriminator: 4)
!2489 = !MDLocation(line: 505, column: 18, scope: !2490)
!2490 = distinct !MDLexicalBlock(scope: !990, file: !4, line: 504, column: 4)
!2491 = !MDLocation(line: 505, column: 6, scope: !2490)
!2492 = !MDLocation(line: 506, column: 6, scope: !2490)
!2493 = !MDLocation(line: 508, column: 7, scope: !2490)
!2494 = !MDLocation(line: 507, column: 4, scope: !2490)
!2495 = !MDLocation(line: 507, column: 4, scope: !2496)
!2496 = !MDLexicalBlockFile(scope: !2490, file: !4, discriminator: 1)
!2497 = !MDLocation(line: 508, column: 7, scope: !990)
!2498 = !MDLocation(line: 507, column: 4, scope: !2499)
!2499 = !MDLexicalBlockFile(scope: !2490, file: !4, discriminator: 3)
!2500 = !MDLocation(line: 507, column: 4, scope: !2501)
!2501 = !MDLexicalBlockFile(scope: !2490, file: !4, discriminator: 2)
!2502 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__a", arg: 1, scope: !987, file: !295, line: 181, type: !778)
!2503 = !MDLocation(line: 181, column: 22, scope: !987)
!2504 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__n", arg: 2, scope: !987, file: !295, line: 181, type: !779)
!2505 = !MDLocation(line: 181, column: 37, scope: !987)
!2506 = !MDLocation(line: 182, column: 14, scope: !987)
!2507 = !MDLocation(line: 182, column: 27, scope: !987)
!2508 = !MDLocation(line: 182, column: 7, scope: !987)
!2509 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !988, type: !1837, flags: DIFlagArtificial | DIFlagObjectPointer)
!2510 = !MDLocation(line: 0, scope: !988)
!2511 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__n", arg: 2, scope: !988, file: !239, line: 99, type: !271)
!2512 = !MDLocation(line: 99, column: 26, scope: !988)
!2513 = !MDLocalVariable(tag: DW_TAG_arg_variable, arg: 3, scope: !988, file: !239, line: 99, type: !272)
!2514 = !MDLocation(line: 99, column: 43, scope: !988)
!2515 = !MDLocation(line: 101, column: 6, scope: !2516)
!2516 = distinct !MDLexicalBlock(scope: !988, file: !239, line: 101, column: 6)
!2517 = !MDLocation(line: 101, column: 12, scope: !2516)
!2518 = !MDLocation(line: 101, column: 10, scope: !2516)
!2519 = !MDLocation(line: 101, column: 6, scope: !988)
!2520 = !MDLocation(line: 102, column: 4, scope: !2516)
!2521 = !MDLocation(line: 104, column: 42, scope: !988)
!2522 = !MDLocation(line: 104, column: 46, scope: !988)
!2523 = !MDLocation(line: 104, column: 27, scope: !988)
!2524 = !MDLocation(line: 104, column: 9, scope: !988)
!2525 = !MDLocation(line: 104, column: 2, scope: !988)
!2526 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !989, type: !2527, flags: DIFlagArtificial | DIFlagObjectPointer)
!2527 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !614, size: 64, align: 64)
!2528 = !MDLocation(line: 0, scope: !989)
!2529 = !MDLocation(line: 114, column: 9, scope: !989)
!2530 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !991, type: !1775, flags: DIFlagArtificial | DIFlagObjectPointer)
!2531 = !MDLocation(line: 0, scope: !991)
!2532 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__p", arg: 2, scope: !991, file: !239, line: 129, type: !255)
!2533 = !MDLocation(line: 129, column: 25, scope: !991)
!2534 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "__val", arg: 3, scope: !991, file: !239, line: 129, type: !267)
!2535 = !MDLocation(line: 129, column: 41, scope: !991)
!2536 = !MDLocation(line: 130, column: 23, scope: !991)
!2537 = !MDLocation(line: 130, column: 9, scope: !991)
!2538 = !MDLocation(line: 130, column: 32, scope: !991)
!2539 = !MDLocation(line: 130, column: 28, scope: !991)
!2540 = !MDLocation(line: 130, column: 40, scope: !991)
!2541 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "this", arg: 1, scope: !992, type: !256, flags: DIFlagArtificial | DIFlagObjectPointer)
!2542 = !MDLocation(line: 0, scope: !992)
!2543 = !MDLocalVariable(tag: DW_TAG_arg_variable, arg: 2, scope: !992, type: !267)
!2544 = !MDLocation(line: 96, column: 12, scope: !992)
!2545 = !MDLocation(line: 0, scope: !998)
