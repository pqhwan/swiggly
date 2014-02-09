/*
 * =====================================================================================
 *
 *       Filename:  usagedesign.c
 *
 *    Description:  
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


[Usage Flow]

ENTRANCE
	demo page
		How do you get to this page? marketing, that's how.
		What's the html? A single page, a <form> with a single input.
		What's the action? HTTP POST
		What's the data? email address
		Security issue? SQL injection
		-email address from demo page

	sign up (general user)
		How is this reached? button on the demo page
		what's the html? A single page, a <form>,a FB connect button
		what's the operation? HTTP POST, CREATE USER
		what's the data? name, email, password, (optional) credit card, phone number
		Security issue? SQL injection
		-we must "validate" and sanitize the form data
		-we need "FB oAuth API"

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
		What's the html? a single page, a <ul>, sorting bar, (maybe) a map?
		What's the operation? HTTP GET, READ in data
		What's the data?
		
	agreement (requester, transporter)
		How is this reached? two scenarios:search form in
		What is this? 

	pickup (requester, transporter)

	en route (requester, transporter, third party)

	drop off (requester, transporter, third party)

AFTERMATH

	payment (requester, transporter, third party)

	evaluation (requester, transporter, third party)


[Website components]



