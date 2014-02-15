/*
 * =====================================================================================
 *
 *       Filename:  usagedesign.c
 *
 *    Description:  Breaking all the functionalities down into
 *    							data, operations, html components, api calls
 *
 *        Version:  1.0
 *        Created:  02/08/2014 09:31:53 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hyun Sik Kim
 *   Organization:  Swiggly.org
 *
 * =====================================================================================
 */


[LIST]
-multiple parcels for one trip


[Usage Flow]

ENTRANCE
	demo page
		How do you get to this page? marketing, 
		What's the html? A single page, a <form> with a single input.
		What's the action? HTTP POST
		What's the data? email address
			regex to check for valid email
		Security issue? injection
			sanitize email address
		-email address from demo page

	sign up (general user)
		How is this reached? button on the demo page that says "sign up"
		what's the html? A single page, a <form>, an FB connect button
		what's the operation? <HTTP> POST, <DB> create user
		what's the data? name, email, password, (optional) credit card,
		(optional) phone number (can be made visible)
			if already registered on demo page with email
				find all transaction history for the email, migrate it under the usernmae
		Security issue? injection
			(browser) regex to check for valid email & phone number
			(server) regex to check for valid email & phone number
		-we must "validate" and sanitize the form data
		-we need "FB oAuth API"
		-terms of usage

	log in (genral user)
		How is this reached? form visible on the non-user pages ("demo page", "entrance page")
		what's the html? a <div>, a <form> in it
		what's the operation? HTTP POST, READ in user credentails
		what's the data? (email, password) or ("log in with fb") button
		Security issue? SQL injection, password interception

TRANSACTION

	request (requester) / take request (transporter)
		How is this reached? a search form in the "main page"
		What is this? this is the part where they search for requests or drivers
		What's the html? a single page, a <ul>, sorting bar, an upload button to 
			start a new request/drive, (maybe) a map?
		What's the operation? HTTP GET, SELECT-style queries
			-queries are based on?
				dest./arr. cities, time, pay, package size, delivery time
			-sortings are based on?
				pay, package size, time, pay
			*Use graphics library and design a smooth search experience
		What's the data?
			-all the business data:
				-trip info: ETA, DTA, arr./dest. cities, pickup/dropoff locations
				-vehicle info: vehicle type, car type, size, condition
				-financial info: sender's price range, driver's price range
		
	bargain/agreement (requester, transporter)
		How is this reached? transporter finds a delivery/requester finds a trip
		What is this? this is where needs and prices are matched and negotiated for.
		what's the contents?
			-Request page: map to show itinerary, pickup, dropoff location,
				price info (bargain bar), contact info,
				how much time until DTA, suggestion form(ETA, pay), cargo description,
				requester info
			-Driving page: map to show itinerary, time until ETD, pickup, dropoff radius
				vehicle info, contact info, suggestion form (pickup/dropoff location),
				transporter info
			-pricing guideline
		What's the operation?
			-Real time notifications (suggestions)
		-
				
			

	pickup (requester, transporter)

	en route (requester, transporter, third party)

	drop off (requester, transporter, third party)

AFTERMATH

	payment (requester, transporter, third party)

	evaluation (requester, transporter, third party)


[Website components]
	Hosting website

db.unicorns.insert({name: ’Horny’, dob: new Date(1992,2,13,7,47), loves: [’carrot’,’papaya’],weight: 600, gender: ’m’, vampires: 63});
db.unicorns.insert({name: ’Aurora’, dob: new Date(1991, 0, 24, 13, 0), loves: [’carrot’, ’grape’], weight: 450, gender: ’f’, vampires: 43});
db.unicorns.insert({name: ’Unicrom’, dob: new Date(1973, 1, 9, 22, 10), loves: [’energon’, ’redbull’], weight: 984, gender: ’m’, vampires: 182});
db.unicorns.insert({name: ’Roooooodles’, dob: new Date(1979, 7, 18, 18, 44), loves: [’apple’],weight: 575, gender: ’m’, vampires: 99});
db.unicorns.insert({name: ’Solnara’, dob: new Date(1985, 6, 4, 2, 1), loves:[’apple’, ’carrot’, ’chocolate’], weight:550, gender:’f’, vampires:80});
db.unicorns.insert({name:’Ayna’, dob: new Date(1998, 2, 7, 8, 30), loves: [’strawberry’, ’lemon’], weight: 733, gender: ’f’, vampires: 40});
db.unicorns.insert({name:’Kenny’, dob: new Date(1997, 6, 1, 10, 42), loves: [’grape’, ’lemon’],weight: 690, gender: ’m’, vampires: 39});
db.unicorns.insert({name: ’Raleigh’, dob: new Date(2005, 4, 3, 0, 57), loves: [’apple’, ’sugar’],weight: 421, gender: ’m’, vampires: 2});
db.unicorns.insert({name: ’Leia’, dob: new Date(2001, 9, 8, 14, 53), loves: [’apple’, ’watermelon’], weight: 601, gender: ’f’, vampires: 33});
db.unicorns.insert({name: ’Pilot’, dob: new Date(1997, 2, 1, 5, 3), loves: [’apple’, ’watermelon’], weight: 650, gender: ’m’, vampires: 54});
db.unicorns.insert({name: ’Nimue’, dob: new Date(1999, 11, 20, 16, 15), loves: [’grape’, ’carrot’], weight: 540, gender: ’f’});
db.unicorns.insert({name: ’Dunx’, dob: new Date(1976, 6, 18, 18, 18), loves: [’grape’, ’watermelon’], weight: 704, gender: ’m’, vampires: 165});

