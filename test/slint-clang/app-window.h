// This file is auto-generated
#pragma once
#include <array>
#include <limits>
#include <slint.h>
#include <cmath>
static_assert(1 == SLINT_VERSION_MAJOR && 12 == SLINT_VERSION_MINOR && 1 == SLINT_VERSION_PATCH, "This file was generated with Slint compiler version 1.12.1, but the Slint library used is " SLINT_VERSION_STRING ". The version numbers must match exactly.");
class ChapterRow {
    public:
    float time;
    slint::SharedString title;
    bool current;
    friend auto operator== (const class ChapterRow &a, const class ChapterRow &b) -> bool = default;
};

class ChoiceRow {
    public:
    slint::SharedString value;
    slint::SharedString label;
    bool selected;
    friend auto operator== (const class ChoiceRow &a, const class ChoiceRow &b) -> bool = default;
};

class InfoRow {
    public:
    slint::SharedString label;
    slint::SharedString value;
    friend auto operator== (const class InfoRow &a, const class InfoRow &b) -> bool = default;
};

class PlaylistRow {
    public:
    int index;
    slint::SharedString title;
    bool current;
    friend auto operator== (const class PlaylistRow &a, const class PlaylistRow &b) -> bool = default;
};

class RatioRow {
    public:
    slint::SharedString value;
    slint::SharedString label;
    friend auto operator== (const class RatioRow &a, const class RatioRow &b) -> bool = default;
};

class TrackRow {
    public:
    int id;
    slint::SharedString label;
    bool selected;
    friend auto operator== (const class TrackRow &a, const class TrackRow &b) -> bool = default;
};

class AppWindow;

class SharedGlobals;

class AppIcon_root_1;

class CtrlButton_root_3;

class RowHover_root_7;

class MenuItem_root_8;

class MenuSep_root_27;

class Stepper_root_28;

class RailItem_root_39;

class Switch_root_46;

class SettingToggleRow_root_50;

class HSlider_root_59;

class SettingSliderRow_root_64;

class SettingNavRow_root_73;

class TextButton_root_85;

class SettingsPanel_root_94;

class ContextMenu_root_173;

class AppIcon_root_1 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<slint::Brush> root_1_color;
    slint::private_api::Property<slint::SharedString> root_1_data;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_1_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_1_layoutinfo_v;
    slint::private_api::Property<float> root_1_path_2_horizontal_stretch;
    slint::private_api::Property<float> root_1_path_2_max_height;
    slint::private_api::Property<float> root_1_path_2_max_width;
    slint::private_api::Property<float> root_1_path_2_min_height;
    slint::private_api::Property<float> root_1_path_2_min_width;
    slint::private_api::Property<float> root_1_path_2_preferred_height;
    slint::private_api::Property<float> root_1_path_2_preferred_width;
    slint::private_api::Property<float> root_1_path_2_vertical_stretch;
    slint::private_api::Property<float> root_1_size;
    slint::private_api::Property<float> root_1_x;
    slint::private_api::Property<float> root_1_y;
    slint::cbindgen_private::Empty root_1 = {};
    slint::cbindgen_private::Path path_2 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
};

class CtrlButton_root_3 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<bool> root_3_active;
    slint::private_api::Callback<void()> root_3_clicked;
    slint::private_api::Property<bool> root_3_danger;
    slint::private_api::Property<float> root_3_height;
    slint::private_api::Property<slint::SharedString> root_3_icon;
    slint::private_api::Property<float> root_3_icon_size;
    slint::private_api::Property<bool> root_3_square_hover;
    slint::private_api::Property<float> root_3_width;
    slint::private_api::Property<float> root_3_x;
    slint::private_api::Property<float> root_3_y;
    AppIcon_root_1 appicon_6;
    slint::cbindgen_private::Empty root_3 = {};
    slint::cbindgen_private::TouchArea ta_4 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_5 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
};

class RowHover_root_7 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<slint::Brush> root_7_fill;
    slint::private_api::Property<float> root_7_height;
    slint::private_api::Property<float> root_7_width;
    slint::cbindgen_private::Rectangle root_7 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
};

class Component_empty_12 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MenuItem_root_8 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_12_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_12_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_12_layoutinfo_v;
    AppIcon_root_1 appicon_14;
    slint::cbindgen_private::Empty empty_12 = {};
    slint::cbindgen_private::Opacity _opacity_13 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MenuItem_root_8 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MenuItem_root_8 const * parent) -> slint::ComponentHandle<Component_empty_12>;
    ~Component_empty_12 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_12>;
};

class Component_empty_16 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MenuItem_root_8 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_16_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_16_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_16_layoutinfo_v;
    AppIcon_root_1 appicon_17;
    slint::cbindgen_private::Empty empty_16 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MenuItem_root_8 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MenuItem_root_8 const * parent) -> slint::ComponentHandle<Component_empty_16>;
    ~Component_empty_16 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_16>;
};

class Component_text_20 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MenuItem_root_8 const> parent;
    slint::cbindgen_private::SimpleText text_20 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MenuItem_root_8 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MenuItem_root_8 const * parent) -> slint::ComponentHandle<Component_text_20>;
    ~Component_text_20 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_20>;
};

class Component_text_22 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MenuItem_root_8 const> parent;
    slint::cbindgen_private::SimpleText text_22 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MenuItem_root_8 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MenuItem_root_8 const * parent) -> slint::ComponentHandle<Component_text_22>;
    ~Component_text_22 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_22>;
};

class Component_empty_24 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class MenuItem_root_8 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_24_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_24_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_24_layoutinfo_v;
    AppIcon_root_1 appicon_25;
    slint::cbindgen_private::Empty empty_24 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class MenuItem_root_8 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class MenuItem_root_8 const * parent) -> slint::ComponentHandle<Component_empty_24>;
    ~Component_empty_24 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_24>;
};

class MenuItem_root_8 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<bool> root_8_active;
    slint::private_api::Property<bool> root_8_arrow;
    slint::private_api::Property<bool> root_8_checked;
    slint::private_api::Callback<void()> root_8_clicked;
    slint::private_api::Property<slint::SharedVector<float>> root_8_empty_11_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_8_empty_11_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_8_empty_11_layoutinfo_v;
    slint::private_api::Property<slint::SharedString> root_8_icon;
    slint::private_api::Property<slint::SharedString> root_8_key_hint;
    slint::private_api::Property<slint::SharedString> root_8_label;
    slint::private_api::Property<bool> root_8_show_check;
    slint::private_api::Property<slint::SharedString> root_8_value_hint;
    slint::private_api::Property<float> root_8_width;
    slint::private_api::Property<float> root_8_x;
    slint::private_api::Property<float> root_8_y;
    RowHover_root_7 rowhover_10;
    slint::cbindgen_private::Empty root_8 = {};
    slint::cbindgen_private::TouchArea ta_9 = {};
    slint::cbindgen_private::ComplexText text_19 = {};
    slint::private_api::Conditional<class Component_empty_12> repeater_0;
    slint::private_api::Conditional<class Component_empty_16> repeater_1;
    slint::private_api::Conditional<class Component_text_20> repeater_2;
    slint::private_api::Conditional<class Component_text_22> repeater_3;
    slint::private_api::Conditional<class Component_empty_24> repeater_4;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
};

class MenuSep_root_27 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<float> root_27_width;
    slint::private_api::Property<float> root_27_y;
    slint::cbindgen_private::Rectangle root_27 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
};

class Stepper_root_28 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<bool> root_28_active;
    slint::private_api::Callback<void()> root_28_dec;
    slint::private_api::Property<slint::SharedVector<float>> root_28_empty_29_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_28_empty_29_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_28_empty_29_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> root_28_empty_31_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_28_empty_31_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_28_empty_31_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> root_28_empty_33_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_28_empty_33_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_28_empty_33_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> root_28_empty_37_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_28_empty_37_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_28_empty_37_layoutinfo_v;
    slint::private_api::Callback<void()> root_28_inc;
    slint::private_api::Property<slint::SharedString> root_28_label;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_28_rectangle_34_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_28_rectangle_34_layoutinfo_v;
    slint::private_api::Callback<void()> root_28_reset;
    slint::private_api::Property<float> root_28_text_36_min_height;
    slint::private_api::Property<float> root_28_text_36_min_width;
    slint::private_api::Property<float> root_28_text_36_preferred_height;
    slint::private_api::Property<float> root_28_text_36_preferred_width;
    slint::private_api::Property<slint::SharedString> root_28_value;
    slint::private_api::Property<float> root_28_width;
    slint::private_api::Property<float> root_28_y;
    CtrlButton_root_3 ctrlbutton_32;
    CtrlButton_root_3 ctrlbutton_38;
    slint::cbindgen_private::Empty root_28 = {};
    slint::cbindgen_private::SimpleText text_30 = {};
    slint::cbindgen_private::Empty empty_31 = {};
    slint::cbindgen_private::Empty empty_33 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_34 = {};
    slint::cbindgen_private::TouchArea rta_35 = {};
    slint::cbindgen_private::SimpleText text_36 = {};
    slint::cbindgen_private::Empty empty_37 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
};

class RailItem_root_39 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Callback<void()> root_39_clicked;
    slint::private_api::Property<slint::SharedVector<float>> root_39_empty_42_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_39_empty_42_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_39_empty_42_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> root_39_empty_43_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_39_empty_43_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_39_empty_43_layoutinfo_v;
    slint::private_api::Property<slint::SharedString> root_39_icon;
    slint::private_api::Property<slint::SharedString> root_39_label;
    slint::private_api::Property<float> root_39_rectangle_41_width;
    slint::private_api::Property<bool> root_39_selected;
    slint::private_api::Property<float> root_39_width;
    slint::private_api::Property<float> root_39_x;
    slint::private_api::Property<float> root_39_y;
    AppIcon_root_1 appicon_44;
    slint::cbindgen_private::Empty root_39 = {};
    slint::cbindgen_private::TouchArea ta_40 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_41 = {};
    slint::cbindgen_private::Empty empty_43 = {};
    slint::cbindgen_private::ComplexText text_45 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
};

class Switch_root_46 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<bool> root_46_on;
    slint::private_api::Property<float> root_46_rectangle_49_x;
    slint::private_api::Callback<void()> root_46_toggled;
    slint::private_api::Property<float> root_46_y;
    slint::cbindgen_private::Empty root_46 = {};
    slint::cbindgen_private::TouchArea toucharea_47 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_48 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_49 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
};

class SettingToggleRow_root_50 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<slint::SharedVector<float>> root_50_empty_53_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_50_empty_53_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_50_empty_53_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> root_50_empty_54_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_50_empty_54_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_50_empty_54_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> root_50_empty_57_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_50_empty_57_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_50_empty_57_layoutinfo_v;
    slint::private_api::Property<slint::SharedString> root_50_icon;
    slint::private_api::Property<bool> root_50_on;
    slint::private_api::Property<slint::SharedString> root_50_title;
    slint::private_api::Callback<void()> root_50_toggled;
    slint::private_api::Property<float> root_50_width;
    slint::private_api::Property<float> root_50_y;
    RowHover_root_7 rowhover_52;
    AppIcon_root_1 appicon_55;
    Switch_root_46 switch_58;
    slint::cbindgen_private::Empty root_50 = {};
    slint::cbindgen_private::TouchArea ta_51 = {};
    slint::cbindgen_private::Empty empty_54 = {};
    slint::cbindgen_private::ComplexText text_56 = {};
    slint::cbindgen_private::Empty empty_57 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
};

class HSlider_root_59 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<bool> root_59_bipolar;
    slint::private_api::Property<float> root_59_c;
    slint::private_api::Callback<void(float)> root_59_changed;
    slint::private_api::Callback<void(float)> root_59_committed;
    slint::private_api::Property<float> root_59_height;
    slint::private_api::Property<float> root_59_maximum;
    slint::private_api::Property<float> root_59_minimum;
    slint::private_api::Property<float> root_59_p;
    slint::private_api::Property<float> root_59_rectangle_62_width;
    slint::private_api::Property<float> root_59_rectangle_62_x;
    slint::private_api::Property<float> root_59_rectangle_63_x;
    slint::private_api::Property<float> root_59_rectangle_63_y;
    slint::private_api::Property<float> root_59_ta_60_width;
    slint::private_api::Property<float> root_59_value;
    slint::private_api::Property<float> root_59_width;
    slint::private_api::Property<float> root_59_y;
    slint::cbindgen_private::Empty root_59 = {};
    slint::cbindgen_private::TouchArea ta_60 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_61 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_62 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_63 = {};
    auto fn_emit () const -> void;
    auto fn_mouse_value () const -> float;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
};

class SettingSliderRow_root_64 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Callback<void(float)> root_64_changed;
    slint::private_api::Callback<void(float)> root_64_committed;
    slint::private_api::Property<slint::SharedVector<float>> root_64_empty_65_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_64_empty_65_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_64_empty_65_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> root_64_empty_66_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_64_empty_66_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_64_empty_66_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> root_64_empty_68_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_64_empty_68_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_64_empty_68_layoutinfo_v;
    slint::private_api::Property<float> root_64_empty_68_width;
    slint::private_api::Property<slint::SharedVector<float>> root_64_empty_69_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_64_empty_69_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_64_empty_69_layoutinfo_v;
    slint::private_api::Property<slint::SharedString> root_64_icon;
    slint::private_api::Property<float> root_64_maximum;
    slint::private_api::Property<float> root_64_minimum;
    slint::private_api::Property<float> root_64_svalue;
    slint::private_api::Property<slint::SharedString> root_64_title;
    slint::private_api::Property<slint::SharedString> root_64_value;
    slint::private_api::Property<float> root_64_width;
    slint::private_api::Property<float> root_64_y;
    AppIcon_root_1 appicon_67;
    HSlider_root_59 hslider_72;
    slint::cbindgen_private::Empty root_64 = {};
    slint::cbindgen_private::Empty empty_66 = {};
    slint::cbindgen_private::Empty empty_68 = {};
    slint::cbindgen_private::Empty empty_69 = {};
    slint::cbindgen_private::SimpleText text_70 = {};
    slint::cbindgen_private::SimpleText text_71 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
};

class Component_text_81 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class SettingNavRow_root_73 const> parent;
    slint::cbindgen_private::ComplexText text_81 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class SettingNavRow_root_73 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class SettingNavRow_root_73 const * parent) -> slint::ComponentHandle<Component_text_81>;
    ~Component_text_81 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_81>;
};

class SettingNavRow_root_73 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Callback<void()> root_73_clicked;
    slint::private_api::Property<slint::SharedVector<float>> root_73_empty_76_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_73_empty_76_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_73_empty_76_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> root_73_empty_77_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_73_empty_77_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_73_empty_77_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> root_73_empty_79_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_73_empty_79_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_73_empty_79_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> root_73_empty_83_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_73_empty_83_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_73_empty_83_layoutinfo_v;
    slint::private_api::Property<slint::SharedString> root_73_icon;
    slint::private_api::Property<slint::SharedString> root_73_title;
    slint::private_api::Property<slint::SharedString> root_73_value;
    slint::private_api::Property<float> root_73_width;
    slint::private_api::Property<float> root_73_y;
    RowHover_root_7 rowhover_75;
    AppIcon_root_1 appicon_78;
    AppIcon_root_1 appicon_84;
    slint::cbindgen_private::Empty root_73 = {};
    slint::cbindgen_private::TouchArea ta_74 = {};
    slint::cbindgen_private::Empty empty_77 = {};
    slint::cbindgen_private::Empty empty_79 = {};
    slint::cbindgen_private::ComplexText text_80 = {};
    slint::cbindgen_private::Empty empty_83 = {};
    slint::private_api::Conditional<class Component_text_81> repeater_0;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
};

class Component_empty_91 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class TextButton_root_85 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_91_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_91_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_91_layoutinfo_v;
    AppIcon_root_1 appicon_92;
    slint::cbindgen_private::Empty empty_91 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class TextButton_root_85 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class TextButton_root_85 const * parent) -> slint::ComponentHandle<Component_empty_91>;
    ~Component_empty_91 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_91>;
};

class TextButton_root_85 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Callback<void()> root_85_clicked;
    slint::private_api::Property<bool> root_85_confirmed;
    slint::private_api::Property<slint::SharedVector<float>> root_85_empty_89_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_85_empty_89_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_85_empty_89_layoutinfo_v;
    slint::private_api::Property<std::int64_t> root_85_optimized_confirm_timer_86_interval;
    slint::private_api::Property<bool> root_85_optimized_confirm_timer_86_running;
    slint::private_api::Callback<void()> root_85_optimized_confirm_timer_86_triggered;
    slint::private_api::Property<float> root_85_rectangle_88_width;
    slint::private_api::Property<slint::SharedString> root_85_text;
    slint::private_api::Property<float> root_85_width;
    slint::private_api::Property<float> root_85_x;
    slint::private_api::Property<float> root_85_y;
    slint::private_api::ChangeTracker change_tracker0;
    slint::private_api::ChangeTracker change_tracker1;
    slint::cbindgen_private::Empty root_85 = {};
    slint::cbindgen_private::TouchArea ta_87 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_88 = {};
    slint::cbindgen_private::SimpleText text_90 = {};
    slint::private_api::Conditional<class Component_empty_91> repeater_0;
    slint::Timer timer0;
    auto update_timers () -> void;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
};

class Component_empty_124 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class SettingsPanel_root_94 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_124_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_124_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_124_layoutinfo_v;
    SettingToggleRow_root_50 settingtogglerow_126;
    SettingSliderRow_root_64 settingsliderrow_127;
    SettingToggleRow_root_50 settingtogglerow_128;
    SettingToggleRow_root_50 settingtogglerow_130;
    SettingToggleRow_root_50 settingtogglerow_131;
    SettingToggleRow_root_50 settingtogglerow_132;
    SettingSliderRow_root_64 settingsliderrow_133;
    slint::cbindgen_private::Empty empty_124 = {};
    slint::cbindgen_private::SimpleText text_125 = {};
    slint::cbindgen_private::SimpleText text_129 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class SettingsPanel_root_94 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class SettingsPanel_root_94 const * parent) -> slint::ComponentHandle<Component_empty_124>;
    ~Component_empty_124 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_124>;
};

class Component_empty_135 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class SettingsPanel_root_94 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_135_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_135_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_135_layoutinfo_v;
    SettingNavRow_root_73 settingnavrow_137;
    SettingNavRow_root_73 settingnavrow_138;
    SettingSliderRow_root_64 settingsliderrow_139;
    SettingSliderRow_root_64 settingsliderrow_140;
    SettingToggleRow_root_50 settingtogglerow_141;
    SettingToggleRow_root_50 settingtogglerow_142;
    slint::cbindgen_private::Empty empty_135 = {};
    slint::cbindgen_private::SimpleText text_136 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class SettingsPanel_root_94 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class SettingsPanel_root_94 const * parent) -> slint::ComponentHandle<Component_empty_135>;
    ~Component_empty_135 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_135>;
};

class Component_empty_144 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class SettingsPanel_root_94 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_144_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_144_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_144_layoutinfo_v;
    SettingNavRow_root_73 settingnavrow_146;
    SettingSliderRow_root_64 settingsliderrow_147;
    SettingNavRow_root_73 settingnavrow_149;
    slint::cbindgen_private::Empty empty_144 = {};
    slint::cbindgen_private::SimpleText text_145 = {};
    slint::cbindgen_private::SimpleText text_148 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class SettingsPanel_root_94 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class SettingsPanel_root_94 const * parent) -> slint::ComponentHandle<Component_empty_144>;
    ~Component_empty_144 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_144>;
};

class Component_empty_151 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class SettingsPanel_root_94 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_151_empty_155_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_151_empty_155_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_151_empty_155_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> empty_151_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_151_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_151_layoutinfo_v;
    slint::private_api::Property<float> empty_151_width;
    SettingNavRow_root_73 settingnavrow_153;
    SettingSliderRow_root_64 settingsliderrow_154;
    TextButton_root_85 textbutton_156;
    slint::cbindgen_private::Empty empty_151 = {};
    slint::cbindgen_private::SimpleText text_152 = {};
    slint::cbindgen_private::Empty empty_155 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class SettingsPanel_root_94 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class SettingsPanel_root_94 const * parent) -> slint::ComponentHandle<Component_empty_151>;
    ~Component_empty_151 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_151>;
};

class Component_empty_158 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class SettingsPanel_root_94 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_158_empty_159_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_158_empty_159_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_158_empty_159_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> empty_158_empty_166_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_158_empty_166_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_158_empty_166_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> empty_158_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_158_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_158_layoutinfo_v;
    AppIcon_root_1 appicon_160;
    TextButton_root_85 textbutton_167;
    slint::cbindgen_private::Empty empty_158 = {};
    slint::cbindgen_private::Empty empty_159 = {};
    slint::cbindgen_private::SimpleText text_161 = {};
    slint::cbindgen_private::SimpleText text_162 = {};
    slint::cbindgen_private::ComplexText text_163 = {};
    slint::cbindgen_private::ComplexText text_164 = {};
    slint::cbindgen_private::SimpleText text_165 = {};
    slint::cbindgen_private::Empty empty_166 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class SettingsPanel_root_94 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class SettingsPanel_root_94 const * parent) -> slint::ComponentHandle<Component_empty_158>;
    ~Component_empty_158 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_158>;
};

class SettingsPanel_root_94 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<bool> root_94_bar_170_active;
    slint::private_api::Property<float> root_94_bar_170_frac;
    slint::private_api::Property<float> root_94_bar_170_thumb_h;
    slint::private_api::Property<slint::SharedVector<float>> root_94_empty_102_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_94_empty_102_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_94_empty_102_layoutinfo_v;
    slint::private_api::Property<float> root_94_empty_102_width;
    slint::private_api::Property<slint::SharedVector<float>> root_94_empty_103_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_94_empty_103_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_94_empty_103_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> root_94_empty_105_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_94_empty_105_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_94_empty_105_layoutinfo_v;
    slint::private_api::Property<float> root_94_empty_108_height;
    slint::private_api::Property<slint::SharedVector<float>> root_94_empty_108_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_94_empty_108_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_94_empty_108_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> root_94_empty_110_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_94_empty_110_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_94_empty_110_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> root_94_empty_123_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_94_empty_123_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_94_empty_123_layoutinfo_v;
    slint::private_api::Property<float> root_94_empty_123_width;
    slint::private_api::Property<float> root_94_fl_120_height;
    slint::private_api::Property<float> root_94_fl_120_horizontal_stretch;
    slint::private_api::Property<float> root_94_fl_120_max_height;
    slint::private_api::Property<float> root_94_fl_120_max_width;
    slint::private_api::Property<float> root_94_fl_120_min_height;
    slint::private_api::Property<float> root_94_fl_120_min_width;
    slint::private_api::Property<float> root_94_fl_120_preferred_height;
    slint::private_api::Property<float> root_94_fl_120_preferred_width;
    slint::private_api::Property<float> root_94_fl_120_vertical_stretch;
    slint::private_api::Property<float> root_94_height;
    slint::private_api::Property<slint::SharedVector<float>> root_94_inner_122_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_94_inner_122_layoutinfo_v;
    slint::private_api::Property<float> root_94_inner_122_preferred_height;
    slint::private_api::Property<float> root_94_inner_122_x;
    slint::private_api::Callback<void()> root_94_open_config;
    slint::private_api::Callback<void()> root_94_open_project;
    slint::private_api::Callback<void()> root_94_pick_font;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_94_rectangle_118_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_94_rectangle_118_layoutinfo_v;
    slint::private_api::Property<float> root_94_rectangle_97_x;
    slint::private_api::Property<float> root_94_rectangle_97_y;
    slint::private_api::Property<float> root_94_thumb_171_width;
    slint::private_api::Property<float> root_94_thumb_171_y;
    slint::private_api::Callback<void(slint::SharedString, slint::SharedString)> root_94_update_setting;
    slint::private_api::Property<float> root_94_width;
    CtrlButton_root_3 ctrlbutton_106;
    RailItem_root_39 railitem_111;
    RailItem_root_39 railitem_112;
    RailItem_root_39 railitem_113;
    RailItem_root_39 railitem_114;
    RailItem_root_39 railitem_116;
    slint::cbindgen_private::Rectangle root_94 = {};
    slint::cbindgen_private::TouchArea toucharea_95 = {};
    slint::cbindgen_private::BoxShadow _shadow_96 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_97 = {};
    slint::cbindgen_private::Clip _clip_98 = {};
    slint::cbindgen_private::TouchArea toucharea_99 = {};
    slint::cbindgen_private::Rectangle rectangle_100 = {};
    slint::cbindgen_private::TouchArea toucharea_101 = {};
    slint::cbindgen_private::Empty empty_103 = {};
    slint::cbindgen_private::SimpleText text_104 = {};
    slint::cbindgen_private::Empty empty_105 = {};
    slint::cbindgen_private::Rectangle rectangle_107 = {};
    slint::cbindgen_private::Empty empty_108 = {};
    slint::cbindgen_private::Rectangle rectangle_109 = {};
    slint::cbindgen_private::Empty rectangle_115 = {};
    slint::cbindgen_private::Rectangle rectangle_117 = {};
    slint::cbindgen_private::Empty rectangle_118 = {};
    slint::cbindgen_private::Clip _clip_119 = {};
    slint::cbindgen_private::Flickable fl_120 = {};
    slint::cbindgen_private::Empty fl_viewport_121 = {};
    slint::cbindgen_private::Empty inner_122 = {};
    slint::cbindgen_private::Empty empty_123 = {};
    slint::cbindgen_private::Clip bar_visibility_169 = {};
    slint::cbindgen_private::Empty bar_170 = {};
    slint::cbindgen_private::BasicBorderRectangle thumb_171 = {};
    slint::cbindgen_private::TouchArea tta_172 = {};
    slint::private_api::Conditional<class Component_empty_124> repeater_0;
    slint::private_api::Conditional<class Component_empty_135> repeater_1;
    slint::private_api::Conditional<class Component_empty_144> repeater_2;
    slint::private_api::Conditional<class Component_empty_151> repeater_3;
    slint::private_api::Conditional<class Component_empty_158> repeater_4;
    auto fn_rectangle_118_scroll_to (float arg_0) const -> void;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
};

class Component_empty_186 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ContextMenu_root_173 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_186_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_186_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_186_layoutinfo_v;
    MenuItem_root_8 menuitem_187;
    MenuItem_root_8 menuitem_188;
    MenuSep_root_27 menusep_189;
    MenuItem_root_8 menuitem_190;
    MenuItem_root_8 menuitem_191;
    MenuItem_root_8 menuitem_192;
    MenuItem_root_8 menuitem_193;
    MenuItem_root_8 menuitem_194;
    MenuItem_root_8 menuitem_195;
    MenuItem_root_8 menuitem_196;
    MenuSep_root_27 menusep_197;
    MenuItem_root_8 menuitem_198;
    MenuItem_root_8 menuitem_199;
    MenuItem_root_8 menuitem_200;
    MenuItem_root_8 menuitem_201;
    MenuItem_root_8 menuitem_202;
    MenuItem_root_8 menuitem_203;
    MenuSep_root_27 menusep_204;
    MenuItem_root_8 menuitem_205;
    slint::cbindgen_private::Empty empty_186 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ContextMenu_root_173 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ContextMenu_root_173 const * parent) -> slint::ComponentHandle<Component_empty_186>;
    ~Component_empty_186 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_186>;
};

class Component_empty_207 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ContextMenu_root_173 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_207_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_207_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_207_layoutinfo_v;
    MenuItem_root_8 menuitem_208;
    MenuSep_root_27 menusep_209;
    MenuItem_root_8 menuitem_210;
    MenuItem_root_8 menuitem_211;
    MenuItem_root_8 menuitem_212;
    MenuItem_root_8 menuitem_213;
    MenuItem_root_8 menuitem_214;
    MenuSep_root_27 menusep_215;
    MenuItem_root_8 menuitem_216;
    MenuItem_root_8 menuitem_217;
    slint::cbindgen_private::Empty empty_207 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ContextMenu_root_173 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ContextMenu_root_173 const * parent) -> slint::ComponentHandle<Component_empty_207>;
    ~Component_empty_207 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_207>;
};

class Component_menuitem_222 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_empty_219 const> parent;
    slint::private_api::Property<ChoiceRow> model_data;
    slint::private_api::Property<int> model_index;
    MenuItem_root_8 menuitem_222;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_empty_219 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_empty_219 const * parent) -> slint::ComponentHandle<Component_menuitem_222>;
    ~Component_menuitem_222 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const ChoiceRow &data) const -> void;
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_menuitem_222>;
};

class Component_menuitem_224 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_empty_219 const> parent;
    MenuItem_root_8 menuitem_224;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_empty_219 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_empty_219 const * parent) -> slint::ComponentHandle<Component_menuitem_224>;
    ~Component_menuitem_224 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_menuitem_224>;
};

class Component_empty_219 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ContextMenu_root_173 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_219_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_219_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_219_layoutinfo_v;
    MenuItem_root_8 menuitem_220;
    MenuSep_root_27 menusep_221;
    MenuSep_root_27 menusep_226;
    MenuItem_root_8 menuitem_227;
    slint::cbindgen_private::Empty empty_219 = {};
    slint::private_api::Repeater<class Component_menuitem_222, ChoiceRow> repeater_0;
    slint::private_api::Conditional<class Component_menuitem_224> repeater_1;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ContextMenu_root_173 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ContextMenu_root_173 const * parent) -> slint::ComponentHandle<Component_empty_219>;
    ~Component_empty_219 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_219>;
};

class Component_empty_229 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ContextMenu_root_173 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_229_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_229_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_229_layoutinfo_v;
    MenuItem_root_8 menuitem_230;
    MenuSep_root_27 menusep_231;
    MenuItem_root_8 menuitem_232;
    MenuItem_root_8 menuitem_233;
    MenuItem_root_8 menuitem_234;
    MenuItem_root_8 menuitem_235;
    MenuSep_root_27 menusep_236;
    MenuItem_root_8 menuitem_237;
    MenuItem_root_8 menuitem_238;
    MenuItem_root_8 menuitem_239;
    MenuSep_root_27 menusep_240;
    MenuItem_root_8 menuitem_241;
    MenuItem_root_8 menuitem_242;
    MenuItem_root_8 menuitem_243;
    MenuItem_root_8 menuitem_244;
    MenuSep_root_27 menusep_245;
    MenuItem_root_8 menuitem_246;
    MenuItem_root_8 menuitem_247;
    MenuItem_root_8 menuitem_248;
    slint::cbindgen_private::Empty empty_229 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ContextMenu_root_173 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ContextMenu_root_173 const * parent) -> slint::ComponentHandle<Component_empty_229>;
    ~Component_empty_229 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_229>;
};

class Component_menuitem_253 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_empty_250 const> parent;
    slint::private_api::Property<float> model_data;
    slint::private_api::Property<int> model_index;
    MenuItem_root_8 menuitem_253;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_empty_250 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_empty_250 const * parent) -> slint::ComponentHandle<Component_menuitem_253>;
    ~Component_menuitem_253 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const float &data) const -> void;
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_menuitem_253>;
};

class Component_empty_250 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ContextMenu_root_173 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_250_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_250_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_250_layoutinfo_v;
    MenuItem_root_8 menuitem_251;
    MenuSep_root_27 menusep_252;
    slint::cbindgen_private::Empty empty_250 = {};
    slint::private_api::Repeater<class Component_menuitem_253, float> repeater_0;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ContextMenu_root_173 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ContextMenu_root_173 const * parent) -> slint::ComponentHandle<Component_empty_250>;
    ~Component_empty_250 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_250>;
};

class Component_empty_256 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ContextMenu_root_173 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_256_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_256_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_256_layoutinfo_v;
    MenuItem_root_8 menuitem_257;
    MenuSep_root_27 menusep_258;
    MenuItem_root_8 menuitem_259;
    MenuItem_root_8 menuitem_260;
    MenuSep_root_27 menusep_261;
    MenuItem_root_8 menuitem_262;
    MenuItem_root_8 menuitem_263;
    MenuItem_root_8 menuitem_264;
    MenuSep_root_27 menusep_265;
    MenuItem_root_8 menuitem_266;
    MenuItem_root_8 menuitem_267;
    MenuItem_root_8 menuitem_268;
    slint::cbindgen_private::Empty empty_256 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ContextMenu_root_173 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ContextMenu_root_173 const * parent) -> slint::ComponentHandle<Component_empty_256>;
    ~Component_empty_256 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_256>;
};

class Component_menuitem_273 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_empty_270 const> parent;
    slint::private_api::Property<TrackRow> model_data;
    slint::private_api::Property<int> model_index;
    MenuItem_root_8 menuitem_273;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_empty_270 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_empty_270 const * parent) -> slint::ComponentHandle<Component_menuitem_273>;
    ~Component_menuitem_273 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const TrackRow &data) const -> void;
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_menuitem_273>;
};

class Component_empty_270 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ContextMenu_root_173 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_270_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_270_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_270_layoutinfo_v;
    MenuItem_root_8 menuitem_271;
    MenuSep_root_27 menusep_272;
    MenuItem_root_8 menuitem_275;
    slint::cbindgen_private::Empty empty_270 = {};
    slint::private_api::Repeater<class Component_menuitem_273, TrackRow> repeater_0;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ContextMenu_root_173 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ContextMenu_root_173 const * parent) -> slint::ComponentHandle<Component_empty_270>;
    ~Component_empty_270 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_270>;
};

class Component_menuitem_280 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_empty_277 const> parent;
    slint::private_api::Property<ChoiceRow> model_data;
    slint::private_api::Property<int> model_index;
    MenuItem_root_8 menuitem_280;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_empty_277 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_empty_277 const * parent) -> slint::ComponentHandle<Component_menuitem_280>;
    ~Component_menuitem_280 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const ChoiceRow &data) const -> void;
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_menuitem_280>;
};

class Component_empty_277 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ContextMenu_root_173 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_277_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_277_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_277_layoutinfo_v;
    MenuItem_root_8 menuitem_278;
    MenuSep_root_27 menusep_279;
    slint::cbindgen_private::Empty empty_277 = {};
    slint::private_api::Repeater<class Component_menuitem_280, ChoiceRow> repeater_0;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ContextMenu_root_173 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ContextMenu_root_173 const * parent) -> slint::ComponentHandle<Component_empty_277>;
    ~Component_empty_277 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_277>;
};

class Component_empty_283 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ContextMenu_root_173 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_283_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_283_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_283_layoutinfo_v;
    MenuItem_root_8 menuitem_284;
    MenuSep_root_27 menusep_285;
    MenuItem_root_8 menuitem_286;
    MenuItem_root_8 menuitem_287;
    MenuItem_root_8 menuitem_288;
    MenuItem_root_8 menuitem_289;
    MenuItem_root_8 menuitem_290;
    MenuItem_root_8 menuitem_291;
    MenuSep_root_27 menusep_292;
    MenuItem_root_8 menuitem_293;
    MenuItem_root_8 menuitem_294;
    MenuItem_root_8 menuitem_295;
    slint::cbindgen_private::Empty empty_283 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ContextMenu_root_173 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ContextMenu_root_173 const * parent) -> slint::ComponentHandle<Component_empty_283>;
    ~Component_empty_283 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_283>;
};

class Component_menuitem_300 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_empty_297 const> parent;
    slint::private_api::Property<TrackRow> model_data;
    slint::private_api::Property<int> model_index;
    MenuItem_root_8 menuitem_300;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_empty_297 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_empty_297 const * parent) -> slint::ComponentHandle<Component_menuitem_300>;
    ~Component_menuitem_300 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const TrackRow &data) const -> void;
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_menuitem_300>;
};

class Component_empty_297 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ContextMenu_root_173 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_297_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_297_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_297_layoutinfo_v;
    MenuItem_root_8 menuitem_298;
    MenuSep_root_27 menusep_299;
    MenuItem_root_8 menuitem_302;
    slint::cbindgen_private::Empty empty_297 = {};
    slint::private_api::Repeater<class Component_menuitem_300, TrackRow> repeater_0;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ContextMenu_root_173 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ContextMenu_root_173 const * parent) -> slint::ComponentHandle<Component_empty_297>;
    ~Component_empty_297 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_297>;
};

class Component_empty_304 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ContextMenu_root_173 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_304_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_304_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_304_layoutinfo_v;
    MenuItem_root_8 menuitem_305;
    MenuSep_root_27 menusep_306;
    MenuItem_root_8 menuitem_307;
    MenuItem_root_8 menuitem_308;
    MenuItem_root_8 menuitem_309;
    MenuItem_root_8 menuitem_310;
    slint::cbindgen_private::Empty empty_304 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ContextMenu_root_173 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ContextMenu_root_173 const * parent) -> slint::ComponentHandle<Component_empty_304>;
    ~Component_empty_304 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_304>;
};

class Component_empty_312 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ContextMenu_root_173 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_312_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_312_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_312_layoutinfo_v;
    MenuItem_root_8 menuitem_313;
    MenuSep_root_27 menusep_314;
    MenuItem_root_8 menuitem_315;
    MenuItem_root_8 menuitem_316;
    MenuSep_root_27 menusep_317;
    MenuItem_root_8 menuitem_318;
    MenuItem_root_8 menuitem_319;
    MenuItem_root_8 menuitem_320;
    MenuItem_root_8 menuitem_321;
    slint::cbindgen_private::Empty empty_312 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ContextMenu_root_173 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ContextMenu_root_173 const * parent) -> slint::ComponentHandle<Component_empty_312>;
    ~Component_empty_312 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_312>;
};

class Component_empty_323 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ContextMenu_root_173 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_323_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_323_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_323_layoutinfo_v;
    MenuItem_root_8 menuitem_324;
    MenuSep_root_27 menusep_325;
    MenuItem_root_8 menuitem_326;
    MenuItem_root_8 menuitem_327;
    MenuItem_root_8 menuitem_328;
    MenuItem_root_8 menuitem_329;
    MenuItem_root_8 menuitem_330;
    MenuItem_root_8 menuitem_331;
    MenuItem_root_8 menuitem_332;
    MenuItem_root_8 menuitem_333;
    MenuItem_root_8 menuitem_334;
    slint::cbindgen_private::Empty empty_323 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ContextMenu_root_173 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ContextMenu_root_173 const * parent) -> slint::ComponentHandle<Component_empty_323>;
    ~Component_empty_323 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_323>;
};

class Component_menuitem_339 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_empty_336 const> parent;
    slint::private_api::Property<RatioRow> model_data;
    slint::private_api::Property<int> model_index;
    MenuItem_root_8 menuitem_339;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_empty_336 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_empty_336 const * parent) -> slint::ComponentHandle<Component_menuitem_339>;
    ~Component_menuitem_339 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const RatioRow &data) const -> void;
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_menuitem_339>;
};

class Component_empty_336 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ContextMenu_root_173 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_336_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_336_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_336_layoutinfo_v;
    MenuItem_root_8 menuitem_337;
    MenuSep_root_27 menusep_338;
    slint::cbindgen_private::Empty empty_336 = {};
    slint::private_api::Repeater<class Component_menuitem_339, RatioRow> repeater_0;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ContextMenu_root_173 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ContextMenu_root_173 const * parent) -> slint::ComponentHandle<Component_empty_336>;
    ~Component_empty_336 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_336>;
};

class Component_empty_342 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ContextMenu_root_173 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_342_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_342_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_342_layoutinfo_v;
    MenuItem_root_8 menuitem_343;
    MenuSep_root_27 menusep_344;
    MenuItem_root_8 menuitem_345;
    MenuItem_root_8 menuitem_346;
    MenuItem_root_8 menuitem_347;
    MenuItem_root_8 menuitem_348;
    MenuItem_root_8 menuitem_349;
    MenuItem_root_8 menuitem_350;
    MenuItem_root_8 menuitem_351;
    MenuItem_root_8 menuitem_352;
    MenuItem_root_8 menuitem_353;
    MenuItem_root_8 menuitem_354;
    slint::cbindgen_private::Empty empty_342 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ContextMenu_root_173 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ContextMenu_root_173 const * parent) -> slint::ComponentHandle<Component_empty_342>;
    ~Component_empty_342 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_342>;
};

class Component_empty_356 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ContextMenu_root_173 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_356_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_356_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_356_layoutinfo_v;
    MenuItem_root_8 menuitem_357;
    MenuSep_root_27 menusep_358;
    MenuItem_root_8 menuitem_359;
    MenuItem_root_8 menuitem_360;
    MenuItem_root_8 menuitem_361;
    MenuSep_root_27 menusep_362;
    MenuItem_root_8 menuitem_363;
    MenuItem_root_8 menuitem_364;
    MenuItem_root_8 menuitem_365;
    MenuItem_root_8 menuitem_366;
    MenuItem_root_8 menuitem_367;
    MenuItem_root_8 menuitem_368;
    MenuItem_root_8 menuitem_369;
    slint::cbindgen_private::Empty empty_356 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ContextMenu_root_173 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ContextMenu_root_173 const * parent) -> slint::ComponentHandle<Component_empty_356>;
    ~Component_empty_356 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_356>;
};

class Component_menuitem_375 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_empty_371 const> parent;
    slint::private_api::Property<TrackRow> model_data;
    slint::private_api::Property<int> model_index;
    MenuItem_root_8 menuitem_375;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_empty_371 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_empty_371 const * parent) -> slint::ComponentHandle<Component_menuitem_375>;
    ~Component_menuitem_375 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const TrackRow &data) const -> void;
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_menuitem_375>;
};

class Component_empty_371 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ContextMenu_root_173 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_371_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_371_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_371_layoutinfo_v;
    MenuItem_root_8 menuitem_372;
    MenuSep_root_27 menusep_373;
    MenuItem_root_8 menuitem_374;
    slint::cbindgen_private::Empty empty_371 = {};
    slint::private_api::Repeater<class Component_menuitem_375, TrackRow> repeater_0;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ContextMenu_root_173 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ContextMenu_root_173 const * parent) -> slint::ComponentHandle<Component_empty_371>;
    ~Component_empty_371 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_371>;
};

class Component_empty_378 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ContextMenu_root_173 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_378_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_378_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_378_layoutinfo_v;
    MenuItem_root_8 menuitem_379;
    MenuSep_root_27 menusep_380;
    MenuItem_root_8 menuitem_381;
    MenuItem_root_8 menuitem_382;
    MenuItem_root_8 menuitem_383;
    MenuItem_root_8 menuitem_384;
    MenuItem_root_8 menuitem_385;
    MenuItem_root_8 menuitem_386;
    MenuItem_root_8 menuitem_387;
    MenuItem_root_8 menuitem_388;
    slint::cbindgen_private::Empty empty_378 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ContextMenu_root_173 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ContextMenu_root_173 const * parent) -> slint::ComponentHandle<Component_empty_378>;
    ~Component_empty_378 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_378>;
};

class Component_menuitem_396 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_empty_390 const> parent;
    slint::private_api::Property<ChapterRow> model_data;
    slint::private_api::Property<int> model_index;
    MenuItem_root_8 menuitem_396;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_empty_390 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_empty_390 const * parent) -> slint::ComponentHandle<Component_menuitem_396>;
    ~Component_menuitem_396 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const ChapterRow &data) const -> void;
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_menuitem_396>;
};

class Component_empty_390 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ContextMenu_root_173 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_390_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_390_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_390_layoutinfo_v;
    MenuItem_root_8 menuitem_391;
    MenuSep_root_27 menusep_392;
    MenuItem_root_8 menuitem_393;
    MenuItem_root_8 menuitem_394;
    MenuSep_root_27 menusep_395;
    slint::cbindgen_private::Empty empty_390 = {};
    slint::private_api::Repeater<class Component_menuitem_396, ChapterRow> repeater_0;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ContextMenu_root_173 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ContextMenu_root_173 const * parent) -> slint::ComponentHandle<Component_empty_390>;
    ~Component_empty_390 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_390>;
};

class Component_empty_399 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ContextMenu_root_173 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_399_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_399_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_399_layoutinfo_v;
    MenuItem_root_8 menuitem_400;
    MenuSep_root_27 menusep_401;
    MenuItem_root_8 menuitem_402;
    MenuItem_root_8 menuitem_403;
    MenuItem_root_8 menuitem_404;
    MenuItem_root_8 menuitem_405;
    MenuItem_root_8 menuitem_406;
    MenuItem_root_8 menuitem_407;
    MenuItem_root_8 menuitem_408;
    MenuItem_root_8 menuitem_409;
    MenuSep_root_27 menusep_410;
    MenuItem_root_8 menuitem_411;
    MenuItem_root_8 menuitem_412;
    slint::cbindgen_private::Empty empty_399 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ContextMenu_root_173 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ContextMenu_root_173 const * parent) -> slint::ComponentHandle<Component_empty_399>;
    ~Component_empty_399 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_399>;
};

class Component_menuitem_417 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_empty_414 const> parent;
    slint::private_api::Property<ChoiceRow> model_data;
    slint::private_api::Property<int> model_index;
    MenuItem_root_8 menuitem_417;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_empty_414 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_empty_414 const * parent) -> slint::ComponentHandle<Component_menuitem_417>;
    ~Component_menuitem_417 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const ChoiceRow &data) const -> void;
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_menuitem_417>;
};

class Component_menuitem_419 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_empty_414 const> parent;
    MenuItem_root_8 menuitem_419;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_empty_414 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_empty_414 const * parent) -> slint::ComponentHandle<Component_menuitem_419>;
    ~Component_menuitem_419 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_menuitem_419>;
};

class Component_empty_414 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class ContextMenu_root_173 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_414_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_414_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_414_layoutinfo_v;
    MenuItem_root_8 menuitem_415;
    MenuSep_root_27 menusep_416;
    slint::cbindgen_private::Empty empty_414 = {};
    slint::private_api::Repeater<class Component_menuitem_417, ChoiceRow> repeater_0;
    slint::private_api::Conditional<class Component_menuitem_419> repeater_1;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class ContextMenu_root_173 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class ContextMenu_root_173 const * parent) -> slint::ComponentHandle<Component_empty_414>;
    ~Component_empty_414 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_414>;
};

class ContextMenu_root_173 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Callback<void(slint::SharedString)> root_173_apply_profile;
    slint::private_api::Property<bool> root_173_bar_423_active;
    slint::private_api::Property<float> root_173_bar_423_frac;
    slint::private_api::Property<float> root_173_bar_423_thumb_h;
    slint::private_api::Property<float> root_173_card_176_height;
    slint::private_api::Property<float> root_173_card_176_x;
    slint::private_api::Property<float> root_173_card_176_y;
    slint::private_api::Callback<void()> root_173_clear_recent;
    slint::private_api::Callback<void(slint::SharedString)> root_173_command;
    slint::private_api::Property<float> root_173_fl_182_height;
    slint::private_api::Property<float> root_173_fl_182_horizontal_stretch;
    slint::private_api::Property<float> root_173_fl_182_max_height;
    slint::private_api::Property<float> root_173_fl_182_max_width;
    slint::private_api::Property<float> root_173_fl_182_min_height;
    slint::private_api::Property<float> root_173_fl_182_min_width;
    slint::private_api::Property<float> root_173_fl_182_preferred_height;
    slint::private_api::Property<float> root_173_fl_182_preferred_width;
    slint::private_api::Property<float> root_173_fl_182_vertical_stretch;
    slint::private_api::Property<float> root_173_height;
    slint::private_api::Property<slint::SharedVector<float>> root_173_inner_184_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_173_inner_184_layoutinfo_v;
    slint::private_api::Property<float> root_173_inner_184_x;
    slint::private_api::Property<slint::SharedVector<float>> root_173_items_185_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_173_items_185_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_173_items_185_layoutinfo_v;
    slint::private_api::Callback<void()> root_173_open_clipboard;
    slint::private_api::Callback<void()> root_173_open_disc;
    slint::private_api::Callback<void()> root_173_open_file;
    slint::private_api::Callback<void()> root_173_open_folder;
    slint::private_api::Callback<void()> root_173_open_iso;
    slint::private_api::Callback<void(slint::SharedString)> root_173_open_recent;
    slint::private_api::Callback<void()> root_173_open_url;
    slint::private_api::Callback<void()> root_173_playlist_add_files;
    slint::private_api::Callback<void()> root_173_playlist_add_folder;
    slint::private_api::Property<std::shared_ptr<slint::Model<RatioRow>>> root_173_ratios;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_173_rectangle_180_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> root_173_rectangle_180_layoutinfo_v;
    slint::private_api::Callback<void(int)> root_173_seek_chapter;
    slint::private_api::Callback<void(int)> root_173_select_audio;
    slint::private_api::Callback<void(slint::SharedString)> root_173_select_audio_device;
    slint::private_api::Callback<void(int)> root_173_select_sub;
    slint::private_api::Callback<void(int)> root_173_select_video;
    slint::private_api::Callback<void(bool)> root_173_set_always_on_top;
    slint::private_api::Callback<void(slint::SharedString)> root_173_set_aspect;
    slint::private_api::Property<float> root_173_thumb_424_width;
    slint::private_api::Property<float> root_173_thumb_424_y;
    slint::private_api::Property<float> root_173_width;
    slint::cbindgen_private::Empty root_173 = {};
    slint::cbindgen_private::TouchArea toucharea_174 = {};
    slint::cbindgen_private::BoxShadow card_shadow_175 = {};
    slint::cbindgen_private::BasicBorderRectangle card_176 = {};
    slint::cbindgen_private::Clip card_clip_177 = {};
    slint::cbindgen_private::TouchArea toucharea_178 = {};
    slint::cbindgen_private::Rectangle rectangle_179 = {};
    slint::cbindgen_private::Clip _clip_181 = {};
    slint::cbindgen_private::Flickable fl_182 = {};
    slint::cbindgen_private::Empty fl_viewport_183 = {};
    slint::cbindgen_private::Empty inner_184 = {};
    slint::cbindgen_private::Empty items_185 = {};
    slint::cbindgen_private::Clip bar_visibility_422 = {};
    slint::cbindgen_private::Empty bar_423 = {};
    slint::cbindgen_private::BasicBorderRectangle thumb_424 = {};
    slint::cbindgen_private::TouchArea tta_425 = {};
    slint::private_api::Conditional<class Component_empty_186> repeater_0;
    slint::private_api::Conditional<class Component_empty_207> repeater_1;
    slint::private_api::Conditional<class Component_empty_219> repeater_2;
    slint::private_api::Conditional<class Component_empty_229> repeater_3;
    slint::private_api::Conditional<class Component_empty_250> repeater_4;
    slint::private_api::Conditional<class Component_empty_256> repeater_5;
    slint::private_api::Conditional<class Component_empty_270> repeater_6;
    slint::private_api::Conditional<class Component_empty_277> repeater_7;
    slint::private_api::Conditional<class Component_empty_283> repeater_8;
    slint::private_api::Conditional<class Component_empty_297> repeater_9;
    slint::private_api::Conditional<class Component_empty_304> repeater_10;
    slint::private_api::Conditional<class Component_empty_312> repeater_11;
    slint::private_api::Conditional<class Component_empty_323> repeater_12;
    slint::private_api::Conditional<class Component_empty_336> repeater_13;
    slint::private_api::Conditional<class Component_empty_342> repeater_14;
    slint::private_api::Conditional<class Component_empty_356> repeater_15;
    slint::private_api::Conditional<class Component_empty_371> repeater_16;
    slint::private_api::Conditional<class Component_empty_378> repeater_17;
    slint::private_api::Conditional<class Component_empty_390> repeater_18;
    slint::private_api::Conditional<class Component_empty_399> repeater_19;
    slint::private_api::Conditional<class Component_empty_414> repeater_20;
    auto fn_rectangle_180_scroll_to (float arg_0) const -> void;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
};

class Theme_820 {
    public:
    slint::private_api::Property<slint::Color> accent;
    slint::private_api::Property<slint::Color> menu_bottom;
    slint::private_api::Property<slint::Color> menu_top;
    slint::private_api::Property<slint::SharedString> name;
    slint::private_api::Property<float> radius_md;
    slint::private_api::Property<bool> rounding;
    slint::private_api::Property<bool> shadows;
    Theme_820 (const class SharedGlobals *globals);
    private:
    auto init () -> void;
    const class SharedGlobals* globals;
    friend class SharedGlobals;
};

class PlayerState_822 {
    public:
    slint::private_api::Property<float> ab_a;
    slint::private_api::Property<float> ab_b;
    slint::private_api::Property<bool> ab_enabled;
    slint::private_api::Property<slint::SharedString> active_panel;
    slint::private_api::Property<slint::SharedString> app_version;
    slint::private_api::Property<float> audio_delay;
    slint::private_api::Property<std::shared_ptr<slint::Model<ChoiceRow>>> audio_devices;
    slint::private_api::Property<std::shared_ptr<slint::Model<int>>> audio_eq_bands;
    slint::private_api::Property<bool> audio_eq_enabled;
    slint::private_api::Property<int> brightness;
    slint::private_api::Property<slint::SharedString> cfg_font_path;
    slint::private_api::Property<int> cfg_font_size;
    slint::private_api::Property<int> cfg_fps;
    slint::private_api::Property<int> cfg_glyph_range;
    slint::private_api::Property<slint::SharedString> cfg_language;
    slint::private_api::Property<slint::SharedString> cfg_log_level;
    slint::private_api::Property<int> cfg_log_limit;
    slint::private_api::Property<int> cfg_recent_limit;
    slint::private_api::Property<bool> cfg_rounding;
    slint::private_api::Property<float> cfg_scale;
    slint::private_api::Property<bool> cfg_shadow;
    slint::private_api::Property<bool> cfg_space_play_last;
    slint::private_api::Property<slint::SharedString> cfg_theme;
    slint::private_api::Property<bool> cfg_use_config;
    slint::private_api::Property<bool> cfg_watch_later;
    slint::private_api::Property<bool> cfg_window_save;
    slint::private_api::Property<bool> cfg_window_single;
    slint::private_api::Property<std::shared_ptr<slint::Model<ChapterRow>>> chapters;
    slint::private_api::Property<slint::SharedString> command_text;
    slint::private_api::Property<int> contrast;
    slint::private_api::Property<bool> controls_visible;
    slint::private_api::Property<std::shared_ptr<slint::Model<TrackRow>>> ctx_audio_tracks;
    slint::private_api::Property<slint::SharedString> ctx_page;
    slint::private_api::Property<bool> ctx_show;
    slint::private_api::Property<std::shared_ptr<slint::Model<TrackRow>>> ctx_sub_tracks;
    slint::private_api::Property<std::shared_ptr<slint::Model<TrackRow>>> ctx_video_tracks;
    slint::private_api::Property<float> ctx_x;
    slint::private_api::Property<float> ctx_y;
    slint::private_api::Property<slint::SharedString> current_aspect;
    slint::private_api::Property<float> current_time;
    slint::private_api::Property<float> def_volume;
    slint::private_api::Property<bool> deinterlace;
    slint::private_api::Property<float> duration;
    slint::private_api::Property<bool> fullscreen;
    slint::private_api::Property<bool> has_file;
    slint::private_api::Property<std::shared_ptr<slint::Model<InfoRow>>> info_rows;
    slint::private_api::Property<float> max_volume;
    slint::private_api::Property<slint::SharedString> media_title;
    slint::private_api::Property<bool> muted;
    slint::private_api::Property<std::shared_ptr<slint::Model<TrackRow>>> panel_audio_tracks;
    slint::private_api::Property<std::shared_ptr<slint::Model<TrackRow>>> panel_sub_tracks;
    slint::private_api::Property<bool> pinned;
    slint::private_api::Property<bool> playing;
    slint::private_api::Property<std::shared_ptr<slint::Model<PlaylistRow>>> playlist_items;
    slint::private_api::Property<std::shared_ptr<slint::Model<ChoiceRow>>> profiles;
    slint::private_api::Property<std::shared_ptr<slint::Model<ChoiceRow>>> recent_items;
    slint::private_api::Property<slint::SharedString> repeat_mode;
    slint::private_api::Property<int> saturation;
    slint::private_api::Property<slint::SharedString> settings_tab;
    slint::private_api::Property<bool> shuffle;
    slint::private_api::Property<int> sleep_min;
    slint::private_api::Property<slint::SharedString> sleep_remaining;
    slint::private_api::Property<float> speed;
    slint::private_api::Property<bool> sub_active;
    slint::private_api::Property<float> sub_delay;
    slint::private_api::Property<slint::SharedString> sub_page;
    slint::private_api::Property<int> sub_position;
    slint::private_api::Property<float> sub_scale;
    slint::private_api::Property<bool> sub_visible;
    slint::private_api::Property<slint::SharedString> toast;
    slint::private_api::Property<bool> url_show;
    slint::private_api::Property<slint::SharedString> url_text;
    slint::private_api::Property<float> vid_zoom;
    slint::private_api::Property<float> volume;
    PlayerState_822 (const class SharedGlobals *globals);
    private:
    auto init () -> void;
    const class SharedGlobals* globals;
    friend class SharedGlobals;
};

class Catalog_823 {
    public:
    slint::private_api::Property<std::shared_ptr<slint::Model<float>>> speeds;
    Catalog_823 (const class SharedGlobals *globals);
    private:
    auto init () -> void;
    const class SharedGlobals* globals;
    public:
    auto fn_fmt_time (float arg_0) const -> slint::SharedString;
    auto fn_pad (float arg_0) const -> slint::SharedString;
    friend class SharedGlobals;
};

class FluentPalette_825 {
    public:
    slint::private_api::Property<slint::cbindgen_private::ColorScheme> color_scheme;
    slint::private_api::Property<slint::Brush> selection_foreground;
    FluentPalette_825 (const class SharedGlobals *globals);
    private:
    auto init () -> void;
    const class SharedGlobals* globals;
    friend class SharedGlobals;
};

class SharedGlobals {
    public:
    std::optional<slint::Window> m_window;
    slint::cbindgen_private::ItemTreeWeak root_weak;
    auto window () const -> slint::Window&{
        auto self = const_cast<SharedGlobals *>(this);
        if (!self->m_window.has_value()) {
           auto &window = self->m_window.emplace(slint::private_api::WindowAdapterRc());
           window.window_handle().set_component(self->root_weak);
        }
        return *self->m_window;
    }
    std::shared_ptr<Theme_820> global_Theme_820 = std::make_shared<Theme_820>(this);
    std::shared_ptr<PlayerState_822> global_PlayerState_822 = std::make_shared<PlayerState_822>(this);
    std::shared_ptr<Catalog_823> global_Catalog_823 = std::make_shared<Catalog_823>(this);
    std::shared_ptr<FluentPalette_825> global_FluentPalette_825 = std::make_shared<FluentPalette_825>(this);
    SharedGlobals (){
        global_Theme_820->init();
        global_PlayerState_822->init();
        global_Catalog_823->init();
        global_FluentPalette_825->init();
    }
};

class Component_empty_435 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class AppWindow const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_435_chip_443_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_435_chip_443_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_435_chip_443_layoutinfo_v;
    slint::private_api::Property<float> empty_435_chip_443_preferred_height;
    slint::private_api::Property<float> empty_435_chip_443_preferred_width;
    slint::private_api::Property<slint::SharedVector<float>> empty_435_empty_436_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_435_empty_436_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_435_empty_436_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> empty_435_empty_438_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_435_empty_438_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_435_empty_438_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> empty_435_empty_440_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_435_empty_440_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_435_empty_440_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> empty_435_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_435_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_435_layoutinfo_v;
    slint::private_api::Property<float> empty_435_rectangle_442_width;
    slint::private_api::Property<float> empty_435_width;
    AppIcon_root_1 appicon_437;
    slint::cbindgen_private::Empty empty_435 = {};
    slint::cbindgen_private::Empty empty_436 = {};
    slint::cbindgen_private::Empty empty_438 = {};
    slint::cbindgen_private::SimpleText text_439 = {};
    slint::cbindgen_private::Empty empty_440 = {};
    slint::cbindgen_private::SimpleText text_441 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_442 = {};
    slint::cbindgen_private::SimpleText text_444 = {};
    slint::cbindgen_private::SimpleText text_445 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class AppWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class AppWindow const * parent) -> slint::ComponentHandle<Component_empty_435>;
    ~Component_empty_435 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_435>;
};

class Component_rectangle_447 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class AppWindow const> parent;
    slint::private_api::Property<slint::SharedVector<float>> rectangle_447_empty_449_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_447_empty_449_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_447_empty_449_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> rectangle_447_empty_450_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_447_empty_450_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_447_empty_450_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> rectangle_447_empty_454_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_447_empty_454_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_447_empty_454_layoutinfo_v;
    slint::private_api::Property<float> rectangle_447_empty_454_width;
    slint::private_api::Property<slint::SharedVector<float>> rectangle_447_empty_455_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_447_empty_455_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_447_empty_455_layoutinfo_v;
    slint::private_api::Property<float> rectangle_447_text_453_min_height;
    slint::private_api::Property<float> rectangle_447_text_453_min_width;
    slint::private_api::Property<float> rectangle_447_text_453_preferred_height;
    slint::private_api::Property<float> rectangle_447_text_453_preferred_width;
    slint::private_api::Property<float> rectangle_447_text_453_x;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_447_title_drag_452_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_447_title_drag_452_layoutinfo_v;
    slint::private_api::Property<float> rectangle_447_width;
    slint::private_api::ChangeTracker change_tracker0;
    CtrlButton_root_3 ctrlbutton_451;
    CtrlButton_root_3 ctrlbutton_456;
    CtrlButton_root_3 ctrlbutton_457;
    CtrlButton_root_3 ctrlbutton_458;
    slint::cbindgen_private::Rectangle rectangle_447 = {};
    slint::cbindgen_private::TouchArea toucharea_448 = {};
    slint::cbindgen_private::Empty empty_450 = {};
    slint::cbindgen_private::TouchArea title_drag_452 = {};
    slint::cbindgen_private::ComplexText text_453 = {};
    slint::cbindgen_private::Empty empty_454 = {};
    slint::cbindgen_private::Empty empty_455 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class AppWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class AppWindow const * parent) -> slint::ComponentHandle<Component_rectangle_447>;
    ~Component_rectangle_447 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_447>;
};

class Component_empty_463 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_460 const> parent;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_463_ab_pill_464_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_463_ab_pill_464_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> empty_463_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_463_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_463_layoutinfo_v;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_463_rectangle_468_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_463_rectangle_468_layoutinfo_v;
    slint::private_api::Property<float> empty_463_text_466_min_height;
    slint::private_api::Property<float> empty_463_text_466_min_width;
    slint::private_api::Property<float> empty_463_text_466_preferred_height;
    slint::private_api::Property<float> empty_463_text_466_preferred_width;
    slint::private_api::Property<float> empty_463_text_470_min_height;
    slint::private_api::Property<float> empty_463_text_470_min_width;
    slint::private_api::Property<float> empty_463_text_470_preferred_height;
    slint::private_api::Property<float> empty_463_text_470_preferred_width;
    CtrlButton_root_3 ctrlbutton_471;
    slint::cbindgen_private::Empty empty_463 = {};
    slint::cbindgen_private::BasicBorderRectangle ab_pill_464 = {};
    slint::cbindgen_private::TouchArea toucharea_465 = {};
    slint::cbindgen_private::SimpleText text_466 = {};
    slint::cbindgen_private::Opacity _opacity_467 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_468 = {};
    slint::cbindgen_private::TouchArea toucharea_469 = {};
    slint::cbindgen_private::SimpleText text_470 = {};
    slint::cbindgen_private::Empty rectangle_472 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_460 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_460 const * parent) -> slint::ComponentHandle<Component_empty_463>;
    ~Component_empty_463 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_463>;
};

class Component_rectangle_480 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_460 const> parent;
    slint::private_api::Property<float> rectangle_480_width;
    slint::private_api::Property<float> rectangle_480_x;
    slint::cbindgen_private::Rectangle rectangle_480 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_460 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_460 const * parent) -> slint::ComponentHandle<Component_rectangle_480>;
    ~Component_rectangle_480 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_480>;
};

class Component_rectangle_482 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_460 const> parent;
    slint::private_api::Property<ChapterRow> model_data;
    slint::private_api::Property<int> model_index;
    slint::private_api::Property<float> rectangle_482_x;
    slint::cbindgen_private::Rectangle rectangle_482 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_460 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_460 const * parent) -> slint::ComponentHandle<Component_rectangle_482>;
    ~Component_rectangle_482 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const ChapterRow &data) const -> void;
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_482>;
};

class Component_rectangle_460 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class AppWindow const> parent;
    slint::private_api::Property<slint::SharedVector<float>> rectangle_460_bottombox_462_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_460_bottombox_462_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_460_bottombox_462_layoutinfo_v;
    slint::private_api::Property<float> rectangle_460_bottombox_462_preferred_height;
    slint::private_api::Property<slint::SharedVector<float>> rectangle_460_empty_485_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_460_empty_485_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_460_empty_485_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> rectangle_460_empty_489_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_460_empty_489_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_460_empty_489_layoutinfo_v;
    slint::private_api::Property<float> rectangle_460_empty_490_frac;
    slint::private_api::Property<bool> rectangle_460_empty_490_hovered;
    slint::private_api::Property<float> rectangle_460_empty_490_maximum;
    slint::private_api::Callback<void(float)> rectangle_460_empty_490_set_volume;
    slint::private_api::Callback<void()> rectangle_460_empty_490_toggle_mute;
    slint::private_api::Property<float> rectangle_460_empty_490_width;
    slint::private_api::Property<slint::SharedVector<float>> rectangle_460_empty_493_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_460_empty_493_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_460_empty_493_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> rectangle_460_empty_503_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_460_empty_503_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_460_empty_503_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> rectangle_460_empty_510_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_460_empty_510_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_460_empty_510_layoutinfo_v;
    slint::private_api::Property<float> rectangle_460_rectangle_474_width;
    slint::private_api::Property<float> rectangle_460_rectangle_478_width;
    slint::private_api::Property<float> rectangle_460_rectangle_479_width;
    slint::private_api::Property<float> rectangle_460_rectangle_484_x;
    slint::private_api::Property<float> rectangle_460_rectangle_491_width;
    slint::private_api::Property<float> rectangle_460_rectangle_501_width;
    slint::private_api::Property<float> rectangle_460_rectangle_502_x;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_460_rectangle_512_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_460_rectangle_512_layoutinfo_v;
    slint::private_api::Property<float> rectangle_460_text_513_min_height;
    slint::private_api::Property<float> rectangle_460_text_513_min_width;
    slint::private_api::Property<float> rectangle_460_text_513_preferred_height;
    slint::private_api::Property<float> rectangle_460_text_513_preferred_width;
    slint::private_api::Property<float> rectangle_460_timetext_505_min_height;
    slint::private_api::Property<float> rectangle_460_timetext_505_min_width;
    slint::private_api::Property<float> rectangle_460_timetext_505_preferred_height;
    slint::private_api::Property<float> rectangle_460_timetext_505_preferred_width;
    slint::private_api::Property<float> rectangle_460_timetext_505_x;
    slint::private_api::Property<float> rectangle_460_timetext_505_y;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_460_toucharea_504_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_460_toucharea_504_layoutinfo_v;
    slint::private_api::Property<float> rectangle_460_track_476_height;
    slint::private_api::Property<float> rectangle_460_y;
    slint::private_api::ChangeTracker change_tracker0;
    CtrlButton_root_3 ctrlbutton_486;
    CtrlButton_root_3 ctrlbutton_487;
    CtrlButton_root_3 ctrlbutton_488;
    AppIcon_root_1 appicon_496;
    CtrlButton_root_3 ctrlbutton_507;
    CtrlButton_root_3 ctrlbutton_508;
    CtrlButton_root_3 ctrlbutton_509;
    CtrlButton_root_3 ctrlbutton_514;
    CtrlButton_root_3 ctrlbutton_515;
    CtrlButton_root_3 ctrlbutton_516;
    slint::cbindgen_private::Rectangle rectangle_460 = {};
    slint::cbindgen_private::TouchArea toucharea_461 = {};
    slint::cbindgen_private::Empty rectangle_474 = {};
    slint::cbindgen_private::TouchArea seek_475 = {};
    slint::cbindgen_private::BasicBorderRectangle track_476 = {};
    slint::cbindgen_private::Clip _visibility_477 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_478 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_479 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_484 = {};
    slint::cbindgen_private::Empty empty_485 = {};
    slint::cbindgen_private::Empty empty_489 = {};
    slint::cbindgen_private::Empty empty_490 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_491 = {};
    slint::cbindgen_private::Clip _clip_492 = {};
    slint::cbindgen_private::Empty rectangle_494 = {};
    slint::cbindgen_private::TouchArea mute_ta_495 = {};
    slint::cbindgen_private::Empty rectangle_497 = {};
    slint::cbindgen_private::Clip _clip_498 = {};
    slint::cbindgen_private::TouchArea track_ta_499 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_500 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_501 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_502 = {};
    slint::cbindgen_private::Empty empty_503 = {};
    slint::cbindgen_private::TouchArea toucharea_504 = {};
    slint::cbindgen_private::SimpleText timetext_505 = {};
    slint::cbindgen_private::Empty rectangle_506 = {};
    slint::cbindgen_private::Empty empty_510 = {};
    slint::cbindgen_private::TouchArea spdbtn_511 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_512 = {};
    slint::cbindgen_private::SimpleText text_513 = {};
    slint::private_api::Conditional<class Component_empty_463> repeater_0;
    slint::private_api::Conditional<class Component_rectangle_480> repeater_1;
    slint::private_api::Repeater<class Component_rectangle_482, ChapterRow> repeater_2;
    auto fn_empty_490_seek (float arg_0, float arg_1) const -> void;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class AppWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class AppWindow const * parent) -> slint::ComponentHandle<Component_rectangle_460>;
    ~Component_rectangle_460 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_460>;
};

class Component_empty_518 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class AppWindow const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_518_empty_521_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_518_empty_521_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_518_empty_521_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> empty_518_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_518_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_518_layoutinfo_v;
    slint::private_api::Property<float> empty_518_rectangle_519_width;
    slint::cbindgen_private::Empty empty_518 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_519 = {};
    slint::cbindgen_private::TouchArea toucharea_520 = {};
    slint::cbindgen_private::SimpleText text_522 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class AppWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class AppWindow const * parent) -> slint::ComponentHandle<Component_empty_518>;
    ~Component_empty_518 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_518>;
};

class Component_rectangle_524 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class AppWindow const> parent;
    slint::private_api::Property<slint::SharedVector<float>> rectangle_524_empty_526_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_524_empty_526_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_524_empty_526_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> rectangle_524_empty_528_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_524_empty_528_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_524_empty_528_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> rectangle_524_vol_osd_row_525_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_524_vol_osd_row_525_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_524_vol_osd_row_525_layoutinfo_v;
    slint::private_api::Property<float> rectangle_524_vol_osd_row_525_preferred_width;
    slint::private_api::Property<float> rectangle_524_width;
    slint::private_api::Property<float> rectangle_524_x;
    AppIcon_root_1 appicon_527;
    slint::cbindgen_private::BasicBorderRectangle rectangle_524 = {};
    slint::cbindgen_private::Empty empty_526 = {};
    slint::cbindgen_private::Empty empty_528 = {};
    slint::cbindgen_private::SimpleText text_529 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class AppWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class AppWindow const * parent) -> slint::ComponentHandle<Component_rectangle_524>;
    ~Component_rectangle_524 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_524>;
};

class Component_menuitem_537 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component__shadow_531 const> parent;
    slint::private_api::Property<float> model_data;
    slint::private_api::Property<int> model_index;
    MenuItem_root_8 menuitem_537;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_531 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component__shadow_531 const * parent) -> slint::ComponentHandle<Component_menuitem_537>;
    ~Component_menuitem_537 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const float &data) const -> void;
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_menuitem_537>;
};

class Component__shadow_531 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class AppWindow const> parent;
    slint::private_api::Property<float> _shadow_531_rectangle_532_y;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_531_speedlist_536_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_531_speedlist_536_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_531_speedlist_536_layoutinfo_v;
    slint::cbindgen_private::BoxShadow _shadow_531 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_532 = {};
    slint::cbindgen_private::Clip _clip_533 = {};
    slint::cbindgen_private::TouchArea toucharea_534 = {};
    slint::cbindgen_private::Rectangle rectangle_535 = {};
    slint::private_api::Repeater<class Component_menuitem_537, float> repeater_0;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class AppWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class AppWindow const * parent) -> slint::ComponentHandle<Component__shadow_531>;
    ~Component__shadow_531 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component__shadow_531>;
};

class Component_empty_548 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component__shadow_540 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_548_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_548_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_548_layoutinfo_v;
    CtrlButton_root_3 ctrlbutton_549;
    slint::cbindgen_private::Empty empty_548 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_540 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component__shadow_540 const * parent) -> slint::ComponentHandle<Component_empty_548>;
    ~Component_empty_548 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_548>;
};

class Component_empty_552 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component__shadow_540 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_552_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_552_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_552_layoutinfo_v;
    CtrlButton_root_3 ctrlbutton_553;
    slint::cbindgen_private::Empty empty_552 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_540 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component__shadow_540 const * parent) -> slint::ComponentHandle<Component_empty_552>;
    ~Component_empty_552 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_552>;
};

class Component_menuitem_563 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component__shadow_540 const> parent;
    slint::private_api::Property<TrackRow> model_data;
    slint::private_api::Property<int> model_index;
    MenuItem_root_8 menuitem_563;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_540 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component__shadow_540 const * parent) -> slint::ComponentHandle<Component_menuitem_563>;
    ~Component_menuitem_563 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const TrackRow &data) const -> void;
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_menuitem_563>;
};

class Component_text_569 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component__shadow_540 const> parent;
    slint::cbindgen_private::SimpleText text_569 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_540 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component__shadow_540 const * parent) -> slint::ComponentHandle<Component_text_569>;
    ~Component_text_569 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_569>;
};

class Component__shadow_540 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class AppWindow const> parent;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_540_aulist_562_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_540_aulist_562_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_540_aulist_562_layoutinfo_v;
    slint::private_api::Property<bool> _shadow_540_bar_566_active;
    slint::private_api::Property<float> _shadow_540_bar_566_frac;
    slint::private_api::Property<float> _shadow_540_bar_566_thumb_h;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_540_col_546_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_540_col_546_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_540_col_546_layoutinfo_v;
    slint::private_api::Property<float> _shadow_540_col_546_preferred_height;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_540_empty_547_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_540_empty_547_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_540_empty_547_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_540_empty_555_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_540_empty_555_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_540_empty_555_layoutinfo_v;
    slint::private_api::Property<float> _shadow_540_fl_559_height;
    slint::private_api::Property<float> _shadow_540_fl_559_horizontal_stretch;
    slint::private_api::Property<float> _shadow_540_fl_559_max_height;
    slint::private_api::Property<float> _shadow_540_fl_559_max_width;
    slint::private_api::Property<float> _shadow_540_fl_559_min_height;
    slint::private_api::Property<float> _shadow_540_fl_559_min_width;
    slint::private_api::Property<float> _shadow_540_fl_559_preferred_height;
    slint::private_api::Property<float> _shadow_540_fl_559_preferred_width;
    slint::private_api::Property<float> _shadow_540_fl_559_vertical_stretch;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_540_inner_561_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_540_inner_561_layoutinfo_v;
    slint::private_api::Property<float> _shadow_540_inner_561_preferred_height;
    slint::private_api::Property<float> _shadow_540_inner_561_x;
    slint::private_api::Property<std::int64_t> _shadow_540_optimized_action_timer_541_interval;
    slint::private_api::Property<bool> _shadow_540_optimized_action_timer_541_running;
    slint::private_api::Callback<void()> _shadow_540_optimized_action_timer_541_triggered;
    slint::private_api::Callback<void()> _shadow_540_rectangle_542_action;
    slint::private_api::Property<bool> _shadow_540_rectangle_542_action_done;
    slint::private_api::Callback<void()> _shadow_540_rectangle_542_back;
    slint::private_api::Callback<void()> _shadow_540_rectangle_542_close;
    slint::private_api::Property<slint::SharedString> _shadow_540_rectangle_542_heading;
    slint::private_api::Property<float> _shadow_540_rectangle_542_y;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_540_rectangle_557_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_540_rectangle_557_layoutinfo_v;
    slint::private_api::Property<float> _shadow_540_thumb_567_width;
    slint::private_api::Property<float> _shadow_540_thumb_567_y;
    slint::private_api::ChangeTracker change_tracker0;
    slint::private_api::ChangeTracker change_tracker1;
    CtrlButton_root_3 ctrlbutton_556;
    MenuSep_root_27 menusep_571;
    Stepper_root_28 stepper_572;
    MenuSep_root_27 menusep_573;
    MenuItem_root_8 menuitem_574;
    slint::cbindgen_private::BoxShadow _shadow_540 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_542 = {};
    slint::cbindgen_private::Clip _clip_543 = {};
    slint::cbindgen_private::TouchArea toucharea_544 = {};
    slint::cbindgen_private::Rectangle rectangle_545 = {};
    slint::cbindgen_private::Empty empty_547 = {};
    slint::cbindgen_private::SimpleText text_551 = {};
    slint::cbindgen_private::Empty empty_555 = {};
    slint::cbindgen_private::Empty rectangle_557 = {};
    slint::cbindgen_private::Clip _clip_558 = {};
    slint::cbindgen_private::Flickable fl_559 = {};
    slint::cbindgen_private::Empty fl_viewport_560 = {};
    slint::cbindgen_private::Empty inner_561 = {};
    slint::cbindgen_private::Empty aulist_562 = {};
    slint::cbindgen_private::Clip bar_visibility_565 = {};
    slint::cbindgen_private::Empty bar_566 = {};
    slint::cbindgen_private::BasicBorderRectangle thumb_567 = {};
    slint::cbindgen_private::TouchArea tta_568 = {};
    slint::private_api::Conditional<class Component_empty_548> repeater_0;
    slint::private_api::Conditional<class Component_empty_552> repeater_1;
    slint::private_api::Repeater<class Component_menuitem_563, TrackRow> repeater_2;
    slint::private_api::Conditional<class Component_text_569> repeater_3;
    slint::Timer timer0;
    auto update_timers () -> void;
    auto fn_rectangle_557_scroll_to (float arg_0) const -> void;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class AppWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class AppWindow const * parent) -> slint::ComponentHandle<Component__shadow_540>;
    ~Component__shadow_540 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component__shadow_540>;
};

class Component_empty_584 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component__shadow_576 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_584_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_584_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_584_layoutinfo_v;
    CtrlButton_root_3 ctrlbutton_585;
    slint::cbindgen_private::Empty empty_584 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_576 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component__shadow_576 const * parent) -> slint::ComponentHandle<Component_empty_584>;
    ~Component_empty_584 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_584>;
};

class Component_empty_588 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component__shadow_576 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_588_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_588_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_588_layoutinfo_v;
    CtrlButton_root_3 ctrlbutton_589;
    slint::cbindgen_private::Empty empty_588 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_576 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component__shadow_576 const * parent) -> slint::ComponentHandle<Component_empty_588>;
    ~Component_empty_588 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_588>;
};

class Component_stepper_605 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component__shadow_576 const> parent;
    slint::private_api::Property<int> model_data;
    slint::private_api::Property<int> model_index;
    Stepper_root_28 stepper_605;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_576 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component__shadow_576 const * parent) -> slint::ComponentHandle<Component_stepper_605>;
    ~Component_stepper_605 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const int &data) const -> void;
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_stepper_605>;
};

class Component__shadow_576 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class AppWindow const> parent;
    slint::private_api::Property<bool> _shadow_576_bar_608_active;
    slint::private_api::Property<float> _shadow_576_bar_608_frac;
    slint::private_api::Property<float> _shadow_576_bar_608_thumb_h;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_576_col_582_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_576_col_582_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_576_col_582_layoutinfo_v;
    slint::private_api::Property<float> _shadow_576_col_582_preferred_height;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_576_empty_583_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_576_empty_583_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_576_empty_583_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_576_empty_591_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_576_empty_591_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_576_empty_591_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_576_empty_594_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_576_empty_594_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_576_empty_594_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_576_empty_604_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_576_empty_604_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_576_empty_604_layoutinfo_v;
    slint::private_api::Property<float> _shadow_576_fl_601_height;
    slint::private_api::Property<float> _shadow_576_fl_601_horizontal_stretch;
    slint::private_api::Property<float> _shadow_576_fl_601_max_height;
    slint::private_api::Property<float> _shadow_576_fl_601_max_width;
    slint::private_api::Property<float> _shadow_576_fl_601_min_height;
    slint::private_api::Property<float> _shadow_576_fl_601_min_width;
    slint::private_api::Property<float> _shadow_576_fl_601_preferred_height;
    slint::private_api::Property<float> _shadow_576_fl_601_preferred_width;
    slint::private_api::Property<float> _shadow_576_fl_601_vertical_stretch;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_576_inner_603_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_576_inner_603_layoutinfo_v;
    slint::private_api::Property<float> _shadow_576_inner_603_preferred_height;
    slint::private_api::Property<float> _shadow_576_inner_603_x;
    slint::private_api::Property<std::int64_t> _shadow_576_optimized_action_timer_577_interval;
    slint::private_api::Property<bool> _shadow_576_optimized_action_timer_577_running;
    slint::private_api::Callback<void()> _shadow_576_optimized_action_timer_577_triggered;
    slint::private_api::Callback<void()> _shadow_576_rectangle_578_action;
    slint::private_api::Property<bool> _shadow_576_rectangle_578_action_done;
    slint::private_api::Callback<void()> _shadow_576_rectangle_578_back;
    slint::private_api::Callback<void()> _shadow_576_rectangle_578_close;
    slint::private_api::Property<float> _shadow_576_rectangle_578_y;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_576_rectangle_599_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_576_rectangle_599_layoutinfo_v;
    slint::private_api::Property<float> _shadow_576_thumb_609_width;
    slint::private_api::Property<float> _shadow_576_thumb_609_y;
    slint::private_api::ChangeTracker change_tracker0;
    slint::private_api::ChangeTracker change_tracker1;
    CtrlButton_root_3 ctrlbutton_592;
    MenuItem_root_8 menuitem_593;
    MenuItem_root_8 menuitem_595;
    MenuItem_root_8 menuitem_596;
    MenuItem_root_8 menuitem_597;
    MenuSep_root_27 menusep_598;
    slint::cbindgen_private::BoxShadow _shadow_576 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_578 = {};
    slint::cbindgen_private::Clip _clip_579 = {};
    slint::cbindgen_private::TouchArea toucharea_580 = {};
    slint::cbindgen_private::Rectangle rectangle_581 = {};
    slint::cbindgen_private::Empty empty_583 = {};
    slint::cbindgen_private::SimpleText text_587 = {};
    slint::cbindgen_private::Empty empty_591 = {};
    slint::cbindgen_private::Empty empty_594 = {};
    slint::cbindgen_private::Empty rectangle_599 = {};
    slint::cbindgen_private::Clip _clip_600 = {};
    slint::cbindgen_private::Flickable fl_601 = {};
    slint::cbindgen_private::Empty fl_viewport_602 = {};
    slint::cbindgen_private::Empty inner_603 = {};
    slint::cbindgen_private::Empty empty_604 = {};
    slint::cbindgen_private::Clip bar_visibility_607 = {};
    slint::cbindgen_private::Empty bar_608 = {};
    slint::cbindgen_private::BasicBorderRectangle thumb_609 = {};
    slint::cbindgen_private::TouchArea tta_610 = {};
    slint::private_api::Conditional<class Component_empty_584> repeater_0;
    slint::private_api::Conditional<class Component_empty_588> repeater_1;
    slint::private_api::Repeater<class Component_stepper_605, int> repeater_2;
    slint::Timer timer0;
    auto update_timers () -> void;
    auto fn_rectangle_599_scroll_to (float arg_0) const -> void;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class AppWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class AppWindow const * parent) -> slint::ComponentHandle<Component__shadow_576>;
    ~Component__shadow_576 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component__shadow_576>;
};

class Component_empty_620 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component__shadow_612 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_620_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_620_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_620_layoutinfo_v;
    CtrlButton_root_3 ctrlbutton_621;
    slint::cbindgen_private::Empty empty_620 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_612 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component__shadow_612 const * parent) -> slint::ComponentHandle<Component_empty_620>;
    ~Component_empty_620 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_620>;
};

class Component_empty_624 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component__shadow_612 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_624_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_624_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_624_layoutinfo_v;
    CtrlButton_root_3 ctrlbutton_625;
    slint::cbindgen_private::Empty empty_624 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_612 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component__shadow_612 const * parent) -> slint::ComponentHandle<Component_empty_624>;
    ~Component_empty_624 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_624>;
};

class Component_menuitem_635 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component__shadow_612 const> parent;
    slint::private_api::Property<TrackRow> model_data;
    slint::private_api::Property<int> model_index;
    MenuItem_root_8 menuitem_635;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_612 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component__shadow_612 const * parent) -> slint::ComponentHandle<Component_menuitem_635>;
    ~Component_menuitem_635 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const TrackRow &data) const -> void;
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_menuitem_635>;
};

class Component__shadow_612 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class AppWindow const> parent;
    slint::private_api::Property<bool> _shadow_612_bar_649_active;
    slint::private_api::Property<float> _shadow_612_bar_649_frac;
    slint::private_api::Property<float> _shadow_612_bar_649_thumb_h;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_612_col_618_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_612_col_618_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_612_col_618_layoutinfo_v;
    slint::private_api::Property<float> _shadow_612_col_618_preferred_height;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_612_empty_619_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_612_empty_619_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_612_empty_619_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_612_empty_627_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_612_empty_627_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_612_empty_627_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_612_empty_634_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_612_empty_634_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_612_empty_634_layoutinfo_v;
    slint::private_api::Property<float> _shadow_612_fl_631_height;
    slint::private_api::Property<float> _shadow_612_fl_631_horizontal_stretch;
    slint::private_api::Property<float> _shadow_612_fl_631_max_height;
    slint::private_api::Property<float> _shadow_612_fl_631_max_width;
    slint::private_api::Property<float> _shadow_612_fl_631_min_height;
    slint::private_api::Property<float> _shadow_612_fl_631_min_width;
    slint::private_api::Property<float> _shadow_612_fl_631_preferred_height;
    slint::private_api::Property<float> _shadow_612_fl_631_preferred_width;
    slint::private_api::Property<float> _shadow_612_fl_631_vertical_stretch;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_612_inner_633_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_612_inner_633_layoutinfo_v;
    slint::private_api::Property<float> _shadow_612_inner_633_preferred_height;
    slint::private_api::Property<float> _shadow_612_inner_633_x;
    slint::private_api::Property<std::int64_t> _shadow_612_optimized_action_timer_613_interval;
    slint::private_api::Property<bool> _shadow_612_optimized_action_timer_613_running;
    slint::private_api::Callback<void()> _shadow_612_optimized_action_timer_613_triggered;
    slint::private_api::Callback<void()> _shadow_612_rectangle_614_action;
    slint::private_api::Property<bool> _shadow_612_rectangle_614_action_done;
    slint::private_api::Callback<void()> _shadow_612_rectangle_614_back;
    slint::private_api::Callback<void()> _shadow_612_rectangle_614_close;
    slint::private_api::Property<float> _shadow_612_rectangle_614_y;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_612_rectangle_629_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_612_rectangle_629_layoutinfo_v;
    slint::private_api::Property<float> _shadow_612_thumb_650_width;
    slint::private_api::Property<float> _shadow_612_thumb_650_y;
    slint::private_api::ChangeTracker change_tracker0;
    slint::private_api::ChangeTracker change_tracker1;
    CtrlButton_root_3 ctrlbutton_628;
    MenuSep_root_27 menusep_637;
    MenuItem_root_8 menuitem_638;
    MenuItem_root_8 menuitem_639;
    MenuItem_root_8 menuitem_640;
    Stepper_root_28 stepper_641;
    Stepper_root_28 stepper_642;
    Stepper_root_28 stepper_643;
    Stepper_root_28 stepper_644;
    MenuItem_root_8 menuitem_645;
    MenuItem_root_8 menuitem_646;
    MenuItem_root_8 menuitem_647;
    slint::cbindgen_private::BoxShadow _shadow_612 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_614 = {};
    slint::cbindgen_private::Clip _clip_615 = {};
    slint::cbindgen_private::TouchArea toucharea_616 = {};
    slint::cbindgen_private::Rectangle rectangle_617 = {};
    slint::cbindgen_private::Empty empty_619 = {};
    slint::cbindgen_private::SimpleText text_623 = {};
    slint::cbindgen_private::Empty empty_627 = {};
    slint::cbindgen_private::Empty rectangle_629 = {};
    slint::cbindgen_private::Clip _clip_630 = {};
    slint::cbindgen_private::Flickable fl_631 = {};
    slint::cbindgen_private::Empty fl_viewport_632 = {};
    slint::cbindgen_private::Empty inner_633 = {};
    slint::cbindgen_private::Empty empty_634 = {};
    slint::cbindgen_private::Clip bar_visibility_648 = {};
    slint::cbindgen_private::Empty bar_649 = {};
    slint::cbindgen_private::BasicBorderRectangle thumb_650 = {};
    slint::cbindgen_private::TouchArea tta_651 = {};
    slint::private_api::Conditional<class Component_empty_620> repeater_0;
    slint::private_api::Conditional<class Component_empty_624> repeater_1;
    slint::private_api::Repeater<class Component_menuitem_635, TrackRow> repeater_2;
    slint::Timer timer0;
    auto update_timers () -> void;
    auto fn_rectangle_629_scroll_to (float arg_0) const -> void;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class AppWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class AppWindow const * parent) -> slint::ComponentHandle<Component__shadow_612>;
    ~Component__shadow_612 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component__shadow_612>;
};

class Component_empty_661 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component__shadow_653 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_661_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_661_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_661_layoutinfo_v;
    CtrlButton_root_3 ctrlbutton_662;
    slint::cbindgen_private::Empty empty_661 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_653 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component__shadow_653 const * parent) -> slint::ComponentHandle<Component_empty_661>;
    ~Component_empty_661 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_661>;
};

class Component_empty_665 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component__shadow_653 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_665_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_665_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_665_layoutinfo_v;
    CtrlButton_root_3 ctrlbutton_666;
    slint::cbindgen_private::Empty empty_665 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_653 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component__shadow_653 const * parent) -> slint::ComponentHandle<Component_empty_665>;
    ~Component_empty_665 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_665>;
};

class Component__shadow_653 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class AppWindow const> parent;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_653_col_659_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_653_col_659_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_653_col_659_layoutinfo_v;
    slint::private_api::Property<float> _shadow_653_col_659_preferred_height;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_653_empty_660_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_653_empty_660_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_653_empty_660_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_653_empty_668_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_653_empty_668_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_653_empty_668_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_653_empty_670_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_653_empty_670_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_653_empty_670_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_653_empty_673_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_653_empty_673_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_653_empty_673_layoutinfo_v;
    slint::private_api::Property<std::int64_t> _shadow_653_optimized_action_timer_654_interval;
    slint::private_api::Property<bool> _shadow_653_optimized_action_timer_654_running;
    slint::private_api::Callback<void()> _shadow_653_optimized_action_timer_654_triggered;
    slint::private_api::Callback<void()> _shadow_653_rectangle_655_action;
    slint::private_api::Property<bool> _shadow_653_rectangle_655_action_done;
    slint::private_api::Callback<void()> _shadow_653_rectangle_655_back;
    slint::private_api::Callback<void()> _shadow_653_rectangle_655_close;
    slint::private_api::Property<float> _shadow_653_rectangle_655_y;
    slint::private_api::ChangeTracker change_tracker0;
    slint::private_api::ChangeTracker change_tracker1;
    CtrlButton_root_3 ctrlbutton_669;
    MenuItem_root_8 menuitem_675;
    slint::cbindgen_private::BoxShadow _shadow_653 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_655 = {};
    slint::cbindgen_private::Clip _clip_656 = {};
    slint::cbindgen_private::TouchArea toucharea_657 = {};
    slint::cbindgen_private::Rectangle rectangle_658 = {};
    slint::cbindgen_private::Empty empty_660 = {};
    slint::cbindgen_private::SimpleText text_664 = {};
    slint::cbindgen_private::Empty empty_668 = {};
    slint::cbindgen_private::Empty empty_670 = {};
    slint::cbindgen_private::SimpleText text_671 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_672 = {};
    slint::cbindgen_private::TextInput cmd_674 = {};
    slint::cbindgen_private::ComplexText text_676 = {};
    slint::private_api::Conditional<class Component_empty_661> repeater_0;
    slint::private_api::Conditional<class Component_empty_665> repeater_1;
    slint::Timer timer0;
    auto update_timers () -> void;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class AppWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class AppWindow const * parent) -> slint::ComponentHandle<Component__shadow_653>;
    ~Component__shadow_653 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component__shadow_653>;
};

class Component_empty_686 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component__shadow_678 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_686_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_686_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_686_layoutinfo_v;
    CtrlButton_root_3 ctrlbutton_687;
    slint::cbindgen_private::Empty empty_686 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_678 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component__shadow_678 const * parent) -> slint::ComponentHandle<Component_empty_686>;
    ~Component_empty_686 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_686>;
};

class Component_empty_690 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component__shadow_678 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_690_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_690_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_690_layoutinfo_v;
    CtrlButton_root_3 ctrlbutton_691;
    slint::cbindgen_private::Empty empty_690 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_678 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component__shadow_678 const * parent) -> slint::ComponentHandle<Component_empty_690>;
    ~Component_empty_690 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_690>;
};

class Component_appicon_706 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_701 const> parent;
    AppIcon_root_1 appicon_706;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_701 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_701 const * parent) -> slint::ComponentHandle<Component_appicon_706>;
    ~Component_appicon_706 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_appicon_706>;
};

class Component_text_708 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_701 const> parent;
    slint::cbindgen_private::SimpleText text_708 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_701 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_701 const * parent) -> slint::ComponentHandle<Component_text_708>;
    ~Component_text_708 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_708>;
};

class Component_rectangle_701 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component__shadow_678 const> parent;
    slint::private_api::Property<PlaylistRow> model_data;
    slint::private_api::Property<int> model_index;
    slint::private_api::Property<slint::SharedVector<float>> rectangle_701_empty_704_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_701_empty_704_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_701_empty_704_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> rectangle_701_empty_711_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_701_empty_711_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_701_empty_711_layoutinfo_v;
    slint::private_api::Property<float> rectangle_701_width;
    slint::private_api::Property<float> rectangle_701_y;
    RowHover_root_7 rowhover_703;
    AppIcon_root_1 appicon_714;
    slint::cbindgen_private::Empty rectangle_701 = {};
    slint::cbindgen_private::TouchArea pa_702 = {};
    slint::cbindgen_private::Empty rectangle_705 = {};
    slint::cbindgen_private::ComplexText text_710 = {};
    slint::cbindgen_private::Empty empty_711 = {};
    slint::cbindgen_private::TouchArea rmta_712 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_713 = {};
    slint::private_api::Conditional<class Component_appicon_706> repeater_0;
    slint::private_api::Conditional<class Component_text_708> repeater_1;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_678 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component__shadow_678 const * parent) -> slint::ComponentHandle<Component_rectangle_701>;
    ~Component_rectangle_701 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const PlaylistRow &data) const -> void;
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_701>;
};

class Component_text_716 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component__shadow_678 const> parent;
    slint::cbindgen_private::SimpleText text_716 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_678 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component__shadow_678 const * parent) -> slint::ComponentHandle<Component_text_716>;
    ~Component_text_716 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_716>;
};

class Component__shadow_678 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class AppWindow const> parent;
    slint::private_api::Property<bool> _shadow_678_bar_719_active;
    slint::private_api::Property<float> _shadow_678_bar_719_frac;
    slint::private_api::Property<float> _shadow_678_bar_719_thumb_h;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_678_col_684_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_678_col_684_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_678_col_684_layoutinfo_v;
    slint::private_api::Property<float> _shadow_678_col_684_preferred_height;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_678_empty_685_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_678_empty_685_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_678_empty_685_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_678_empty_693_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_678_empty_693_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_678_empty_693_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_678_empty_723_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_678_empty_723_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_678_empty_723_layoutinfo_v;
    slint::private_api::Property<float> _shadow_678_fl_697_height;
    slint::private_api::Property<float> _shadow_678_fl_697_horizontal_stretch;
    slint::private_api::Property<float> _shadow_678_fl_697_max_height;
    slint::private_api::Property<float> _shadow_678_fl_697_max_width;
    slint::private_api::Property<float> _shadow_678_fl_697_min_height;
    slint::private_api::Property<float> _shadow_678_fl_697_min_width;
    slint::private_api::Property<float> _shadow_678_fl_697_preferred_height;
    slint::private_api::Property<float> _shadow_678_fl_697_preferred_width;
    slint::private_api::Property<float> _shadow_678_fl_697_vertical_stretch;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_678_inner_699_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_678_inner_699_layoutinfo_v;
    slint::private_api::Property<float> _shadow_678_inner_699_preferred_height;
    slint::private_api::Property<float> _shadow_678_inner_699_x;
    slint::private_api::Property<std::int64_t> _shadow_678_optimized_action_timer_679_interval;
    slint::private_api::Property<bool> _shadow_678_optimized_action_timer_679_running;
    slint::private_api::Callback<void()> _shadow_678_optimized_action_timer_679_triggered;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_678_pllist_700_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_678_pllist_700_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_678_pllist_700_layoutinfo_v;
    slint::private_api::Property<float> _shadow_678_pllist_700_width;
    slint::private_api::Callback<void()> _shadow_678_rectangle_680_action;
    slint::private_api::Property<bool> _shadow_678_rectangle_680_action_done;
    slint::private_api::Callback<void()> _shadow_678_rectangle_680_back;
    slint::private_api::Callback<void()> _shadow_678_rectangle_680_close;
    slint::private_api::Property<slint::SharedString> _shadow_678_rectangle_680_heading;
    slint::private_api::Property<float> _shadow_678_rectangle_680_y;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_678_rectangle_695_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_678_rectangle_695_layoutinfo_v;
    slint::private_api::Property<float> _shadow_678_thumb_720_width;
    slint::private_api::Property<float> _shadow_678_thumb_720_y;
    slint::private_api::ChangeTracker change_tracker0;
    slint::private_api::ChangeTracker change_tracker1;
    CtrlButton_root_3 ctrlbutton_694;
    MenuSep_root_27 menusep_722;
    CtrlButton_root_3 ctrlbutton_724;
    CtrlButton_root_3 ctrlbutton_725;
    CtrlButton_root_3 ctrlbutton_727;
    CtrlButton_root_3 ctrlbutton_728;
    CtrlButton_root_3 ctrlbutton_729;
    slint::cbindgen_private::BoxShadow _shadow_678 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_680 = {};
    slint::cbindgen_private::Clip _clip_681 = {};
    slint::cbindgen_private::TouchArea toucharea_682 = {};
    slint::cbindgen_private::Rectangle rectangle_683 = {};
    slint::cbindgen_private::Empty empty_685 = {};
    slint::cbindgen_private::SimpleText text_689 = {};
    slint::cbindgen_private::Empty empty_693 = {};
    slint::cbindgen_private::Empty rectangle_695 = {};
    slint::cbindgen_private::Clip _clip_696 = {};
    slint::cbindgen_private::Flickable fl_697 = {};
    slint::cbindgen_private::Empty fl_viewport_698 = {};
    slint::cbindgen_private::Empty inner_699 = {};
    slint::cbindgen_private::Empty pllist_700 = {};
    slint::cbindgen_private::Clip bar_visibility_718 = {};
    slint::cbindgen_private::Empty bar_719 = {};
    slint::cbindgen_private::BasicBorderRectangle thumb_720 = {};
    slint::cbindgen_private::TouchArea tta_721 = {};
    slint::cbindgen_private::Empty empty_723 = {};
    slint::cbindgen_private::Empty rectangle_726 = {};
    slint::private_api::Conditional<class Component_empty_686> repeater_0;
    slint::private_api::Conditional<class Component_empty_690> repeater_1;
    slint::private_api::Repeater<class Component_rectangle_701, PlaylistRow> repeater_2;
    slint::private_api::Conditional<class Component_text_716> repeater_3;
    slint::Timer timer0;
    auto update_timers () -> void;
    auto fn_rectangle_695_scroll_to (float arg_0) const -> void;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class AppWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class AppWindow const * parent) -> slint::ComponentHandle<Component__shadow_678>;
    ~Component__shadow_678 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component__shadow_678>;
};

class Component_empty_739 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component__shadow_731 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_739_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_739_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_739_layoutinfo_v;
    CtrlButton_root_3 ctrlbutton_740;
    slint::cbindgen_private::Empty empty_739 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_731 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component__shadow_731 const * parent) -> slint::ComponentHandle<Component_empty_739>;
    ~Component_empty_739 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_739>;
};

class Component_empty_743 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component__shadow_731 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_743_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_743_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_743_layoutinfo_v;
    CtrlButton_root_3 ctrlbutton_744;
    slint::cbindgen_private::Empty empty_743 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_731 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component__shadow_731 const * parent) -> slint::ComponentHandle<Component_empty_743>;
    ~Component_empty_743 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_743>;
};

class Component_empty_749 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component__shadow_731 const> parent;
    slint::private_api::Property<InfoRow> model_data;
    slint::private_api::Property<int> model_index;
    slint::private_api::Property<slint::SharedVector<float>> empty_749_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_749_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_749_layoutinfo_v;
    slint::private_api::Property<float> empty_749_y;
    slint::cbindgen_private::Empty empty_749 = {};
    slint::cbindgen_private::SimpleText text_750 = {};
    slint::cbindgen_private::Empty rectangle_751 = {};
    slint::cbindgen_private::ComplexText text_752 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_731 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component__shadow_731 const * parent) -> slint::ComponentHandle<Component_empty_749>;
    ~Component_empty_749 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const InfoRow &data) const -> void;
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_749>;
};

class Component__shadow_731 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class AppWindow const> parent;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_731_col_737_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_731_col_737_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_731_col_737_layoutinfo_v;
    slint::private_api::Property<float> _shadow_731_col_737_preferred_height;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_731_empty_738_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_731_empty_738_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_731_empty_738_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_731_empty_746_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_731_empty_746_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_731_empty_746_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_731_empty_748_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_731_empty_748_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_731_empty_748_layoutinfo_v;
    slint::private_api::Property<std::int64_t> _shadow_731_optimized_action_timer_732_interval;
    slint::private_api::Property<bool> _shadow_731_optimized_action_timer_732_running;
    slint::private_api::Callback<void()> _shadow_731_optimized_action_timer_732_triggered;
    slint::private_api::Callback<void()> _shadow_731_rectangle_733_action;
    slint::private_api::Property<bool> _shadow_731_rectangle_733_action_done;
    slint::private_api::Callback<void()> _shadow_731_rectangle_733_back;
    slint::private_api::Callback<void()> _shadow_731_rectangle_733_close;
    slint::private_api::Property<slint::SharedString> _shadow_731_rectangle_733_heading;
    slint::private_api::Property<float> _shadow_731_rectangle_733_y;
    slint::private_api::ChangeTracker change_tracker0;
    slint::private_api::ChangeTracker change_tracker1;
    CtrlButton_root_3 ctrlbutton_747;
    slint::cbindgen_private::BoxShadow _shadow_731 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_733 = {};
    slint::cbindgen_private::Clip _clip_734 = {};
    slint::cbindgen_private::TouchArea toucharea_735 = {};
    slint::cbindgen_private::Rectangle rectangle_736 = {};
    slint::cbindgen_private::Empty empty_738 = {};
    slint::cbindgen_private::SimpleText text_742 = {};
    slint::cbindgen_private::Empty empty_746 = {};
    slint::cbindgen_private::Empty empty_748 = {};
    slint::private_api::Conditional<class Component_empty_739> repeater_0;
    slint::private_api::Conditional<class Component_empty_743> repeater_1;
    slint::private_api::Repeater<class Component_empty_749, InfoRow> repeater_2;
    slint::Timer timer0;
    auto update_timers () -> void;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class AppWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class AppWindow const * parent) -> slint::ComponentHandle<Component__shadow_731>;
    ~Component__shadow_731 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component__shadow_731>;
};

class Component_empty_763 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component__shadow_755 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_763_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_763_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_763_layoutinfo_v;
    CtrlButton_root_3 ctrlbutton_764;
    slint::cbindgen_private::Empty empty_763 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_755 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component__shadow_755 const * parent) -> slint::ComponentHandle<Component_empty_763>;
    ~Component_empty_763 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_763>;
};

class Component_empty_767 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component__shadow_755 const> parent;
    slint::private_api::Property<slint::SharedVector<float>> empty_767_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_767_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> empty_767_layoutinfo_v;
    CtrlButton_root_3 ctrlbutton_768;
    slint::cbindgen_private::Empty empty_767 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_755 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component__shadow_755 const * parent) -> slint::ComponentHandle<Component_empty_767>;
    ~Component_empty_767 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_empty_767>;
};

class Component_menuitem_779 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component__shadow_755 const> parent;
    slint::private_api::Property<TrackRow> model_data;
    slint::private_api::Property<int> model_index;
    MenuItem_root_8 menuitem_779;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_755 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component__shadow_755 const * parent) -> slint::ComponentHandle<Component_menuitem_779>;
    ~Component_menuitem_779 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const TrackRow &data) const -> void;
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_menuitem_779>;
};

class Component_menuitem_781 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component__shadow_755 const> parent;
    MenuItem_root_8 menuitem_781;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component__shadow_755 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component__shadow_755 const * parent) -> slint::ComponentHandle<Component_menuitem_781>;
    ~Component_menuitem_781 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_menuitem_781>;
};

class Component__shadow_755 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class AppWindow const> parent;
    slint::private_api::Property<bool> _shadow_755_bar_784_active;
    slint::private_api::Property<float> _shadow_755_bar_784_frac;
    slint::private_api::Property<float> _shadow_755_bar_784_thumb_h;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_755_col_761_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_755_col_761_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_755_col_761_layoutinfo_v;
    slint::private_api::Property<float> _shadow_755_col_761_preferred_height;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_755_empty_762_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_755_empty_762_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_755_empty_762_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_755_empty_770_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_755_empty_770_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_755_empty_770_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_755_empty_777_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_755_empty_777_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_755_empty_777_layoutinfo_v;
    slint::private_api::Property<float> _shadow_755_fl_774_height;
    slint::private_api::Property<float> _shadow_755_fl_774_horizontal_stretch;
    slint::private_api::Property<float> _shadow_755_fl_774_max_height;
    slint::private_api::Property<float> _shadow_755_fl_774_max_width;
    slint::private_api::Property<float> _shadow_755_fl_774_min_height;
    slint::private_api::Property<float> _shadow_755_fl_774_min_width;
    slint::private_api::Property<float> _shadow_755_fl_774_preferred_height;
    slint::private_api::Property<float> _shadow_755_fl_774_preferred_width;
    slint::private_api::Property<float> _shadow_755_fl_774_vertical_stretch;
    slint::private_api::Property<slint::SharedVector<float>> _shadow_755_inner_776_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_755_inner_776_layoutinfo_v;
    slint::private_api::Property<float> _shadow_755_inner_776_preferred_height;
    slint::private_api::Property<float> _shadow_755_inner_776_x;
    slint::private_api::Property<std::int64_t> _shadow_755_optimized_action_timer_756_interval;
    slint::private_api::Property<bool> _shadow_755_optimized_action_timer_756_running;
    slint::private_api::Callback<void()> _shadow_755_optimized_action_timer_756_triggered;
    slint::private_api::Callback<void()> _shadow_755_rectangle_757_action;
    slint::private_api::Property<bool> _shadow_755_rectangle_757_action_done;
    slint::private_api::Callback<void()> _shadow_755_rectangle_757_back;
    slint::private_api::Callback<void()> _shadow_755_rectangle_757_close;
    slint::private_api::Callback<void(slint::SharedString)> _shadow_755_rectangle_757_command;
    slint::private_api::Callback<void()> _shadow_755_rectangle_757_load_external_sub;
    slint::private_api::Callback<void(int)> _shadow_755_rectangle_757_select_sub;
    slint::private_api::Callback<void(float)> _shadow_755_rectangle_757_set_sub_delay;
    slint::private_api::Property<float> _shadow_755_rectangle_757_y;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_755_rectangle_772_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> _shadow_755_rectangle_772_layoutinfo_v;
    slint::private_api::Property<float> _shadow_755_thumb_785_width;
    slint::private_api::Property<float> _shadow_755_thumb_785_y;
    slint::private_api::ChangeTracker change_tracker0;
    slint::private_api::ChangeTracker change_tracker1;
    CtrlButton_root_3 ctrlbutton_771;
    MenuItem_root_8 menuitem_778;
    MenuSep_root_27 menusep_787;
    MenuItem_root_8 menuitem_788;
    MenuItem_root_8 menuitem_789;
    MenuSep_root_27 menusep_790;
    Stepper_root_28 stepper_791;
    Stepper_root_28 stepper_792;
    Stepper_root_28 stepper_793;
    slint::cbindgen_private::BoxShadow _shadow_755 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_757 = {};
    slint::cbindgen_private::Clip _clip_758 = {};
    slint::cbindgen_private::TouchArea toucharea_759 = {};
    slint::cbindgen_private::Rectangle rectangle_760 = {};
    slint::cbindgen_private::Empty empty_762 = {};
    slint::cbindgen_private::SimpleText text_766 = {};
    slint::cbindgen_private::Empty empty_770 = {};
    slint::cbindgen_private::Empty rectangle_772 = {};
    slint::cbindgen_private::Clip _clip_773 = {};
    slint::cbindgen_private::Flickable fl_774 = {};
    slint::cbindgen_private::Empty fl_viewport_775 = {};
    slint::cbindgen_private::Empty inner_776 = {};
    slint::cbindgen_private::Empty empty_777 = {};
    slint::cbindgen_private::Clip bar_visibility_783 = {};
    slint::cbindgen_private::Empty bar_784 = {};
    slint::cbindgen_private::BasicBorderRectangle thumb_785 = {};
    slint::cbindgen_private::TouchArea tta_786 = {};
    slint::private_api::Conditional<class Component_empty_763> repeater_0;
    slint::private_api::Conditional<class Component_empty_767> repeater_1;
    slint::private_api::Repeater<class Component_menuitem_779, TrackRow> repeater_2;
    slint::private_api::Conditional<class Component_menuitem_781> repeater_3;
    slint::Timer timer0;
    auto update_timers () -> void;
    auto fn_rectangle_772_scroll_to (float arg_0) const -> void;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class AppWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class AppWindow const * parent) -> slint::ComponentHandle<Component__shadow_755>;
    ~Component__shadow_755 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component__shadow_755>;
};

class Component_settingspanel_795 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class AppWindow const> parent;
    SettingsPanel_root_94 settingspanel_795;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class AppWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class AppWindow const * parent) -> slint::ComponentHandle<Component_settingspanel_795>;
    ~Component_settingspanel_795 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_settingspanel_795>;
};

class Component_rectangle_797 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class AppWindow const> parent;
    slint::private_api::Property<slint::SharedVector<float>> rectangle_797_empty_805_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_797_empty_805_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_797_empty_805_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> rectangle_797_empty_808_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_797_empty_808_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_797_empty_808_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> rectangle_797_empty_810_layout_cache;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_797_empty_810_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_797_empty_810_layoutinfo_v;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_797_rectangle_812_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_797_rectangle_812_layoutinfo_v;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_797_rectangle_815_layoutinfo_h;
    slint::private_api::Property<slint::private_api::LayoutInfo> rectangle_797_rectangle_815_layoutinfo_v;
    slint::private_api::Property<float> rectangle_797_text_813_min_height;
    slint::private_api::Property<float> rectangle_797_text_813_min_width;
    slint::private_api::Property<float> rectangle_797_text_813_preferred_height;
    slint::private_api::Property<float> rectangle_797_text_813_preferred_width;
    slint::private_api::Property<float> rectangle_797_text_816_min_height;
    slint::private_api::Property<float> rectangle_797_text_816_min_width;
    slint::private_api::Property<float> rectangle_797_text_816_preferred_height;
    slint::private_api::Property<float> rectangle_797_text_816_preferred_width;
    slint::cbindgen_private::Rectangle rectangle_797 = {};
    slint::cbindgen_private::TouchArea toucharea_798 = {};
    slint::cbindgen_private::BoxShadow _shadow_799 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_800 = {};
    slint::cbindgen_private::Clip _clip_801 = {};
    slint::cbindgen_private::TouchArea toucharea_802 = {};
    slint::cbindgen_private::Rectangle rectangle_803 = {};
    slint::cbindgen_private::TouchArea toucharea_804 = {};
    slint::cbindgen_private::SimpleText text_806 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_807 = {};
    slint::cbindgen_private::TextInput ut_809 = {};
    slint::cbindgen_private::Empty empty_810 = {};
    slint::cbindgen_private::TouchArea toucharea_811 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_812 = {};
    slint::cbindgen_private::SimpleText text_813 = {};
    slint::cbindgen_private::TouchArea toucharea_814 = {};
    slint::cbindgen_private::BasicBorderRectangle rectangle_815 = {};
    slint::cbindgen_private::SimpleText text_816 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class AppWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class AppWindow const * parent) -> slint::ComponentHandle<Component_rectangle_797>;
    ~Component_rectangle_797 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_797>;
};

class Component_contextmenu_818 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class AppWindow const> parent;
    ContextMenu_root_173 contextmenu_818;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class AppWindow const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class AppWindow const * parent) -> slint::ComponentHandle<Component_contextmenu_818>;
    ~Component_contextmenu_818 ();
    auto init () -> void;
    auto box_layout_data (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::BoxLayoutCellData;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_contextmenu_818>;
};

class AppWindow {
    SharedGlobals m_globals;
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    private:
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Callback<void()> root_426_ab_clear;
    slint::private_api::Callback<void()> root_426_ab_set_a;
    slint::private_api::Callback<void()> root_426_ab_set_b;
    slint::private_api::Callback<void(float)> root_426_adjust_volume;
    slint::private_api::Callback<void(slint::SharedString)> root_426_apply_profile;
    slint::private_api::Property<std::shared_ptr<slint::Model<slint::SharedString>>> root_426_audio_eq_labels;
    slint::private_api::Callback<void(slint::SharedString)> root_426_audio_eq_preset;
    slint::private_api::Property<bool> root_426_bottom_hovered;
    slint::private_api::Callback<void()> root_426_clear_recent;
    slint::private_api::Callback<void(slint::SharedString)> root_426_command;
    slint::private_api::Property<bool> root_426_cursor_hidden;
    slint::private_api::Callback<void()> root_426_cycle_repeat;
    slint::private_api::Callback<void()> root_426_flash_volume_osd;
    slint::private_api::Property<bool> root_426_fullscreen;
    slint::private_api::Property<int> root_426_idle_ticks;
    slint::private_api::Callback<void(slint::SharedString, bool, bool, bool)> root_426_key;
    slint::private_api::Callback<void()> root_426_load_external_sub;
    slint::private_api::Callback<void()> root_426_next_file;
    slint::private_api::Callback<void()> root_426_open_clipboard;
    slint::private_api::Callback<void()> root_426_open_config;
    slint::private_api::Callback<void()> root_426_open_disc;
    slint::private_api::Callback<void()> root_426_open_file;
    slint::private_api::Callback<void()> root_426_open_folder;
    slint::private_api::Callback<void()> root_426_open_iso;
    slint::private_api::Callback<void()> root_426_open_project;
    slint::private_api::Callback<void(slint::SharedString)> root_426_open_recent;
    slint::private_api::Callback<void()> root_426_open_url;
    slint::private_api::Property<std::int64_t> root_426_optimized_hide_timer_427_interval;
    slint::private_api::Property<bool> root_426_optimized_hide_timer_427_running;
    slint::private_api::Callback<void()> root_426_optimized_hide_timer_427_triggered;
    slint::private_api::Property<std::int64_t> root_426_optimized_toast_timer_428_interval;
    slint::private_api::Property<bool> root_426_optimized_toast_timer_428_running;
    slint::private_api::Callback<void()> root_426_optimized_toast_timer_428_triggered;
    slint::private_api::Property<std::int64_t> root_426_optimized_vol_osd_timer_429_interval;
    slint::private_api::Property<bool> root_426_optimized_vol_osd_timer_429_running;
    slint::private_api::Callback<void()> root_426_optimized_vol_osd_timer_429_triggered;
    slint::private_api::Callback<void(slint::SharedString)> root_426_panel_opened;
    slint::private_api::Callback<void()> root_426_pick_font;
    slint::private_api::Callback<void(float)> root_426_pick_speed;
    slint::private_api::Callback<void()> root_426_playlist_add_files;
    slint::private_api::Callback<void()> root_426_playlist_add_folder;
    slint::private_api::Callback<void()> root_426_playlist_clear;
    slint::private_api::Callback<void(int)> root_426_playlist_play;
    slint::private_api::Callback<void(int)> root_426_playlist_remove;
    slint::private_api::Callback<void()> root_426_prev_file;
    slint::private_api::Property<float> root_426_rectangle_433_width;
    slint::private_api::Callback<void(float, float)> root_426_request_context_menu;
    slint::private_api::Callback<void()> root_426_reset_video;
    slint::private_api::Callback<void(int)> root_426_seek_chapter;
    slint::private_api::Callback<void(float, bool)> root_426_seek_fraction;
    slint::private_api::Callback<void(int)> root_426_select_audio;
    slint::private_api::Callback<void(slint::SharedString)> root_426_select_audio_device;
    slint::private_api::Callback<void(int)> root_426_select_sub;
    slint::private_api::Callback<void(int)> root_426_select_video;
    slint::private_api::Callback<void(bool)> root_426_set_always_on_top;
    slint::private_api::Callback<void(slint::SharedString)> root_426_set_aspect;
    slint::private_api::Callback<void(float)> root_426_set_audio_delay;
    slint::private_api::Callback<void(int, int)> root_426_set_audio_eq;
    slint::private_api::Callback<void(int)> root_426_set_brightness;
    slint::private_api::Callback<void(int)> root_426_set_contrast;
    slint::private_api::Callback<void(bool)> root_426_set_os_cursor_hidden;
    slint::private_api::Callback<void(int)> root_426_set_saturation;
    slint::private_api::Callback<void(float)> root_426_set_sub_delay;
    slint::private_api::Callback<void(float)> root_426_set_vid_zoom;
    slint::private_api::Callback<void(float)> root_426_set_volume;
    slint::private_api::Property<bool> root_426_show_remaining;
    slint::private_api::Callback<void()> root_426_start_window_drag;
    slint::private_api::Callback<void(slint::SharedString)> root_426_submit_url;
    slint::private_api::Callback<void()> root_426_toggle_audio_eq;
    slint::private_api::Callback<void()> root_426_toggle_deinterlace;
    slint::private_api::Callback<void()> root_426_toggle_fullscreen;
    slint::private_api::Callback<void()> root_426_toggle_mute;
    slint::private_api::Callback<void()> root_426_toggle_pause;
    slint::private_api::Callback<void()> root_426_toggle_shuffle;
    slint::private_api::Property<bool> root_426_top_hovered;
    slint::private_api::Callback<void(slint::SharedString, slint::SharedString)> root_426_update_setting;
    slint::private_api::Property<slint::Image> root_426_video_frame;
    slint::private_api::Property<int> root_426_video_height;
    slint::private_api::Property<int> root_426_video_width;
    slint::private_api::Property<bool> root_426_vol_osd_show;
    slint::private_api::Property<int> root_426_vol_osd_ticks;
    slint::private_api::Callback<void()> root_426_win_close;
    slint::private_api::Callback<void()> root_426_win_maximize;
    slint::private_api::Callback<void()> root_426_win_minimize;
    slint::private_api::ChangeTracker change_tracker0;
    slint::private_api::ChangeTracker change_tracker1;
    slint::private_api::ChangeTracker change_tracker2;
    slint::private_api::ChangeTracker change_tracker3;
    slint::private_api::ChangeTracker change_tracker4;
    slint::private_api::ChangeTracker change_tracker5;
    slint::private_api::ChangeTracker change_tracker6;
    slint::private_api::ChangeTracker change_tracker7;
    slint::cbindgen_private::WindowItem root_426 = {};
    slint::cbindgen_private::FocusScope keyfocus_430 = {};
    slint::cbindgen_private::Clip _visibility_431 = {};
    slint::cbindgen_private::ImageItem image_432 = {};
    slint::cbindgen_private::Rectangle rectangle_433 = {};
    slint::cbindgen_private::TouchArea area_434 = {};
    slint::private_api::Conditional<class Component_empty_435> repeater_0;
    slint::private_api::Conditional<class Component_rectangle_447> repeater_1;
    slint::private_api::Conditional<class Component_rectangle_460> repeater_2;
    slint::private_api::Conditional<class Component_empty_518> repeater_3;
    slint::private_api::Conditional<class Component_rectangle_524> repeater_4;
    slint::private_api::Conditional<class Component__shadow_531> repeater_5;
    slint::private_api::Conditional<class Component__shadow_540> repeater_6;
    slint::private_api::Conditional<class Component__shadow_576> repeater_7;
    slint::private_api::Conditional<class Component__shadow_612> repeater_8;
    slint::private_api::Conditional<class Component__shadow_653> repeater_9;
    slint::private_api::Conditional<class Component__shadow_678> repeater_10;
    slint::private_api::Conditional<class Component__shadow_731> repeater_11;
    slint::private_api::Conditional<class Component__shadow_755> repeater_12;
    slint::private_api::Conditional<class Component_settingspanel_795> repeater_13;
    slint::private_api::Conditional<class Component_rectangle_797> repeater_14;
    slint::private_api::Conditional<class Component_contextmenu_818> repeater_15;
    slint::Timer timer0;
    slint::Timer timer1;
    slint::Timer timer2;
    auto update_timers () -> void;
    public:
    auto fn_clear_focus () const -> void;
    auto fn_close_panels () const -> void;
    auto fn_focus () const -> void;
    auto fn_keyname (slint::SharedString arg_0) const -> slint::SharedString;
    auto fn_seek_to (float arg_0, bool arg_1) const -> void;
    auto fn_toggle_panel (slint::SharedString arg_0) const -> void;
    private:
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter (slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create () -> slint::ComponentHandle<AppWindow>;
    ~AppWindow ();
    auto get_ab_a () const -> float;
    auto set_ab_a (const float &value) const -> void;
    auto get_ab_b () const -> float;
    auto set_ab_b (const float &value) const -> void;
    auto invoke_ab_clear () const -> void;
    template<std::invocable<> Functor> auto on_ab_clear (Functor && callback_handler) const;
    auto get_ab_enabled () const -> bool;
    auto set_ab_enabled (const bool &value) const -> void;
    auto invoke_ab_set_a () const -> void;
    template<std::invocable<> Functor> auto on_ab_set_a (Functor && callback_handler) const;
    auto invoke_ab_set_b () const -> void;
    template<std::invocable<> Functor> auto on_ab_set_b (Functor && callback_handler) const;
    auto get_active_panel () const -> slint::SharedString;
    auto set_active_panel (const slint::SharedString &value) const -> void;
    auto invoke_adjust_volume (float arg_0) const -> void;
    template<std::invocable<float> Functor> auto on_adjust_volume (Functor && callback_handler) const;
    auto get_app_version () const -> slint::SharedString;
    auto set_app_version (const slint::SharedString &value) const -> void;
    auto invoke_apply_profile (slint::SharedString arg_0) const -> void;
    template<std::invocable<slint::SharedString> Functor> auto on_apply_profile (Functor && callback_handler) const;
    auto get_audio_delay () const -> float;
    auto set_audio_delay (const float &value) const -> void;
    auto get_audio_devices () const -> std::shared_ptr<slint::Model<ChoiceRow>>;
    auto set_audio_devices (const std::shared_ptr<slint::Model<ChoiceRow>> &value) const -> void;
    auto get_audio_eq_bands () const -> std::shared_ptr<slint::Model<int>>;
    auto set_audio_eq_bands (const std::shared_ptr<slint::Model<int>> &value) const -> void;
    auto get_audio_eq_enabled () const -> bool;
    auto set_audio_eq_enabled (const bool &value) const -> void;
    auto invoke_audio_eq_preset (slint::SharedString arg_0) const -> void;
    template<std::invocable<slint::SharedString> Functor> auto on_audio_eq_preset (Functor && callback_handler) const;
    auto get_brightness () const -> int;
    auto set_brightness (const int &value) const -> void;
    auto get_cfg_font_path () const -> slint::SharedString;
    auto set_cfg_font_path (const slint::SharedString &value) const -> void;
    auto get_cfg_font_size () const -> int;
    auto set_cfg_font_size (const int &value) const -> void;
    auto get_cfg_fps () const -> int;
    auto set_cfg_fps (const int &value) const -> void;
    auto get_cfg_glyph_range () const -> int;
    auto set_cfg_glyph_range (const int &value) const -> void;
    auto get_cfg_language () const -> slint::SharedString;
    auto set_cfg_language (const slint::SharedString &value) const -> void;
    auto get_cfg_log_level () const -> slint::SharedString;
    auto set_cfg_log_level (const slint::SharedString &value) const -> void;
    auto get_cfg_log_limit () const -> int;
    auto set_cfg_log_limit (const int &value) const -> void;
    auto get_cfg_recent_limit () const -> int;
    auto set_cfg_recent_limit (const int &value) const -> void;
    auto get_cfg_rounding () const -> bool;
    auto set_cfg_rounding (const bool &value) const -> void;
    auto get_cfg_scale () const -> float;
    auto set_cfg_scale (const float &value) const -> void;
    auto get_cfg_shadow () const -> bool;
    auto set_cfg_shadow (const bool &value) const -> void;
    auto get_cfg_space_play_last () const -> bool;
    auto set_cfg_space_play_last (const bool &value) const -> void;
    auto get_cfg_theme () const -> slint::SharedString;
    auto set_cfg_theme (const slint::SharedString &value) const -> void;
    auto get_cfg_use_config () const -> bool;
    auto set_cfg_use_config (const bool &value) const -> void;
    auto get_cfg_watch_later () const -> bool;
    auto set_cfg_watch_later (const bool &value) const -> void;
    auto get_cfg_window_save () const -> bool;
    auto set_cfg_window_save (const bool &value) const -> void;
    auto get_cfg_window_single () const -> bool;
    auto set_cfg_window_single (const bool &value) const -> void;
    auto get_chapters () const -> std::shared_ptr<slint::Model<ChapterRow>>;
    auto set_chapters (const std::shared_ptr<slint::Model<ChapterRow>> &value) const -> void;
    auto invoke_clear_focus () const -> void;
    auto invoke_clear_recent () const -> void;
    template<std::invocable<> Functor> auto on_clear_recent (Functor && callback_handler) const;
    auto invoke_command (slint::SharedString arg_0) const -> void;
    template<std::invocable<slint::SharedString> Functor> auto on_command (Functor && callback_handler) const;
    auto get_command_text () const -> slint::SharedString;
    auto set_command_text (const slint::SharedString &value) const -> void;
    auto get_contrast () const -> int;
    auto set_contrast (const int &value) const -> void;
    auto get_controls_visible () const -> bool;
    auto set_controls_visible (const bool &value) const -> void;
    auto get_ctx_audio_tracks () const -> std::shared_ptr<slint::Model<TrackRow>>;
    auto set_ctx_audio_tracks (const std::shared_ptr<slint::Model<TrackRow>> &value) const -> void;
    auto get_ctx_page () const -> slint::SharedString;
    auto set_ctx_page (const slint::SharedString &value) const -> void;
    auto get_ctx_show () const -> bool;
    auto set_ctx_show (const bool &value) const -> void;
    auto get_ctx_sub_tracks () const -> std::shared_ptr<slint::Model<TrackRow>>;
    auto set_ctx_sub_tracks (const std::shared_ptr<slint::Model<TrackRow>> &value) const -> void;
    auto get_ctx_video_tracks () const -> std::shared_ptr<slint::Model<TrackRow>>;
    auto set_ctx_video_tracks (const std::shared_ptr<slint::Model<TrackRow>> &value) const -> void;
    auto get_ctx_x () const -> float;
    auto set_ctx_x (const float &value) const -> void;
    auto get_ctx_y () const -> float;
    auto set_ctx_y (const float &value) const -> void;
    auto get_current_aspect () const -> slint::SharedString;
    auto set_current_aspect (const slint::SharedString &value) const -> void;
    auto get_current_time () const -> float;
    auto set_current_time (const float &value) const -> void;
    auto invoke_cycle_repeat () const -> void;
    template<std::invocable<> Functor> auto on_cycle_repeat (Functor && callback_handler) const;
    auto get_def_volume () const -> float;
    auto set_def_volume (const float &value) const -> void;
    auto get_deinterlace () const -> bool;
    auto set_deinterlace (const bool &value) const -> void;
    auto get_duration () const -> float;
    auto set_duration (const float &value) const -> void;
    auto invoke_flash_volume_osd () const -> void;
    template<std::invocable<> Functor> auto on_flash_volume_osd (Functor && callback_handler) const;
    auto invoke_focus () const -> void;
    auto get_fullscreen () const -> bool;
    auto set_fullscreen (const bool &value) const -> void;
    auto get_has_file () const -> bool;
    auto set_has_file (const bool &value) const -> void;
    auto get_info_rows () const -> std::shared_ptr<slint::Model<InfoRow>>;
    auto set_info_rows (const std::shared_ptr<slint::Model<InfoRow>> &value) const -> void;
    auto invoke_key (slint::SharedString arg_0, bool arg_1, bool arg_2, bool arg_3) const -> void;
    template<std::invocable<slint::SharedString, bool, bool, bool> Functor> auto on_key (Functor && callback_handler) const;
    auto invoke_load_external_sub () const -> void;
    template<std::invocable<> Functor> auto on_load_external_sub (Functor && callback_handler) const;
    auto get_max_volume () const -> float;
    auto set_max_volume (const float &value) const -> void;
    auto get_media_title () const -> slint::SharedString;
    auto set_media_title (const slint::SharedString &value) const -> void;
    auto get_muted () const -> bool;
    auto set_muted (const bool &value) const -> void;
    auto invoke_next_file () const -> void;
    template<std::invocable<> Functor> auto on_next_file (Functor && callback_handler) const;
    auto invoke_open_clipboard () const -> void;
    template<std::invocable<> Functor> auto on_open_clipboard (Functor && callback_handler) const;
    auto invoke_open_config () const -> void;
    template<std::invocable<> Functor> auto on_open_config (Functor && callback_handler) const;
    auto invoke_open_disc () const -> void;
    template<std::invocable<> Functor> auto on_open_disc (Functor && callback_handler) const;
    auto invoke_open_file () const -> void;
    template<std::invocable<> Functor> auto on_open_file (Functor && callback_handler) const;
    auto invoke_open_folder () const -> void;
    template<std::invocable<> Functor> auto on_open_folder (Functor && callback_handler) const;
    auto invoke_open_iso () const -> void;
    template<std::invocable<> Functor> auto on_open_iso (Functor && callback_handler) const;
    auto invoke_open_project () const -> void;
    template<std::invocable<> Functor> auto on_open_project (Functor && callback_handler) const;
    auto invoke_open_recent (slint::SharedString arg_0) const -> void;
    template<std::invocable<slint::SharedString> Functor> auto on_open_recent (Functor && callback_handler) const;
    auto invoke_open_url () const -> void;
    template<std::invocable<> Functor> auto on_open_url (Functor && callback_handler) const;
    auto get_panel_audio_tracks () const -> std::shared_ptr<slint::Model<TrackRow>>;
    auto set_panel_audio_tracks (const std::shared_ptr<slint::Model<TrackRow>> &value) const -> void;
    auto invoke_panel_opened (slint::SharedString arg_0) const -> void;
    template<std::invocable<slint::SharedString> Functor> auto on_panel_opened (Functor && callback_handler) const;
    auto get_panel_sub_tracks () const -> std::shared_ptr<slint::Model<TrackRow>>;
    auto set_panel_sub_tracks (const std::shared_ptr<slint::Model<TrackRow>> &value) const -> void;
    auto invoke_pick_font () const -> void;
    template<std::invocable<> Functor> auto on_pick_font (Functor && callback_handler) const;
    auto invoke_pick_speed (float arg_0) const -> void;
    template<std::invocable<float> Functor> auto on_pick_speed (Functor && callback_handler) const;
    auto get_pinned () const -> bool;
    auto set_pinned (const bool &value) const -> void;
    auto get_playing () const -> bool;
    auto set_playing (const bool &value) const -> void;
    auto invoke_playlist_add_files () const -> void;
    template<std::invocable<> Functor> auto on_playlist_add_files (Functor && callback_handler) const;
    auto invoke_playlist_add_folder () const -> void;
    template<std::invocable<> Functor> auto on_playlist_add_folder (Functor && callback_handler) const;
    auto invoke_playlist_clear () const -> void;
    template<std::invocable<> Functor> auto on_playlist_clear (Functor && callback_handler) const;
    auto get_playlist_items () const -> std::shared_ptr<slint::Model<PlaylistRow>>;
    auto set_playlist_items (const std::shared_ptr<slint::Model<PlaylistRow>> &value) const -> void;
    auto invoke_playlist_play (int arg_0) const -> void;
    template<std::invocable<int> Functor> auto on_playlist_play (Functor && callback_handler) const;
    auto invoke_playlist_remove (int arg_0) const -> void;
    template<std::invocable<int> Functor> auto on_playlist_remove (Functor && callback_handler) const;
    auto invoke_prev_file () const -> void;
    template<std::invocable<> Functor> auto on_prev_file (Functor && callback_handler) const;
    auto get_profiles () const -> std::shared_ptr<slint::Model<ChoiceRow>>;
    auto set_profiles (const std::shared_ptr<slint::Model<ChoiceRow>> &value) const -> void;
    auto get_recent_items () const -> std::shared_ptr<slint::Model<ChoiceRow>>;
    auto set_recent_items (const std::shared_ptr<slint::Model<ChoiceRow>> &value) const -> void;
    auto get_repeat_mode () const -> slint::SharedString;
    auto set_repeat_mode (const slint::SharedString &value) const -> void;
    auto invoke_request_context_menu (float arg_0, float arg_1) const -> void;
    template<std::invocable<float, float> Functor> auto on_request_context_menu (Functor && callback_handler) const;
    auto invoke_reset_video () const -> void;
    template<std::invocable<> Functor> auto on_reset_video (Functor && callback_handler) const;
    auto get_saturation () const -> int;
    auto set_saturation (const int &value) const -> void;
    auto invoke_seek_chapter (int arg_0) const -> void;
    template<std::invocable<int> Functor> auto on_seek_chapter (Functor && callback_handler) const;
    auto invoke_seek_fraction (float arg_0, bool arg_1) const -> void;
    template<std::invocable<float, bool> Functor> auto on_seek_fraction (Functor && callback_handler) const;
    auto invoke_select_audio (int arg_0) const -> void;
    template<std::invocable<int> Functor> auto on_select_audio (Functor && callback_handler) const;
    auto invoke_select_audio_device (slint::SharedString arg_0) const -> void;
    template<std::invocable<slint::SharedString> Functor> auto on_select_audio_device (Functor && callback_handler) const;
    auto invoke_select_sub (int arg_0) const -> void;
    template<std::invocable<int> Functor> auto on_select_sub (Functor && callback_handler) const;
    auto invoke_select_video (int arg_0) const -> void;
    template<std::invocable<int> Functor> auto on_select_video (Functor && callback_handler) const;
    auto invoke_set_always_on_top (bool arg_0) const -> void;
    template<std::invocable<bool> Functor> auto on_set_always_on_top (Functor && callback_handler) const;
    auto invoke_set_aspect (slint::SharedString arg_0) const -> void;
    template<std::invocable<slint::SharedString> Functor> auto on_set_aspect (Functor && callback_handler) const;
    auto invoke_set_audio_delay (float arg_0) const -> void;
    template<std::invocable<float> Functor> auto on_set_audio_delay (Functor && callback_handler) const;
    auto invoke_set_audio_eq (int arg_0, int arg_1) const -> void;
    template<std::invocable<int, int> Functor> auto on_set_audio_eq (Functor && callback_handler) const;
    auto invoke_set_brightness (int arg_0) const -> void;
    template<std::invocable<int> Functor> auto on_set_brightness (Functor && callback_handler) const;
    auto invoke_set_contrast (int arg_0) const -> void;
    template<std::invocable<int> Functor> auto on_set_contrast (Functor && callback_handler) const;
    auto invoke_set_os_cursor_hidden (bool arg_0) const -> void;
    template<std::invocable<bool> Functor> auto on_set_os_cursor_hidden (Functor && callback_handler) const;
    auto invoke_set_saturation (int arg_0) const -> void;
    template<std::invocable<int> Functor> auto on_set_saturation (Functor && callback_handler) const;
    auto invoke_set_sub_delay (float arg_0) const -> void;
    template<std::invocable<float> Functor> auto on_set_sub_delay (Functor && callback_handler) const;
    auto invoke_set_vid_zoom (float arg_0) const -> void;
    template<std::invocable<float> Functor> auto on_set_vid_zoom (Functor && callback_handler) const;
    auto invoke_set_volume (float arg_0) const -> void;
    template<std::invocable<float> Functor> auto on_set_volume (Functor && callback_handler) const;
    auto get_settings_tab () const -> slint::SharedString;
    auto set_settings_tab (const slint::SharedString &value) const -> void;
    auto get_shuffle () const -> bool;
    auto set_shuffle (const bool &value) const -> void;
    auto get_sleep_min () const -> int;
    auto set_sleep_min (const int &value) const -> void;
    auto get_sleep_remaining () const -> slint::SharedString;
    auto set_sleep_remaining (const slint::SharedString &value) const -> void;
    auto get_speed () const -> float;
    auto set_speed (const float &value) const -> void;
    auto invoke_start_window_drag () const -> void;
    template<std::invocable<> Functor> auto on_start_window_drag (Functor && callback_handler) const;
    auto get_sub_active () const -> bool;
    auto set_sub_active (const bool &value) const -> void;
    auto get_sub_delay () const -> float;
    auto set_sub_delay (const float &value) const -> void;
    auto get_sub_page () const -> slint::SharedString;
    auto set_sub_page (const slint::SharedString &value) const -> void;
    auto get_sub_position () const -> int;
    auto set_sub_position (const int &value) const -> void;
    auto get_sub_scale () const -> float;
    auto set_sub_scale (const float &value) const -> void;
    auto get_sub_visible () const -> bool;
    auto set_sub_visible (const bool &value) const -> void;
    auto invoke_submit_url (slint::SharedString arg_0) const -> void;
    template<std::invocable<slint::SharedString> Functor> auto on_submit_url (Functor && callback_handler) const;
    auto get_theme_name () const -> slint::SharedString;
    auto set_theme_name (const slint::SharedString &value) const -> void;
    auto get_theme_rounding () const -> bool;
    auto set_theme_rounding (const bool &value) const -> void;
    auto get_theme_shadows () const -> bool;
    auto set_theme_shadows (const bool &value) const -> void;
    auto get_toast () const -> slint::SharedString;
    auto set_toast (const slint::SharedString &value) const -> void;
    auto invoke_toggle_audio_eq () const -> void;
    template<std::invocable<> Functor> auto on_toggle_audio_eq (Functor && callback_handler) const;
    auto invoke_toggle_deinterlace () const -> void;
    template<std::invocable<> Functor> auto on_toggle_deinterlace (Functor && callback_handler) const;
    auto invoke_toggle_fullscreen () const -> void;
    template<std::invocable<> Functor> auto on_toggle_fullscreen (Functor && callback_handler) const;
    auto invoke_toggle_mute () const -> void;
    template<std::invocable<> Functor> auto on_toggle_mute (Functor && callback_handler) const;
    auto invoke_toggle_pause () const -> void;
    template<std::invocable<> Functor> auto on_toggle_pause (Functor && callback_handler) const;
    auto invoke_toggle_shuffle () const -> void;
    template<std::invocable<> Functor> auto on_toggle_shuffle (Functor && callback_handler) const;
    auto invoke_update_setting (slint::SharedString arg_0, slint::SharedString arg_1) const -> void;
    template<std::invocable<slint::SharedString, slint::SharedString> Functor> auto on_update_setting (Functor && callback_handler) const;
    auto get_url_show () const -> bool;
    auto set_url_show (const bool &value) const -> void;
    auto get_url_text () const -> slint::SharedString;
    auto set_url_text (const slint::SharedString &value) const -> void;
    auto get_vid_zoom () const -> float;
    auto set_vid_zoom (const float &value) const -> void;
    auto get_video_frame () const -> slint::Image;
    auto set_video_frame (const slint::Image &value) const -> void;
    auto get_video_height () const -> int;
    auto set_video_height (const int &value) const -> void;
    auto get_video_width () const -> int;
    auto set_video_width (const int &value) const -> void;
    auto get_volume () const -> float;
    auto set_volume (const float &value) const -> void;
    auto invoke_win_close () const -> void;
    template<std::invocable<> Functor> auto on_win_close (Functor && callback_handler) const;
    auto invoke_win_maximize () const -> void;
    template<std::invocable<> Functor> auto on_win_maximize (Functor && callback_handler) const;
    auto invoke_win_minimize () const -> void;
    template<std::invocable<> Functor> auto on_win_minimize (Functor && callback_handler) const;
    private:
    auto get_audio_eq_labels () const = delete /* the property 'audio-eq-labels' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public */;
    auto set_audio_eq_labels (const auto &) const = delete /* property 'audio-eq-labels' is declared as private. Declare it as 'in' or 'in-out' to make it public */;
    auto get_bottom_hovered () const = delete /* the property 'bottom-hovered' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public */;
    auto set_bottom_hovered (const auto &) const = delete /* property 'bottom-hovered' is declared as private. Declare it as 'in' or 'in-out' to make it public */;
    auto invoke_close_panels () const = delete /* the function 'close-panels' is declared as private. Declare it as 'public' */;
    auto get_cursor_hidden () const = delete /* the property 'cursor-hidden' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public */;
    auto set_cursor_hidden (const auto &) const = delete /* property 'cursor-hidden' is declared as private. Declare it as 'in' or 'in-out' to make it public */;
    auto get_idle_ticks () const = delete /* the property 'idle-ticks' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public */;
    auto set_idle_ticks (const auto &) const = delete /* property 'idle-ticks' is declared as private. Declare it as 'in' or 'in-out' to make it public */;
    auto invoke_keyname (slint::SharedString) const = delete /* the function 'keyname' is declared as private. Declare it as 'public' */;
    auto invoke_seek_to (float, bool) const = delete /* the function 'seek-to' is declared as private. Declare it as 'public' */;
    auto get_show_remaining () const = delete /* the property 'show-remaining' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public */;
    auto set_show_remaining (const auto &) const = delete /* property 'show-remaining' is declared as private. Declare it as 'in' or 'in-out' to make it public */;
    auto invoke_toggle_panel (slint::SharedString) const = delete /* the function 'toggle-panel' is declared as private. Declare it as 'public' */;
    auto get_top_hovered () const = delete /* the property 'top-hovered' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public */;
    auto set_top_hovered (const auto &) const = delete /* property 'top-hovered' is declared as private. Declare it as 'in' or 'in-out' to make it public */;
    auto get_vol_osd_show () const = delete /* the property 'vol-osd-show' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public */;
    auto set_vol_osd_show (const auto &) const = delete /* property 'vol-osd-show' is declared as private. Declare it as 'in' or 'in-out' to make it public */;
    auto get_vol_osd_ticks () const = delete /* the property 'vol-osd-ticks' is declared as private. Declare it as 'in', 'out', or 'in-out' to make it public */;
    auto set_vol_osd_ticks (const auto &) const = delete /* property 'vol-osd-ticks' is declared as private. Declare it as 'in' or 'in-out' to make it public */;
    public:
    auto show () -> void;
    auto hide () -> void;
    auto window () const -> slint::Window&;
    auto run () -> void;
    friend class Theme_820;
    friend class PlayerState_822;
    friend class Catalog_823;
    friend class FluentPalette_825;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, AppWindow>;
    friend class Component_empty_435;
    friend class Component_rectangle_447;
    friend class Component_empty_463;
    friend class Component_rectangle_480;
    friend class Component_rectangle_482;
    friend class Component_rectangle_460;
    friend class Component_empty_518;
    friend class Component_rectangle_524;
    friend class Component_menuitem_537;
    friend class Component__shadow_531;
    friend class Component_empty_548;
    friend class Component_empty_552;
    friend class Component_menuitem_563;
    friend class Component_text_569;
    friend class Component__shadow_540;
    friend class Component_empty_584;
    friend class Component_empty_588;
    friend class Component_stepper_605;
    friend class Component__shadow_576;
    friend class Component_empty_620;
    friend class Component_empty_624;
    friend class Component_menuitem_635;
    friend class Component__shadow_612;
    friend class Component_empty_661;
    friend class Component_empty_665;
    friend class Component__shadow_653;
    friend class Component_empty_686;
    friend class Component_empty_690;
    friend class Component_appicon_706;
    friend class Component_text_708;
    friend class Component_rectangle_701;
    friend class Component_text_716;
    friend class Component__shadow_678;
    friend class Component_empty_739;
    friend class Component_empty_743;
    friend class Component_empty_749;
    friend class Component__shadow_731;
    friend class Component_empty_763;
    friend class Component_empty_767;
    friend class Component_menuitem_779;
    friend class Component_menuitem_781;
    friend class Component__shadow_755;
    friend class Component_settingspanel_795;
    friend class Component_rectangle_797;
    friend class Component_contextmenu_818;
    friend class slint::private_api::WindowAdapterRc;
    friend class Component_empty_435;
    friend class Component_rectangle_447;
    friend class Component_rectangle_460;
    friend class Component_empty_463;
    friend class Component_rectangle_480;
    friend class Component_rectangle_482;
    friend class Component_empty_518;
    friend class Component_rectangle_524;
    friend class Component__shadow_531;
    friend class Component_menuitem_537;
    friend class Component__shadow_540;
    friend class Component_empty_548;
    friend class Component_empty_552;
    friend class Component_menuitem_563;
    friend class Component_text_569;
    friend class Component__shadow_576;
    friend class Component_empty_584;
    friend class Component_empty_588;
    friend class Component_stepper_605;
    friend class Component__shadow_612;
    friend class Component_empty_620;
    friend class Component_empty_624;
    friend class Component_menuitem_635;
    friend class Component__shadow_653;
    friend class Component_empty_661;
    friend class Component_empty_665;
    friend class Component__shadow_678;
    friend class Component_empty_686;
    friend class Component_empty_690;
    friend class Component_rectangle_701;
    friend class Component_appicon_706;
    friend class Component_text_708;
    friend class Component_text_716;
    friend class Component__shadow_731;
    friend class Component_empty_739;
    friend class Component_empty_743;
    friend class Component_empty_749;
    friend class Component__shadow_755;
    friend class Component_empty_763;
    friend class Component_empty_767;
    friend class Component_menuitem_779;
    friend class Component_menuitem_781;
    friend class Component_settingspanel_795;
    friend class Component_rectangle_797;
    friend class Component_contextmenu_818;
};

template<std::invocable<> Functor> inline auto AppWindow::on_ab_clear (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_ab_clear.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_ab_set_a (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_ab_set_a.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_ab_set_b (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_ab_set_b.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<float> Functor> inline auto AppWindow::on_adjust_volume (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_adjust_volume.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<slint::SharedString> Functor> inline auto AppWindow::on_apply_profile (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_apply_profile.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<slint::SharedString> Functor> inline auto AppWindow::on_audio_eq_preset (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_audio_eq_preset.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_clear_recent (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_clear_recent.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<slint::SharedString> Functor> inline auto AppWindow::on_command (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_command.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_cycle_repeat (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_cycle_repeat.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_flash_volume_osd (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_flash_volume_osd.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<slint::SharedString, bool, bool, bool> Functor> inline auto AppWindow::on_key (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_key.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_load_external_sub (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_load_external_sub.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_next_file (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_next_file.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_open_clipboard (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_open_clipboard.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_open_config (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_open_config.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_open_disc (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_open_disc.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_open_file (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_open_file.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_open_folder (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_open_folder.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_open_iso (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_open_iso.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_open_project (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_open_project.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<slint::SharedString> Functor> inline auto AppWindow::on_open_recent (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_open_recent.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_open_url (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_open_url.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<slint::SharedString> Functor> inline auto AppWindow::on_panel_opened (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_panel_opened.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_pick_font (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_pick_font.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<float> Functor> inline auto AppWindow::on_pick_speed (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_pick_speed.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_playlist_add_files (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_playlist_add_files.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_playlist_add_folder (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_playlist_add_folder.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_playlist_clear (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_playlist_clear.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<int> Functor> inline auto AppWindow::on_playlist_play (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_playlist_play.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<int> Functor> inline auto AppWindow::on_playlist_remove (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_playlist_remove.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_prev_file (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_prev_file.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<float, float> Functor> inline auto AppWindow::on_request_context_menu (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_request_context_menu.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_reset_video (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_reset_video.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<int> Functor> inline auto AppWindow::on_seek_chapter (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_seek_chapter.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<float, bool> Functor> inline auto AppWindow::on_seek_fraction (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_seek_fraction.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<int> Functor> inline auto AppWindow::on_select_audio (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_select_audio.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<slint::SharedString> Functor> inline auto AppWindow::on_select_audio_device (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_select_audio_device.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<int> Functor> inline auto AppWindow::on_select_sub (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_select_sub.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<int> Functor> inline auto AppWindow::on_select_video (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_select_video.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<bool> Functor> inline auto AppWindow::on_set_always_on_top (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_set_always_on_top.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<slint::SharedString> Functor> inline auto AppWindow::on_set_aspect (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_set_aspect.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<float> Functor> inline auto AppWindow::on_set_audio_delay (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_set_audio_delay.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<int, int> Functor> inline auto AppWindow::on_set_audio_eq (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_set_audio_eq.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<int> Functor> inline auto AppWindow::on_set_brightness (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_set_brightness.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<int> Functor> inline auto AppWindow::on_set_contrast (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_set_contrast.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<bool> Functor> inline auto AppWindow::on_set_os_cursor_hidden (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_set_os_cursor_hidden.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<int> Functor> inline auto AppWindow::on_set_saturation (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_set_saturation.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<float> Functor> inline auto AppWindow::on_set_sub_delay (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_set_sub_delay.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<float> Functor> inline auto AppWindow::on_set_vid_zoom (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_set_vid_zoom.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<float> Functor> inline auto AppWindow::on_set_volume (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_set_volume.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_start_window_drag (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_start_window_drag.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<slint::SharedString> Functor> inline auto AppWindow::on_submit_url (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_submit_url.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_toggle_audio_eq (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_toggle_audio_eq.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_toggle_deinterlace (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_toggle_deinterlace.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_toggle_fullscreen (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_toggle_fullscreen.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_toggle_mute (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_toggle_mute.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_toggle_pause (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_toggle_pause.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_toggle_shuffle (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_toggle_shuffle.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<slint::SharedString, slint::SharedString> Functor> inline auto AppWindow::on_update_setting (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_update_setting.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_win_close (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_win_close.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_win_maximize (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_win_maximize.set_handler(std::forward<Functor>(callback_handler));
}

template<std::invocable<> Functor> inline auto AppWindow::on_win_minimize (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->root_426_win_minimize.set_handler(std::forward<Functor>(callback_handler));
}
