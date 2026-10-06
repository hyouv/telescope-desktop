/*
Telescope: switches for what this fork removes from Telegram Desktop.
Upstream code checks them with one-line patches, so merges stay small.
See the infra repo, docs/desktop-feature-removal.md.
*/
#pragma once

namespace Telescope {

// Sponsored messages, video ads and sponsored search results.
inline constexpr auto kHideSponsored = true;

// Stories: loading, the stories bar, profile story tabs and posting.
inline constexpr auto kHideStories = true;

// Premium purchase and upsell: behaves like a region where Premium can't be bought.
inline constexpr auto kHidePremium = true;

// Every "send a gift" entry point.
inline constexpr auto kHideGifts = true;

// The gifts tab on user / channel profiles and gifts shown around the profile photo.
inline constexpr auto kHideProfileGifts = true;

// Collectible gift actions: upgrade, transfer, resale, buying and offers.
inline constexpr auto kHideCollectibles = true;

// Stars / TON balances and top-ups, star (paid) reactions and sending paid media.
inline constexpr auto kHideStars = true;

// Channel monetization: boosts, revenue and affiliate programs. Plain statistics stay.
inline constexpr auto kHideMonetization = true;

// Promo / nag suggestions above the chat list (birthday, photo, Premium, Stars).
inline constexpr auto kHideDialogsHints = true;

// Premium-only emoji, emoji packs and message effects are left out instead of shown locked.
inline constexpr auto kHideLockedPremium = true;

// Trending emoji packs in the emoji panel and animated emoji suggestions while typing.
inline constexpr auto kHideEmojiSuggestions = true;

// "Apply for me and <peer>" when setting a chat wallpaper.
inline constexpr auto kHideWallpaperForBoth = true;

// Emoji statuses after names (including collectible ones).
inline constexpr auto kHideEmojiStatus = true;

// The Premium star after names, so Premium users look like everyone else.
inline constexpr auto kHidePremiumBadge = true;

// Folder tags in the chat list and the folder color setting.
inline constexpr auto kHideFolderTags = true;

// The name / profile color editor.
inline constexpr auto kHidePeerColors = true;

} // namespace Telescope
