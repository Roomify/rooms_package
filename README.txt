INTRODUCTION
------------
This module adds functionality to the Rooms package
(drupal.org/project/rooms) that allow users to create packages. The definition
of package in this specific case is a pre-defined price for a Room over a
pre-defined period of time.

INSTALLATION
------------
Simply download and activate the module and any listed dependencies (beyond
Rooms that is commerce_stock).

CONFIGURATION
-------------
The module creates a new Product Type called "Rooms Packages" and a content type
to display that Product Type called "Rooms package". The module Commerce Stock is
used to help with availability check before the package is added to the cart.

In order to create a package first create a product selecting the dates and the
specific units that can participate in the package.

Then you can display that package through the Rooms Package content type.

You can also add a product reference field to any other content type to display
the a Rooms Package (just like any Commerce Product), however you need to ensure
that under display settings the Cart line item is set to "Property Booking" in
order for the availability check and subsequent booking creation to work.

FURTHER NOTES
-------------
This is really just a first step into how we can handle packages. Further ideas
and feature requests welcomed.

